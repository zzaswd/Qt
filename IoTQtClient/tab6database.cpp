#include "tab6database.h"
#include "ui_tab6database.h"

Tab6Database::Tab6Database(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab6Database)
{
    ui->setupUi(this);
    flag = 0;
    pIlluLine = new QLineSeries(this);
    pIlluLine->setName("조도");

    pTemp = new QLineSeries(this);
    pTemp->setName("온도");

    pHumi = new QLineSeries(this);
    pHumi->setName("습도");

    QPen pen; // 이 안에서만 사용할 것이기 때문에 지역변수로 선언. 아니면 헤더파일에 선언해서 객체로 사용해야 함.
    pen.setWidth(2); // 펜 굵기 조절
    pen.setBrush(Qt::red);  // 펜 색깔
    pen.setCapStyle(Qt::FlatCap); //
    pen.setJoinStyle(Qt::MiterJoin);    //
    pIlluLine->setPen(pen); // 조도,온도, 습도에 따라 다른 색을 띄기 위해서 사용.

    pen.setWidth(2); // 펜 굵기 조절
    pen.setBrush(Qt::blue);  // 펜 색깔
    pen.setCapStyle(Qt::FlatCap); //
    pen.setJoinStyle(Qt::MiterJoin);    //
    pTemp->setPen(pen); // 조도,온도, 습도에 따라 다른 색을 띄기 위해서 사용.

    pen.setWidth(2); // 펜 굵기 조절
    pen.setBrush(Qt::green);  // 펜 색깔
    pen.setCapStyle(Qt::FlatCap); //
    pen.setJoinStyle(Qt::MiterJoin);    //
    pHumi->setPen(pen); // 조도,온도, 습도에 따라 다른 색을 띄기 위해서 사용.


    chart = new QChart(); // 차트 객체 생성.
    chart->addSeries(pIlluLine); //
    chart->addSeries(pTemp);
    chart->addSeries(pHumi);

    chart->createDefaultAxes();
    chart->axes(Qt::Vertical).first()->setRange(0,100);// y축의 범위 설정

    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->pHLChart->layout()->addWidget(chartView);

    axisX = new QDateTimeAxis;
    //axisX-> setFormat("MM.h:mm"); // 날짜,시와 분을 표시할 수 있도록 format 설정
    axisX-> setFormat("h:mm"); //시와 분을 표시할 수 있도록 format 설정

    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();

    // 현재 시간으로 first 값 초기화
    firstDate.setDate(date);
    firstDate.setTime(time);

    QTime tempTime = time.addSecs(600); // 괄호 안에 수 만큼의 초를 더하는 함수.
    LastDate.setDate(date);
    LastDate.setTime(tempTime);

    chartView->chart()->setAxisX(axisX,pIlluLine);
    chartView->chart()->setAxisX(axisX,pTemp);
    chartView->chart()->setAxisX(axisX,pHumi);

    axisX->setRange(firstDate,LastDate);

    sqlDb = QSqlDatabase::addDatabase("QSQLITE"); // SQLITE를 쓸 것이다.
    sqlDb.setDatabaseName("temp.db");  // 이 이름으로 프로젝트 경로에 Database를 만들겠다.
    if(sqlDb.open()) {
        qDebug()<<"success DB connection";
    }
    else {
        qDebug()<<"fail DB connection";
    }

    QString query = "CREATE TABLE temp_db ("
            "id integer primary key, "
            "date DATETIME,"
            "illu VARCHAR(10),"
            "temp VARCHAR(10),"
            "humi VARCHAR(10))";

    QSqlQuery qry;
    if(!qry.exec(query)){}    // 이미 만들어져있는 경우 테이블을 다시 만들지 않도록 하는 조건문.
    else{
        qDebug()<<"create Table";
    }

    connect(ui->pPBSearch,SIGNAL(clicked()),this,SLOT(slotSearchDb()));
    connect(ui->pPBDelete,SIGNAL(clicked()),this,SLOT(slotDeleteDb()));
}

Tab6Database::~Tab6Database()
{
    delete ui;
}

void Tab6Database::slotTab6RecvData(QString recvData){
    //qDebug()<<"Receive";

    //=========
    // 데이터 파싱
    //=========
    recvData.replace("[","@");
    recvData.replace("]","@");
    QStringList qlist = recvData.split("@");
    QString illu = qlist[3]; // 조도 값
    QString temp = qlist[4];
    QString humi = qlist[5];


    //===========
    // Query문 작성
    //============
    QDateTime dateTime = QDateTime::currentDateTime();
    QSqlQuery qry;
    QString query = "insert into temp_db(date,illu,temp,humi) values('" +
            dateTime.toString("yy/MM/dd hh:mm:ss") + "','" +
            illu + "','" + temp + "','" + humi +  "')";

    if(qry.exec(query)){ // 성공한 경우
        qDebug()<< "insert Ok";
    }
    else{ // 실패한 경우
        qDebug()<< qry.lastError().text();
        qDebug()<<"Ha..";
    }

}



void Tab6Database::slotSearchDb(){
    // 교수님 방식
    QDateTime xValue;
    QDateTime dateTimeFrom = ui->pDTEFrom->dateTime();
    QString strFrom = dateTimeFrom.toString("yy/MM/dd hh:mm:ss");
    QDateTime dateTimeTo = ui->pDTETo->dateTime();
    QString strTo = dateTimeTo.toString("yy/MM/dd hh:mm:ss");

    // 내방식
    QString From;
    QString To;
    From = ui->pDTEFrom->dateTime().toString("yy/MM/dd hh:mm:ss");
    To = ui->pDTETo->dateTime().toString("yy/MM/dd hh:mm:ss");


    int rowCount = 0;
    ui->pTWDatabase->clearContents();
    QSqlQuery qry;
    QString query;

    query = "select * from temp_db where date >'" + From + "' AND date <'" + To + "'";


    if(qry.exec(query)){
        while(qry.next()){ // 읽을 데이터가 없을때까지 반복.
            rowCount++;
            ui->pTWDatabase->setRowCount(rowCount);
            QTableWidgetItem *id = new QTableWidgetItem(); // table widget에 item을 삽입하기 위한 객체
            QTableWidgetItem *date = new QTableWidgetItem();
            QTableWidgetItem *illu = new QTableWidgetItem();
            QTableWidgetItem *temp = new QTableWidgetItem();
            QTableWidgetItem *humi = new QTableWidgetItem();

            id ->setText(qry.value("id").toString());
            date->setText(qry.value("date").toString());
            illu->setText(qry.value("illu").toString());
            temp->setText(qry.value("temp").toString());
            humi->setText(qry.value("humi").toString());


            ui->pTWDatabase->setItem(rowCount-1,0,id);
            ui->pTWDatabase->setItem(rowCount-1,1,date);
            ui->pTWDatabase->setItem(rowCount-1,2,illu);
            ui->pTWDatabase->setItem(rowCount-1,3,temp);
            ui->pTWDatabase->setItem(rowCount-1,4,humi);

            QStringList qlist = qry.value("date").toString().split(" ");
            QDate D = QDate::fromString(qlist[0],"yy/MM/dd");
            QTime T = QTime::fromString(qlist[1],"hh:mm:ss");

            xValue.setTime(T);
            xValue.setDate(D);

            if(flag ==0){
                firstDate = xValue;
                flag++;
            }
            pIlluLine->append(xValue.toMSecsSinceEpoch(),illu->text().toDouble());
            pTemp->append(xValue.toMSecsSinceEpoch(),temp->text().toDouble());
            pHumi->append(xValue.toMSecsSinceEpoch(),humi->text().toDouble());

        }

        LastDate=xValue;

        axisX->setRange(firstDate,LastDate);
    }

}


void Tab6Database::slotDeleteDb(){

    QString From;
    QString To;
    From = ui->pDTEFrom->dateTime().toString("yy/MM/dd hh:mm:ss");
    To = ui->pDTETo->dateTime().toString("yy/MM/dd hh:mm:ss");

    QSqlQuery qry;
    QString query;

    query = "delete from temp_db where date >'"+ From + "' AND date < '" + To + "'";
    if(qry.exec(query)){

    }
    else{

    }


}


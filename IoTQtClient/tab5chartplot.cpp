#include "tab5chartplot.h"
#include "ui_tab5chartplot.h"

Tab5ChartPlot::Tab5ChartPlot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab5ChartPlot)
{
    ui->setupUi(this);
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

    //==========
    // chart 셋팅
    //==========
    chart = new QChart(); // 차트 객체 생성.
    chart->addSeries(pIlluLine); //
    chart->addSeries(pTemp);
    chart->addSeries(pHumi);

    chart->createDefaultAxes();
    chart->axes(Qt::Vertical).first()->setRange(0,100);// y축의 범위 설정
   // chart->axes(Qt::Horizontal).first()->setRange(0,20);// x축의 범위 설정

//    pIlluLine->append(0,7);
//    pIlluLine->append(5,1);
//    pIlluLine->append(3,10);
//    pIlluLine->append(7,65);

    //============
    // chart 띄우기
    //============
    chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->pChartHLayout->layout()->addWidget(chartView);

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

    connect(ui->pPBAdd,SIGNAL(clicked()),this,SLOT(slotAddPoint()));
    connect(ui->pPBClear,SIGNAL(clicked()),this,SLOT(slotClearPoint()));


}

Tab5ChartPlot::~Tab5ChartPlot()
{
    delete ui;
}


void Tab5ChartPlot::slotAddPoint(){
    QString strX; // 보낼 때 Id를 같이 보내기 위해.
    QString strY; // send data를 하나의 문자열로 만들기 위해.
    strX= ui->pLEX->text();
    strY= ui->pLEY->text();

    if(strX!= NULL && strY  !=NULL){
         pIlluLine->append(strX.toInt(),strY.toInt());
         ui->pLEX->clear();
         ui->pLEY->clear();
    }


}

void Tab5ChartPlot::slotClearPoint(){
    pIlluLine->clear();
}

void Tab5ChartPlot::slotTab5RecvData(QString recvData){

    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();

    QDateTime xValue;
    xValue.setDate(date);
    xValue.setTime(time);

    QTime tempTime = time.addSecs(600);

    qDebug()<<LastDate.time();
    //qDebug()<<(LastDate.time()== xValue.time());

    recvData.replace("[","@");
    recvData.replace("]","@");
    QStringList qlist = recvData.split("@");


    //toMSecsSinceEpoch로 좌표 변환
    pIlluLine->append(xValue.toMSecsSinceEpoch(),qlist[3].toDouble());
    pTemp->append(xValue.toMSecsSinceEpoch(),qlist[4].toDouble());
    pHumi->append(xValue.toMSecsSinceEpoch(),qlist[5].toDouble());

}


#include "tab2socketcilent.h"
#include "ui_tab2socketcilent.h"


Tab2SocketCilent::Tab2SocketCilent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab2SocketCilent)
{
    ui->setupUi(this);
    ui->pPBSendButton->setEnabled(false);
    pSocketClient = new SocketClient(this); //tab2에 종속되는 socket clinet 객체 포인터 선언
    connect(ui->pPBServerConnect,SIGNAL(clicked(bool)),this,SLOT(slotConnectToServer(bool)));
    connect(ui->pPBSendButton,SIGNAL(clicked()),this,SLOT(slotSocketSendData()));
    connect(pSocketClient,SIGNAL(sigSocketRecv(QString)),this,SLOT(slotSocketRecvUpdate(QString)));
    connect(ui->pPBRecvDataClear,SIGNAL(clicked()),this,SLOT(slotSocketDataClear()));
    //connect(ui->pPBRecvDataClear,SIGNAL(clicked()),ui->pTERecvData,SLOT(clear()));
}

Tab2SocketCilent::~Tab2SocketCilent()
{
    delete ui;
}

void Tab2SocketCilent::slotConnectToServer(bool check){

    bool bOk;
    if(check){
        pSocketClient->slotConnectToServer(bOk);
        if(bOk){
            ui->pPBServerConnect->setText("서버 해제");
            ui->pPBSendButton->setEnabled(true);
        }
    }
    else{
        pSocketClient->slotClosedByServer();
        ui->pPBServerConnect->setText("서버 연결");
        ui->pPBSendButton->setEnabled(false);

    }
}

void Tab2SocketCilent::slotSocketRecvUpdate(QString strRecvData){
    QTime time = QTime ::currentTime(); // 지역 객체를 선언하고 클래스 범위 접근 지정자를 통해 멤버함수 사용.
    QString strTime = time.toString(); // time 객체를 string 으로 변경.
    //qDebug() << strTime;   // printf 처럼 debug하는 것. 삽입 연산자를 통해 strTime을 qDebug에 삽입.
    strRecvData.chop(1); // 문자열 맨 끝에 문자 하나를 제거한다.

    if(strRecvData.indexOf("LAMP")>=0 || strRecvData.indexOf("GAS")>=0){ // indexOf는 특정 문자열안에 찾는 문자열이 있으면 그 위치를, 없으면 -1을 반환한다.
        emit sigTab3RecvData(strRecvData);
        qDebug()<<strRecvData.indexOf("LAMP");
        qDebug()<<strRecvData.indexOf("GAS");
    }

    if(strRecvData.indexOf("SENSOR")>=0){ // indexOf는 특정 문자열안에 찾는 문자열이 있으면 그 위치를, 없으면 -1을 반환한다.
        emit sigTab4RecvData(strRecvData);
        emit sigTab5RecvData(strRecvData);
        emit sigTab6RecvData(strRecvData);
        //qDebug()<<"debug1!!!";
    }

    strRecvData = strTime + " " + strRecvData;

    ui->pTERecvData->append(strRecvData);
    ui->pTERecvData->moveCursor(QTextCursor::End); // QTextCursor에 End라는 멤버 상수를 사용.


    // tap3에서 처리할 데이터 메세지가 들어오면 signal 발생 시킴

}

void Tab2SocketCilent::slotSocketSendData(){
    QString strRecvId; // 보낼 때 Id를 같이 보내기 위해.
    QString strSendData; // send data를 하나의 문자열로 만들기 위해.

    strRecvId = ui->pLERecvId->text(); // pLERecvId에 있는 값을 읽어오겠다.
    strSendData = ui->pLESendData->text(); // pLESenddata에 있는 값을 읽어오겠다.

    if(strRecvId.isEmpty()) strRecvId = "ALLMSG";
    strSendData="[" + strRecvId + "]" + strSendData;

    ui->pLESendData->clear(); // 보내고 나서는 그 Line widget을 clear
    pSocketClient->slotSocketSendData(strSendData);
}


void Tab2SocketCilent::slotSocketDataClear(){
    ui->pTERecvData->clear();
}

void Tab2SocketCilent::slotSocketSendData(QString strData){

    if(ui->pPBServerConnect->isChecked()) // 서버에 연결되어 있다면 Data를 보내자. 눌렀다고 서버연결이 된건 아니지만 그렇다고 가정하자.
        pSocketClient->slotSocketSendData(strData);
    else{
        QMessageBox::information(this,"socket","서버 연결 확인"); //데이터가 제대로 보내졌는지 아닌지 확인하는 메세지 박스
    }
}

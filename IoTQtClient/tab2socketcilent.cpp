#include "tab2socketcilent.h"
#include "ui_tab2socketcilent.h"


Tab2SocketCilent::Tab2SocketCilent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab2SocketCilent)
{
    ui->setupUi(this);
    pSocketClient = new SocketClient(this); //
    connect(ui->pPBServerConnect,SIGNAL(clicked(bool)),this,SLOT(slotConnectToServer(bool)));
    connect(pSocketClient,SIGNAL(sigSocketRecv(QString)),this,SLOT(slotSocketRecvUpdate(QString)));
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

        }
    }
}

void Tab2SocketCilent::slotSocketRecvUpdate(QString strRecvData){
    ui->pTERecvData->append(strRecvData);
}

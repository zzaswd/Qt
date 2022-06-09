#include "tab3controlpannel.h"
#include "ui_tab3controlpannel.h"

Tab3ControlPannel::Tab3ControlPannel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab3ControlPannel)
{
    ui->setupUi(this);
    connect(ui->pPBLamp,SIGNAL(clicked(bool)),this,SLOT(slotLampOnOff(bool))); // lamp는 toggle이 되어야 하므로 bool.
    connect(ui->pPBPlug,SIGNAL(clicked(bool)),this,SLOT(slotPlugOnOff(bool))); // Plug는 toggle이 되어야 하므로 bool.
}

Tab3ControlPannel::~Tab3ControlPannel()
{
    delete ui;
}


void Tab3ControlPannel::slotLampOnOff(bool check){
    QString strSendData; // send data를 하나의 문자열로 만들기 위해.

    if(check){
        ui->pPBLamp->setChecked(false); // 양방향 통신이 제대로 되었을 때 바뀔 수 있도록.
        emit sigSocketSendData("[19]LAMPON");
    }
    else{
        ui->pPBLamp->setChecked(true);
        emit sigSocketSendData("[19]LAMPOFF");
    }
}

void Tab3ControlPannel::slotPlugOnOff(bool check){
    if(check){
        ui->pPBPlug->setChecked(false); // 양방향 통신이 제대로 되었을 때 바뀔 수 있도록.
        emit sigSocketSendData("[19]GASON");
    }
    else{
        ui->pPBPlug->setChecked(true);
        emit sigSocketSendData("[19]GASOFF");
    }
}

void Tab3ControlPannel::slotTab3RecvData(QString recvData){
   // QMessageBox::information(this,"socket",recvData);
    // [19]LAMPON => @19@LAMP
    recvData.replace("[","@");
    recvData.replace("]","@");
    // idx 0 : null, idx 1 : 19 , idx2 : LAMPON
    QStringList qlist = recvData.split("@"); // strtok와 같은 기능. 즉,
    qDebug()<<qlist[2];
    if(qlist[2] == "LAMPON")       ui->pPBLamp->setChecked(true);
    else if(qlist[2] == "LAMPOFF")       ui->pPBLamp->setChecked(false);
    else if(qlist[2] == "GASON")       ui->pPBPlug->setChecked(true);
    else if(qlist[2] == "GASOFF")       ui->pPBPlug->setChecked(false);

}

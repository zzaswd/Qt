#include "tab4sensordisplay.h"
#include "ui_tab4sensordisplay.h"

Tab4SensorDisplay::Tab4SensorDisplay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab4SensorDisplay)
{
    ui->setupUi(this);
}

Tab4SensorDisplay::~Tab4SensorDisplay()
{
    delete ui;
}


void Tab4SensorDisplay::slotTab4RecvData(QString recvData){
   // QMessageBox::information(this,"socket",recvData);
    // [19]LAMPON => @19@LAMP
    recvData.replace("[","@");
    recvData.replace("]","@");
    // idx 0 : null, idx 1 : 19 , idx2 : LAMPON
    // [19]SENSOR@92@27.7@36.9
    //QMessageBox::information(this,"socket",recvData);
    qDebug()<<recvData;
    QStringList qlist2 = recvData.split("@"); // strtok와 같은 기능. 즉,


    ui->pHSLight->setValue((qlist2[3].toInt()));
    ui->pLBLight->setText(qlist2[3]);

    ui->pHSTemp->setValue((qlist2[4].toDouble()));
    ui->pLBTemp->setText(qlist2[4]);

    ui->pHSHumi->setValue((qlist2[5].toDouble()));
    ui->pLBHumi->setText(qlist2[5]);

}

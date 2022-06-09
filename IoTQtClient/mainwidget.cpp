#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this); // ui 셋업
    ui->tabWidget->setCurrentIndex(1); // 실행시 2pagae를 dafault. 기본적으로 마지막 tab이 선택된다.
    pTab2SocketCilent = new Tab2SocketCilent(ui->pTab2); //tab2의 종속되는 Tab2 객체 포인터 변수 선언.
    ui->pTab2->setLayout(pTab2SocketCilent->layout()); // ui의 pTab2 layout에 포인터가 가리키는 객체의 Layout을 넣어준다.

    pTab3ControlPannel = new Tab3ControlPannel(ui->pTab3);
    ui->pTab3->setLayout(pTab3ControlPannel->layout());

    pTab4SensorDisplay = new Tab4SensorDisplay(ui->pTab4);
    ui->pTab4->setLayout(pTab4SensorDisplay->layout());


    connect(pTab2SocketCilent,SIGNAL(sigTab3RecvData(QString)),pTab3ControlPannel,SLOT(slotTab3RecvData(QString)));
    connect(pTab3ControlPannel,SIGNAL(sigSocketSendData(QString)),pTab2SocketCilent,SLOT(slotSocketSendData(QString)));

    connect(pTab2SocketCilent,SIGNAL(sigTab4RecvData(QString)),pTab4SensorDisplay,SLOT(slotTab4RecvData(QString)));

}

MainWidget::~MainWidget()
{
    delete ui;
}


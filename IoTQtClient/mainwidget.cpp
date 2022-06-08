#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(1);
    pTab2SocketCilent = new Tab2SocketCilent(ui->pTab2);
    ui->pTab2->setLayout(pTab2SocketCilent->layout());
}

MainWidget::~MainWidget()
{
    delete ui;
}


#include "tab1devicecontrol.h"
#include "ui_tab1devicecontrol.h"

Tab1DeviceControl::Tab1DeviceControl(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Tab1DeviceControl)
{
    ui->setupUi(this);
}

Tab1DeviceControl::~Tab1DeviceControl()
{
    delete ui;
}


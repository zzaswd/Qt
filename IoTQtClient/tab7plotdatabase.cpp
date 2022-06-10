#include "tab7plotdatabase.h"
#include "ui_tab7plotdatabase.h"

Tab7PlotDatabase::Tab7PlotDatabase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab7PlotDatabase)
{
    ui->setupUi(this);
}

Tab7PlotDatabase::~Tab7PlotDatabase()
{
    delete ui;
}

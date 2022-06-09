#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <tab2socketcilent.h>
#include <tab3controlpannel.h>
#include <tab4sensordisplay.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWidget; }
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    Ui::MainWidget *ui;
    Tab2SocketCilent * pTab2SocketCilent;
    Tab3ControlPannel * pTab3ControlPannel;
    Tab4SensorDisplay * pTab4SensorDisplay;
};
#endif // MAINWIDGET_H

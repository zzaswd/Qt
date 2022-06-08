#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <tab2socketcilent.h>


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

};
#endif // MAINWIDGET_H

#ifndef TAB2SOCKETCILENT_H
#define TAB2SOCKETCILENT_H

#include <QWidget>
#include <QTime>
#include <QDebug>
#include <QMessageBox>
#include "socketclient.h" // socketclient에 있는 socket 객체를 만들기 위해 선언


namespace Ui {
class Tab2SocketCilent;
}

class Tab2SocketCilent : public QWidget
{
    Q_OBJECT

public:
    explicit Tab2SocketCilent(QWidget *parent = nullptr);
    ~Tab2SocketCilent();

private:
    Ui::Tab2SocketCilent *ui;
    SocketClient * pSocketClient;
private slots:
    void slotConnectToServer(bool);
    void slotSocketRecvUpdate(QString);
    void slotSocketSendData();
    void slotSocketSendData(QString);
    void slotSocketDataClear();
signals:
    void sigSocketRecv(QString);
    void sigTab3RecvData(QString);
    void sigTab4RecvData(QString);
};

#endif // TAB2SOCKETCILENT_H

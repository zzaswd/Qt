#ifndef SOCKETCLIENT_H
#define SOCKETCLIENT_H

/* kccistc embedded & iot by ksh */

#include <QTcpSocket>
#include <QHostAddress>
#include <QInputDialog>
#include <QMessageBox>  // 팝업창.

#define BLOCK_SIZE      1024
class SocketClient : public QWidget
{
	Q_OBJECT

private:
    QTcpSocket *pQTcpSocket;
    //QString SERVERIP = "192.168.1.40";
    QString SERVERIP = "10.10.141.39";
    int SERVERPOT = 5000;
    //QString LOGID = "KSH_QTE";
    QString LOGID = "9";
    QString LOGPW = "PASSWD";

public:
	SocketClient(QWidget *parent = 0, Qt::WindowFlags flags = 0);
	~SocketClient();

signals:
    void sigSocketRecv(QString);

private slots:  // 내부에서만 접근하겠다.
	void slotSocketReadData();
	void slotSocketError();
	void slotConnectServer();

public slots:   // ui class (tab2)객체에서 접근하겠다.
    void slotConnectToServer(bool&);
    void slotClosedByServer();
    void slotSocketSendData(QString);
};

#endif // SOCKETCLIENT_H

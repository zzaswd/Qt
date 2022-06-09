#include <QDebug>
#include "socketclient.h"
#define Kor(str)  QString::fromLocal8Bit(str)

SocketClient::SocketClient(QWidget *parent, Qt::WindowFlags flags)
	: QWidget(parent, flags)
{
//    bool ok;
    pQTcpSocket = new QTcpSocket(); // Qt에서 제공해주는 Socket class.

	connect(pQTcpSocket, SIGNAL(connected()), this, SLOT(slotConnectServer()));
	connect(pQTcpSocket, SIGNAL(disconnected()), this, SLOT(slotClosedByServer()));
	connect(pQTcpSocket, SIGNAL(readyRead()), this, SLOT(slotSocketReadData()));
	connect(pQTcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(slotSocketError()));
//    slotConnectToServer(ok);
}


void SocketClient::slotConnectToServer(bool& ok){
    //서버 연결 요청
    QString strHostIp;
//	tcpSocket.connectToHost(QHostAddress::LocalHost, 5000);
    strHostIp = QInputDialog::getText(this,"HostIP","Input Server IP:",QLineEdit::Normal,SERVERIP,&ok);
    if(ok)
    {
        if(strHostIp.isEmpty())
            pQTcpSocket->connectToHost(SERVERIP, SERVERPOT);
        else
            pQTcpSocket->connectToHost(strHostIp, SERVERPOT);
    }
}
void SocketClient::slotConnectServer()
{
    QString Str = "["+LOGID+":"+LOGPW+"]";
    QByteArray byteStr = Str.toLocal8Bit();
    pQTcpSocket->write(byteStr);
}

void SocketClient::slotClosedByServer()
{
	pQTcpSocket->close();
}

void SocketClient::slotSocketReadData(){
//    QList<QString> qList;
    QString strRecvData;
    QByteArray qByteArray;

    if (pQTcpSocket->bytesAvailable() > BLOCK_SIZE)  // 너무 많은 데이터가 들어오면 예외처리 진행.
		return;
    qByteArray = pQTcpSocket->read(BLOCK_SIZE);  // byte 단위로 변환하자. Qstring 은 유니코드이므로.
    strRecvData = QString::fromUtf8(qByteArray); // uft8로 변환하여 문자열로 변환.
//    qDebug() <<strRecvData;
    emit sigSocketRecv(strRecvData); // emit 은 Signal. 즉, 문자 들어온 것이 다 변환되면 signal 발생.
//    QMessageBox::information(this,"Socket Recv",strRecvData);
}

void SocketClient::slotSocketError()
{
	QString Str = pQTcpSocket->errorString();
    qDebug() << Str;
}


void SocketClient::slotSocketSendData(QString strSendData)
{	
    if(!strSendData.isEmpty()) {
        strSendData = strSendData+"\n"; // 붙여보내줘야 함.
        QByteArray bCmd = strSendData.toLocal8Bit();
        qDebug() << bCmd;
        pQTcpSocket->write(bCmd);
    }
}

SocketClient::~SocketClient()
{
    pQTcpSocket->close();
}

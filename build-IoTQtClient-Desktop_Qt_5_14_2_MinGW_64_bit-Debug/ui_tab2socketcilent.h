/********************************************************************************
** Form generated from reading UI file 'tab2socketcilent.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB2SOCKETCILENT_H
#define UI_TAB2SOCKETCILENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab2SocketCilent
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *pLabel;
    QPushButton *pPBRecvDataClear;
    QPushButton *pPBServerConnect;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *pTERecvData;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *pLERecvId;
    QLineEdit *pLESendData;
    QPushButton *pPBSendButton;

    void setupUi(QWidget *Tab2SocketCilent)
    {
        if (Tab2SocketCilent->objectName().isEmpty())
            Tab2SocketCilent->setObjectName(QString::fromUtf8("Tab2SocketCilent"));
        Tab2SocketCilent->resize(541, 344);
        verticalLayout = new QVBoxLayout(Tab2SocketCilent);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pLabel = new QLabel(Tab2SocketCilent);
        pLabel->setObjectName(QString::fromUtf8("pLabel"));

        horizontalLayout->addWidget(pLabel);

        pPBRecvDataClear = new QPushButton(Tab2SocketCilent);
        pPBRecvDataClear->setObjectName(QString::fromUtf8("pPBRecvDataClear"));

        horizontalLayout->addWidget(pPBRecvDataClear);

        pPBServerConnect = new QPushButton(Tab2SocketCilent);
        pPBServerConnect->setObjectName(QString::fromUtf8("pPBServerConnect"));
        pPBServerConnect->setCheckable(true);

        horizontalLayout->addWidget(pPBServerConnect);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pTERecvData = new QTextEdit(Tab2SocketCilent);
        pTERecvData->setObjectName(QString::fromUtf8("pTERecvData"));

        horizontalLayout_2->addWidget(pTERecvData);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pLERecvId = new QLineEdit(Tab2SocketCilent);
        pLERecvId->setObjectName(QString::fromUtf8("pLERecvId"));

        horizontalLayout_3->addWidget(pLERecvId);

        pLESendData = new QLineEdit(Tab2SocketCilent);
        pLESendData->setObjectName(QString::fromUtf8("pLESendData"));

        horizontalLayout_3->addWidget(pLESendData);

        pPBSendButton = new QPushButton(Tab2SocketCilent);
        pPBSendButton->setObjectName(QString::fromUtf8("pPBSendButton"));

        horizontalLayout_3->addWidget(pPBSendButton);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 6);
        horizontalLayout_3->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Tab2SocketCilent);

        QMetaObject::connectSlotsByName(Tab2SocketCilent);
    } // setupUi

    void retranslateUi(QWidget *Tab2SocketCilent)
    {
        Tab2SocketCilent->setWindowTitle(QCoreApplication::translate("Tab2SocketCilent", "Form", nullptr));
        pLabel->setText(QCoreApplication::translate("Tab2SocketCilent", "\354\210\230\354\213\240\353\215\260\354\235\264\355\204\260", nullptr));
        pPBRecvDataClear->setText(QCoreApplication::translate("Tab2SocketCilent", "\354\210\230\354\213\240\354\202\255\354\240\234", nullptr));
        pPBServerConnect->setText(QCoreApplication::translate("Tab2SocketCilent", "\354\204\234\353\262\204\354\227\260\352\262\260", nullptr));
        pPBSendButton->setText(QCoreApplication::translate("Tab2SocketCilent", "\354\206\241\354\213\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab2SocketCilent: public Ui_Tab2SocketCilent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB2SOCKETCILENT_H

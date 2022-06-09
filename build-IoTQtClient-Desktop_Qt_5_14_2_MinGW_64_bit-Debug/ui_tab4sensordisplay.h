/********************************************************************************
** Form generated from reading UI file 'tab4sensordisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB4SENSORDISPLAY_H
#define UI_TAB4SENSORDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab4SensorDisplay
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *pHSLight;
    QSlider *pHSTemp;
    QSlider *pHSHumi;
    QLabel *pLBLight;
    QLabel *pLBTemp;
    QLabel *pLBHumi;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label;

    void setupUi(QWidget *Tab4SensorDisplay)
    {
        if (Tab4SensorDisplay->objectName().isEmpty())
            Tab4SensorDisplay->setObjectName(QString::fromUtf8("Tab4SensorDisplay"));
        Tab4SensorDisplay->resize(873, 577);
        label_2 = new QLabel(Tab4SensorDisplay);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 240, 111, 61));
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_3 = new QLabel(Tab4SensorDisplay);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 430, 111, 61));
        label_3->setFont(font);
        label_4 = new QLabel(Tab4SensorDisplay);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 620, 111, 61));
        label_4->setFont(font);
        pHSLight = new QSlider(Tab4SensorDisplay);
        pHSLight->setObjectName(QString::fromUtf8("pHSLight"));
        pHSLight->setGeometry(QRect(390, 90, 311, 61));
        pHSLight->setFont(font);
        pHSLight->setAcceptDrops(false);
        pHSLight->setSingleStep(1);
        pHSLight->setValue(0);
        pHSLight->setSliderPosition(0);
        pHSLight->setOrientation(Qt::Horizontal);
        pHSLight->setTickPosition(QSlider::TicksBothSides);
        pHSLight->setTickInterval(10);
        pHSTemp = new QSlider(Tab4SensorDisplay);
        pHSTemp->setObjectName(QString::fromUtf8("pHSTemp"));
        pHSTemp->setGeometry(QRect(390, 250, 311, 61));
        pHSTemp->setMaximum(50);
        pHSTemp->setOrientation(Qt::Horizontal);
        pHSTemp->setTickPosition(QSlider::TicksBothSides);
        pHSTemp->setTickInterval(5);
        pHSHumi = new QSlider(Tab4SensorDisplay);
        pHSHumi->setObjectName(QString::fromUtf8("pHSHumi"));
        pHSHumi->setGeometry(QRect(390, 420, 311, 61));
        pHSHumi->setSliderPosition(0);
        pHSHumi->setOrientation(Qt::Horizontal);
        pHSHumi->setTickPosition(QSlider::TicksBothSides);
        pHSHumi->setTickInterval(10);
        pLBLight = new QLabel(Tab4SensorDisplay);
        pLBLight->setObjectName(QString::fromUtf8("pLBLight"));
        pLBLight->setGeometry(QRect(520, 170, 56, 12));
        pLBTemp = new QLabel(Tab4SensorDisplay);
        pLBTemp->setObjectName(QString::fromUtf8("pLBTemp"));
        pLBTemp->setGeometry(QRect(520, 330, 56, 12));
        pLBHumi = new QLabel(Tab4SensorDisplay);
        pLBHumi->setObjectName(QString::fromUtf8("pLBHumi"));
        pLBHumi->setGeometry(QRect(520, 490, 56, 12));
        label_5 = new QLabel(Tab4SensorDisplay);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(690, 330, 56, 12));
        label_6 = new QLabel(Tab4SensorDisplay);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(380, 330, 56, 12));
        label_7 = new QLabel(Tab4SensorDisplay);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(690, 510, 56, 12));
        label_8 = new QLabel(Tab4SensorDisplay);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(700, 170, 56, 12));
        label_9 = new QLabel(Tab4SensorDisplay);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(380, 510, 56, 12));
        label_10 = new QLabel(Tab4SensorDisplay);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(390, 170, 56, 12));
        label = new QLabel(Tab4SensorDisplay);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 90, 111, 61));
        label->setFont(font);

        retranslateUi(Tab4SensorDisplay);

        QMetaObject::connectSlotsByName(Tab4SensorDisplay);
    } // setupUi

    void retranslateUi(QWidget *Tab4SensorDisplay)
    {
        Tab4SensorDisplay->setWindowTitle(QCoreApplication::translate("Tab4SensorDisplay", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Tab4SensorDisplay", "\354\230\250\353\217\204", nullptr));
        label_3->setText(QCoreApplication::translate("Tab4SensorDisplay", "\354\212\265\353\217\204", nullptr));
        label_4->setText(QCoreApplication::translate("Tab4SensorDisplay", "\354\241\260\353\217\204", nullptr));
#if QT_CONFIG(tooltip)
        pHSLight->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pHSLight->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pLBLight->setText(QString());
        pLBTemp->setText(QString());
        pLBHumi->setText(QString());
        label_5->setText(QCoreApplication::translate("Tab4SensorDisplay", "50", nullptr));
        label_6->setText(QCoreApplication::translate("Tab4SensorDisplay", "0", nullptr));
        label_7->setText(QCoreApplication::translate("Tab4SensorDisplay", "100", nullptr));
        label_8->setText(QCoreApplication::translate("Tab4SensorDisplay", "100", nullptr));
        label_9->setText(QCoreApplication::translate("Tab4SensorDisplay", "0", nullptr));
        label_10->setText(QCoreApplication::translate("Tab4SensorDisplay", "0", nullptr));
        label->setText(QCoreApplication::translate("Tab4SensorDisplay", "\354\241\260\353\217\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab4SensorDisplay: public Ui_Tab4SensorDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB4SENSORDISPLAY_H

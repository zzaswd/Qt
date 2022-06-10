/********************************************************************************
** Form generated from reading UI file 'tab7plotdatabase.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB7PLOTDATABASE_H
#define UI_TAB7PLOTDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab7PlotDatabase
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *pDTEFrom;
    QDateTimeEdit *pDTETo;
    QPushButton *pPBDraw;
    QHBoxLayout *pChartHLayout;

    void setupUi(QWidget *Tab7PlotDatabase)
    {
        if (Tab7PlotDatabase->objectName().isEmpty())
            Tab7PlotDatabase->setObjectName(QString::fromUtf8("Tab7PlotDatabase"));
        Tab7PlotDatabase->resize(578, 513);
        verticalLayout = new QVBoxLayout(Tab7PlotDatabase);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pDTEFrom = new QDateTimeEdit(Tab7PlotDatabase);
        pDTEFrom->setObjectName(QString::fromUtf8("pDTEFrom"));
        pDTEFrom->setDateTime(QDateTime(QDate(2022, 6, 1), QTime(0, 0, 0)));

        horizontalLayout->addWidget(pDTEFrom);

        pDTETo = new QDateTimeEdit(Tab7PlotDatabase);
        pDTETo->setObjectName(QString::fromUtf8("pDTETo"));

        horizontalLayout->addWidget(pDTETo);

        pPBDraw = new QPushButton(Tab7PlotDatabase);
        pPBDraw->setObjectName(QString::fromUtf8("pPBDraw"));

        horizontalLayout->addWidget(pPBDraw);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 2);

        verticalLayout->addLayout(horizontalLayout);

        pChartHLayout = new QHBoxLayout();
        pChartHLayout->setObjectName(QString::fromUtf8("pChartHLayout"));

        verticalLayout->addLayout(pChartHLayout);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 9);

        retranslateUi(Tab7PlotDatabase);

        QMetaObject::connectSlotsByName(Tab7PlotDatabase);
    } // setupUi

    void retranslateUi(QWidget *Tab7PlotDatabase)
    {
        Tab7PlotDatabase->setWindowTitle(QCoreApplication::translate("Tab7PlotDatabase", "Form", nullptr));
        pPBDraw->setText(QCoreApplication::translate("Tab7PlotDatabase", "Draw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab7PlotDatabase: public Ui_Tab7PlotDatabase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB7PLOTDATABASE_H

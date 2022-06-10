/********************************************************************************
** Form generated from reading UI file 'tab6database.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB6DATABASE_H
#define UI_TAB6DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab6Database
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QDateTimeEdit *pDTEFrom;
    QDateTimeEdit *pDTETo;
    QPushButton *pPBSearch;
    QPushButton *pPBDelete;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *pTWDatabase;
    QHBoxLayout *pHLChart;

    void setupUi(QWidget *Tab6Database)
    {
        if (Tab6Database->objectName().isEmpty())
            Tab6Database->setObjectName(QString::fromUtf8("Tab6Database"));
        Tab6Database->resize(744, 544);
        verticalLayout = new QVBoxLayout(Tab6Database);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pDTEFrom = new QDateTimeEdit(Tab6Database);
        pDTEFrom->setObjectName(QString::fromUtf8("pDTEFrom"));
        pDTEFrom->setDateTime(QDateTime(QDate(2022, 6, 10), QTime(0, 0, 0)));

        horizontalLayout->addWidget(pDTEFrom);

        pDTETo = new QDateTimeEdit(Tab6Database);
        pDTETo->setObjectName(QString::fromUtf8("pDTETo"));
        pDTETo->setDateTime(QDateTime(QDate(2022, 6, 30), QTime(12, 0, 0)));

        horizontalLayout->addWidget(pDTETo);

        pPBSearch = new QPushButton(Tab6Database);
        pPBSearch->setObjectName(QString::fromUtf8("pPBSearch"));

        horizontalLayout->addWidget(pPBSearch);

        pPBDelete = new QPushButton(Tab6Database);
        pPBDelete->setObjectName(QString::fromUtf8("pPBDelete"));

        horizontalLayout->addWidget(pPBDelete);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pTWDatabase = new QTableWidget(Tab6Database);
        if (pTWDatabase->columnCount() < 5)
            pTWDatabase->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        pTWDatabase->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        pTWDatabase->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        pTWDatabase->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        pTWDatabase->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        pTWDatabase->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        pTWDatabase->setObjectName(QString::fromUtf8("pTWDatabase"));
        pTWDatabase->horizontalHeader()->setDefaultSectionSize(150);

        horizontalLayout_2->addWidget(pTWDatabase);

        pHLChart = new QHBoxLayout();
        pHLChart->setObjectName(QString::fromUtf8("pHLChart"));

        horizontalLayout_2->addLayout(pHLChart);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 5);

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Tab6Database);

        QMetaObject::connectSlotsByName(Tab6Database);
    } // setupUi

    void retranslateUi(QWidget *Tab6Database)
    {
        Tab6Database->setWindowTitle(QCoreApplication::translate("Tab6Database", "Form", nullptr));
        pPBSearch->setText(QCoreApplication::translate("Tab6Database", "\354\241\260\355\232\214", nullptr));
        pPBDelete->setText(QCoreApplication::translate("Tab6Database", "\354\202\255\354\240\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem = pTWDatabase->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Tab6Database", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = pTWDatabase->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Tab6Database", "\353\202\240\354\247\234", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = pTWDatabase->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Tab6Database", "\354\241\260\353\217\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = pTWDatabase->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Tab6Database", "\354\230\250\353\217\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = pTWDatabase->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Tab6Database", "\354\212\265\353\217\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab6Database: public Ui_Tab6Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB6DATABASE_H

/********************************************************************************
** Form generated from reading UI file 'tab5chartplot.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB5CHARTPLOT_H
#define UI_TAB5CHARTPLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab5ChartPlot
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *pLEX;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *pLEY;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pPBAdd;
    QPushButton *pPBClear;
    QHBoxLayout *pChartHLayout;
    QHBoxLayout *horizontalLayout_3;
    QScrollBar *horizontalScrollBar;

    void setupUi(QWidget *Tab5ChartPlot)
    {
        if (Tab5ChartPlot->objectName().isEmpty())
            Tab5ChartPlot->setObjectName(QString::fromUtf8("Tab5ChartPlot"));
        Tab5ChartPlot->resize(696, 531);
        verticalLayout = new QVBoxLayout(Tab5ChartPlot);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Tab5ChartPlot);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        pLEX = new QLineEdit(Tab5ChartPlot);
        pLEX->setObjectName(QString::fromUtf8("pLEX"));

        horizontalLayout->addWidget(pLEX);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(Tab5ChartPlot);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        pLEY = new QLineEdit(Tab5ChartPlot);
        pLEY->setObjectName(QString::fromUtf8("pLEY"));

        horizontalLayout->addWidget(pLEY);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pPBAdd = new QPushButton(Tab5ChartPlot);
        pPBAdd->setObjectName(QString::fromUtf8("pPBAdd"));

        horizontalLayout->addWidget(pPBAdd);

        pPBClear = new QPushButton(Tab5ChartPlot);
        pPBClear->setObjectName(QString::fromUtf8("pPBClear"));

        horizontalLayout->addWidget(pPBClear);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 2);
        horizontalLayout->setStretch(6, 2);
        horizontalLayout->setStretch(7, 2);

        verticalLayout->addLayout(horizontalLayout);

        pChartHLayout = new QHBoxLayout();
        pChartHLayout->setObjectName(QString::fromUtf8("pChartHLayout"));
        pChartHLayout->setContentsMargins(-1, 0, -1, -1);

        verticalLayout->addLayout(pChartHLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalScrollBar = new QScrollBar(Tab5ChartPlot);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalScrollBar);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 8);
        verticalLayout->setStretch(2, 1);

        retranslateUi(Tab5ChartPlot);

        QMetaObject::connectSlotsByName(Tab5ChartPlot);
    } // setupUi

    void retranslateUi(QWidget *Tab5ChartPlot)
    {
        Tab5ChartPlot->setWindowTitle(QCoreApplication::translate("Tab5ChartPlot", "Form", nullptr));
        label->setText(QCoreApplication::translate("Tab5ChartPlot", "X", nullptr));
        label_2->setText(QCoreApplication::translate("Tab5ChartPlot", "Y", nullptr));
        pPBAdd->setText(QCoreApplication::translate("Tab5ChartPlot", "ADD", nullptr));
        pPBClear->setText(QCoreApplication::translate("Tab5ChartPlot", "CLEAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab5ChartPlot: public Ui_Tab5ChartPlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB5CHARTPLOT_H

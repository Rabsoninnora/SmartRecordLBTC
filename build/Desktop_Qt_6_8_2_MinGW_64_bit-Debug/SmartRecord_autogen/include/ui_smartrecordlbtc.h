/********************************************************************************
** Form generated from reading UI file 'smartrecordlbtc.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTRECORDLBTC_H
#define UI_SMARTRECORDLBTC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartRecordLBTC
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SmartRecordLBTC)
    {
        if (SmartRecordLBTC->objectName().isEmpty())
            SmartRecordLBTC->setObjectName("SmartRecordLBTC");
        SmartRecordLBTC->resize(800, 412);
        centralwidget = new QWidget(SmartRecordLBTC);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, -10, 201, 401));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(16777215, 16777215));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(200, 0, 601, 61));
        SmartRecordLBTC->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SmartRecordLBTC);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        SmartRecordLBTC->setMenuBar(menubar);
        statusbar = new QStatusBar(SmartRecordLBTC);
        statusbar->setObjectName("statusbar");
        SmartRecordLBTC->setStatusBar(statusbar);

        retranslateUi(SmartRecordLBTC);

        QMetaObject::connectSlotsByName(SmartRecordLBTC);
    } // setupUi

    void retranslateUi(QMainWindow *SmartRecordLBTC)
    {
        SmartRecordLBTC->setWindowTitle(QCoreApplication::translate("SmartRecordLBTC", "SmartRecordLBTC", nullptr));
        pushButton->setText(QCoreApplication::translate("SmartRecordLBTC", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SmartRecordLBTC", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartRecordLBTC: public Ui_SmartRecordLBTC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTRECORDLBTC_H

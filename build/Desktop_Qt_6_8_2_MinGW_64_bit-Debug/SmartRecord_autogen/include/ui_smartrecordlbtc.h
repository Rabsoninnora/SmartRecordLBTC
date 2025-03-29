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
#include <QtWidgets/QComboBox>
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
    QPushButton *pushButton_3;
    QComboBox *comboBox;
    QWidget *widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SmartRecordLBTC)
    {
        if (SmartRecordLBTC->objectName().isEmpty())
            SmartRecordLBTC->setObjectName("SmartRecordLBTC");
        SmartRecordLBTC->resize(800, 412);
        SmartRecordLBTC->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 117, 255);"));
        centralwidget = new QWidget(SmartRecordLBTC);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(600, 50, 201, 331));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(16777215, 16777215));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(-10, 0, 811, 61));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMaximumSize(QSize(16777215, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(630, 60, 131, 41));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(654, 100, 91, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 50, 551, 381));
        widget->setStyleSheet(QString::fromUtf8(" \n"
"image: url(:/new/prefix1/student.jpg);\n"
" "));
        SmartRecordLBTC->setCentralWidget(centralwidget);
        pushButton->raise();
        pushButton_3->raise();
        comboBox->raise();
        widget->raise();
        pushButton_2->raise();
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
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("SmartRecordLBTC", "Login", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("SmartRecordLBTC", "Admin ", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("SmartRecordLBTC", "Student ", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SmartRecordLBTC: public Ui_SmartRecordLBTC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTRECORDLBTC_H

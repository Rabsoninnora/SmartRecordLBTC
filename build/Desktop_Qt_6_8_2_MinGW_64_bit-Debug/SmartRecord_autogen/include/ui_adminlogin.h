/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Adminlogin
{
public:
    QFrame *frame;
    QPushButton *btn_Admin_login;
    QLineEdit *lineEdit_username_2;
    QLineEdit *lineEdit_password_2;
    QPushButton *btn_Admin_Cancel;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Adminlogin)
    {
        if (Adminlogin->objectName().isEmpty())
            Adminlogin->setObjectName("Adminlogin");
        Adminlogin->resize(652, 422);
        Adminlogin->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/coverlbtc.jpg);"));
        frame = new QFrame(Adminlogin);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(150, 120, 391, 261));
        frame->setStyleSheet(QString::fromUtf8("\n"
"QFrame{\n"
"border-color:3px solid  rgb(0, 0, 0);\n"
"background-color: rgb(131, 131, 131);\n"
"	background-image: url(:/new/prefix1/student.jpg);\n"
"image: url(:/new/prefix1/student.jpg);\n"
"\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        btn_Admin_login = new QPushButton(frame);
        btn_Admin_login->setObjectName("btn_Admin_login");
        btn_Admin_login->setGeometry(QRect(70, 230, 61, 31));
        btn_Admin_login->setStyleSheet(QString::fromUtf8(" \n"
"\n"
"\n"
" QPushButton {\n"
" \n"
" border-radius: 10px;\n"
" font: 500 12pt ;\n"
" color: rgb(255, 255, 255);\n"
"   \n"
"}"));
        lineEdit_username_2 = new QLineEdit(frame);
        lineEdit_username_2->setObjectName("lineEdit_username_2");
        lineEdit_username_2->setGeometry(QRect(100, 130, 161, 41));
        lineEdit_username_2->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
" \n"
"	border-color: 4px solid rgb(126, 126, 126);\n"
"  \n"
"  border-radius: 10px;\n"
"  padding: 12px 12px;\n"
"  \n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"} "));
        lineEdit_username_2->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit_username_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_password_2 = new QLineEdit(frame);
        lineEdit_password_2->setObjectName("lineEdit_password_2");
        lineEdit_password_2->setGeometry(QRect(100, 180, 161, 41));
        lineEdit_password_2->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
" border-color: 3px  black;\n"
"  \n"
"  border-radius: 10px;\n"
"  padding: 12px 12px;\n"
"  \n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"} "));
        lineEdit_password_2->setEchoMode(QLineEdit::EchoMode::Password);
        lineEdit_password_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btn_Admin_Cancel = new QPushButton(frame);
        btn_Admin_Cancel->setObjectName("btn_Admin_Cancel");
        btn_Admin_Cancel->setGeometry(QRect(230, 230, 61, 31));
        btn_Admin_Cancel->setStyleSheet(QString::fromUtf8("  \n"
"\n"
"\n"
" QPushButton {\n"
" border-radius: 10px;\n"
" font: 500 12pt ;\n"
" color: rgb(255, 255, 255);\n"
"   \n"
"}"));
        pushButton = new QPushButton(Adminlogin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 10, 531, 51));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:3px solid black;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"   \n"
"                    font: 700 13pt ;\n"
"\n"
"}\n"
"\n"
" "));
        pushButton_2 = new QPushButton(Adminlogin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 70, 381, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:3px solid black;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"   \n"
"                    font: 700 13pt ;\n"
"\n"
"}\n"
"\n"
" "));

        retranslateUi(Adminlogin);

        QMetaObject::connectSlotsByName(Adminlogin);
    } // setupUi

    void retranslateUi(QDialog *Adminlogin)
    {
        Adminlogin->setWindowTitle(QCoreApplication::translate("Adminlogin", "Dialog", nullptr));
        btn_Admin_login->setText(QCoreApplication::translate("Adminlogin", "Submit", nullptr));
        lineEdit_username_2->setPlaceholderText(QCoreApplication::translate("Adminlogin", "Enter your username", nullptr));
        lineEdit_password_2->setPlaceholderText(QCoreApplication::translate("Adminlogin", "Enter your password", nullptr));
        btn_Admin_Cancel->setText(QCoreApplication::translate("Adminlogin", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("Adminlogin", "Lusaka Busines And Technical College", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Adminlogin", " Student Record management System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adminlogin: public Ui_Adminlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H

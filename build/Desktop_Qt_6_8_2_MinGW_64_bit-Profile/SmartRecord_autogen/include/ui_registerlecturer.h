/********************************************************************************
** Form generated from reading UI file 'registerlecturer.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERLECTURER_H
#define UI_REGISTERLECTURER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterLecturer
{
public:
    QPushButton *pushButton;
    QPushButton *btn_RegisterLecturer_back;
    QFrame *frame;
    QLineEdit *lineEdit_Fname;
    QLineEdit *lineEdit_Mname;
    QLineEdit *lineEdit_Lname;
    QLineEdit *lineEdit_NRC;
    QLineEdit *lineEdit_Phone;
    QLineEdit *lineEdit_Email;
    QLineEdit *lineEdit_Qualification;
    QLineEdit *lineEdit_Physical_Address;
    QPushButton *btn_browse_image;
    QLabel *image_field;
    QLineEdit *lineEdit_Lecturer_Department;
    QPushButton *pushButton_3;

    void setupUi(QDialog *RegisterLecturer)
    {
        if (RegisterLecturer->objectName().isEmpty())
            RegisterLecturer->setObjectName("RegisterLecturer");
        RegisterLecturer->resize(1154, 604);
        RegisterLecturer->setStyleSheet(QString::fromUtf8("background-color: #3a3f5c;"));
        pushButton = new QPushButton(RegisterLecturer);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1154, 41));
        btn_RegisterLecturer_back = new QPushButton(RegisterLecturer);
        btn_RegisterLecturer_back->setObjectName("btn_RegisterLecturer_back");
        btn_RegisterLecturer_back->setGeometry(QRect(1060, 50, 91, 41));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentRevert));
        btn_RegisterLecturer_back->setIcon(icon);
        frame = new QFrame(RegisterLecturer);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(170, 160, 971, 431));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        lineEdit_Fname = new QLineEdit(frame);
        lineEdit_Fname->setObjectName("lineEdit_Fname");
        lineEdit_Fname->setGeometry(QRect(250, 30, 231, 31));
        lineEdit_Mname = new QLineEdit(frame);
        lineEdit_Mname->setObjectName("lineEdit_Mname");
        lineEdit_Mname->setGeometry(QRect(490, 30, 231, 31));
        lineEdit_Lname = new QLineEdit(frame);
        lineEdit_Lname->setObjectName("lineEdit_Lname");
        lineEdit_Lname->setGeometry(QRect(730, 30, 231, 31));
        lineEdit_NRC = new QLineEdit(frame);
        lineEdit_NRC->setObjectName("lineEdit_NRC");
        lineEdit_NRC->setGeometry(QRect(250, 80, 231, 31));
        lineEdit_Phone = new QLineEdit(frame);
        lineEdit_Phone->setObjectName("lineEdit_Phone");
        lineEdit_Phone->setGeometry(QRect(490, 80, 231, 31));
        lineEdit_Email = new QLineEdit(frame);
        lineEdit_Email->setObjectName("lineEdit_Email");
        lineEdit_Email->setGeometry(QRect(730, 80, 231, 31));
        lineEdit_Qualification = new QLineEdit(frame);
        lineEdit_Qualification->setObjectName("lineEdit_Qualification");
        lineEdit_Qualification->setGeometry(QRect(250, 130, 231, 31));
        lineEdit_Physical_Address = new QLineEdit(frame);
        lineEdit_Physical_Address->setObjectName("lineEdit_Physical_Address");
        lineEdit_Physical_Address->setGeometry(QRect(490, 130, 471, 31));
        btn_browse_image = new QPushButton(frame);
        btn_browse_image->setObjectName("btn_browse_image");
        btn_browse_image->setGeometry(QRect(30, 180, 131, 41));
        btn_browse_image->setStyleSheet(QString::fromUtf8("\n"
" QPushButton {\n"
"  \n"
" font: 700 12pt ;\n"
" color: rgb(255, 255, 255);\n"
"background-color: #3a3f5c;\n"
"\n"
"}"));
        image_field = new QLabel(frame);
        image_field->setObjectName("image_field");
        image_field->setGeometry(QRect(10, 10, 181, 161));
        image_field->setStyleSheet(QString::fromUtf8(" \n"
" QLabel {\n"
"  border:2px solid gray;\n"
"  border-radius: 10px;\n"
"  padding: 8px 8px;\n"
"  background: rgb(255, 255, 255);\n"
" \n"
"};"));
        lineEdit_Lecturer_Department = new QLineEdit(frame);
        lineEdit_Lecturer_Department->setObjectName("lineEdit_Lecturer_Department");
        lineEdit_Lecturer_Department->setGeometry(QRect(250, 170, 231, 31));
        pushButton_3 = new QPushButton(RegisterLecturer);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(480, 110, 531, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8(" background-color: #1e1e2f;"));

        retranslateUi(RegisterLecturer);

        QMetaObject::connectSlotsByName(RegisterLecturer);
    } // setupUi

    void retranslateUi(QDialog *RegisterLecturer)
    {
        RegisterLecturer->setWindowTitle(QCoreApplication::translate("RegisterLecturer", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterLecturer", "LBTC SMART RECORD SYSTEM", nullptr));
        btn_RegisterLecturer_back->setText(QCoreApplication::translate("RegisterLecturer", "Back", nullptr));
        lineEdit_Fname->setPlaceholderText(QCoreApplication::translate("RegisterLecturer", "Enter Lecturer's First Name", nullptr));
        lineEdit_Mname->setPlaceholderText(QCoreApplication::translate("RegisterLecturer", "Enter Lecturer's Middle Name", nullptr));
        lineEdit_Lname->setPlaceholderText(QCoreApplication::translate("RegisterLecturer", "Enter Lecturer's Last Name", nullptr));
        lineEdit_NRC->setPlaceholderText(QCoreApplication::translate("RegisterLecturer", "Enter Lecturer's NRC#", nullptr));
        lineEdit_Phone->setPlaceholderText(QCoreApplication::translate("RegisterLecturer", "Enter Lecturer's Phone Number", nullptr));
        lineEdit_Email->setPlaceholderText(QCoreApplication::translate("RegisterLecturer", "Enter Lecturer's Email Address", nullptr));
        lineEdit_Qualification->setPlaceholderText(QCoreApplication::translate("RegisterLecturer", "Enter Lecturer's Qualifications", nullptr));
        lineEdit_Physical_Address->setPlaceholderText(QCoreApplication::translate("RegisterLecturer", "Enter Lecturer's physical address", nullptr));
        btn_browse_image->setText(QCoreApplication::translate("RegisterLecturer", "Browse image", nullptr));
        image_field->setText(QString());
        lineEdit_Lecturer_Department->setPlaceholderText(QCoreApplication::translate("RegisterLecturer", "Assign Lecturer to a department", nullptr));
        pushButton_3->setText(QCoreApplication::translate("RegisterLecturer", "LECTURER REGISTRATION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterLecturer: public Ui_RegisterLecturer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERLECTURER_H

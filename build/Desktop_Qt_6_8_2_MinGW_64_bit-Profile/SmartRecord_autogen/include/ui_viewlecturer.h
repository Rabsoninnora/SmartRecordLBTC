/********************************************************************************
** Form generated from reading UI file 'viewlecturer.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWLECTURER_H
#define UI_VIEWLECTURER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ViewLecturer
{
public:
    QPushButton *pushButton;
    QPushButton *btn_View_Lecturer_back;
    QFrame *frame;
    QLineEdit *lineEdit_Fname;
    QLineEdit *lineEdit_Mname;
    QLineEdit *lineEdit_Lname;
    QLineEdit *lineEdit_NRC;
    QLineEdit *lineEdit_Phone;
    QLineEdit *lineEdit_Email;
    QLineEdit *lineEdit_Qualification;
    QLineEdit *lineEdit_Physical_Address;
    QLabel *image_field;
    QLineEdit *lineEdit_Lecturer_Department;
    QLineEdit *lineEdit_Lecturer_No_Courses;
    QPlainTextEdit *plainTextEdit_Subjects;
    QPushButton *pushButton_2;
    QPushButton *btn_update;
    QPushButton *btn_delete;
    QPushButton *btn_clear;
    QLineEdit *lineEdit_Search_Lecturer;
    QPushButton *btn_search;

    void setupUi(QDialog *ViewLecturer)
    {
        if (ViewLecturer->objectName().isEmpty())
            ViewLecturer->setObjectName("ViewLecturer");
        ViewLecturer->resize(1154, 604);
        ViewLecturer->setStyleSheet(QString::fromUtf8("background-color: #3a3f5c;"));
        pushButton = new QPushButton(ViewLecturer);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1154, 41));
        btn_View_Lecturer_back = new QPushButton(ViewLecturer);
        btn_View_Lecturer_back->setObjectName("btn_View_Lecturer_back");
        btn_View_Lecturer_back->setGeometry(QRect(1060, 50, 91, 41));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentRevert));
        btn_View_Lecturer_back->setIcon(icon);
        frame = new QFrame(ViewLecturer);
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
        image_field = new QLabel(frame);
        image_field->setObjectName("image_field");
        image_field->setGeometry(QRect(10, 10, 221, 191));
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
        lineEdit_Lecturer_No_Courses = new QLineEdit(frame);
        lineEdit_Lecturer_No_Courses->setObjectName("lineEdit_Lecturer_No_Courses");
        lineEdit_Lecturer_No_Courses->setGeometry(QRect(490, 170, 111, 31));
        plainTextEdit_Subjects = new QPlainTextEdit(frame);
        plainTextEdit_Subjects->setObjectName("plainTextEdit_Subjects");
        plainTextEdit_Subjects->setGeometry(QRect(640, 170, 321, 141));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(480, 405, 481, 20));
        pushButton_2->setStyleSheet(QString::fromUtf8(" background-color: #1e1e2f;"));
        btn_update = new QPushButton(frame);
        btn_update->setObjectName("btn_update");
        btn_update->setGeometry(QRect(20, 370, 131, 51));
        btn_delete = new QPushButton(frame);
        btn_delete->setObjectName("btn_delete");
        btn_delete->setGeometry(QRect(160, 370, 131, 51));
        btn_clear = new QPushButton(frame);
        btn_clear->setObjectName("btn_clear");
        btn_clear->setGeometry(QRect(300, 370, 131, 51));
        lineEdit_Search_Lecturer = new QLineEdit(ViewLecturer);
        lineEdit_Search_Lecturer->setObjectName("lineEdit_Search_Lecturer");
        lineEdit_Search_Lecturer->setGeometry(QRect(560, 110, 251, 41));
        btn_search = new QPushButton(ViewLecturer);
        btn_search->setObjectName("btn_search");
        btn_search->setGeometry(QRect(830, 110, 111, 41));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::SystemSearch));
        btn_search->setIcon(icon1);

        retranslateUi(ViewLecturer);

        QMetaObject::connectSlotsByName(ViewLecturer);
    } // setupUi

    void retranslateUi(QDialog *ViewLecturer)
    {
        ViewLecturer->setWindowTitle(QCoreApplication::translate("ViewLecturer", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ViewLecturer", "LBTC SMART RECORD SYSTEM", nullptr));
        btn_View_Lecturer_back->setText(QCoreApplication::translate("ViewLecturer", "Back", nullptr));
        lineEdit_Fname->setPlaceholderText(QCoreApplication::translate("ViewLecturer", "* Enter Lecturer's First Name", nullptr));
        lineEdit_Mname->setPlaceholderText(QCoreApplication::translate("ViewLecturer", "Enter Lecturer's Middle Name", nullptr));
        lineEdit_Lname->setPlaceholderText(QCoreApplication::translate("ViewLecturer", "* Enter Lecturer's Last Name", nullptr));
        lineEdit_NRC->setPlaceholderText(QCoreApplication::translate("ViewLecturer", "* Enter Lecturer's NRC#", nullptr));
        lineEdit_Phone->setPlaceholderText(QCoreApplication::translate("ViewLecturer", "* Enter Lecturer's Phone Number", nullptr));
        lineEdit_Email->setPlaceholderText(QCoreApplication::translate("ViewLecturer", "* Enter Lecturer's Email Address", nullptr));
        lineEdit_Qualification->setPlaceholderText(QCoreApplication::translate("ViewLecturer", "* Enter Lecturer's Qualifications", nullptr));
        lineEdit_Physical_Address->setPlaceholderText(QCoreApplication::translate("ViewLecturer", "* Enter Lecturer's physical address", nullptr));
        image_field->setText(QString());
        lineEdit_Lecturer_Department->setPlaceholderText(QCoreApplication::translate("ViewLecturer", "* Assign Lecturer to a department", nullptr));
        lineEdit_Lecturer_No_Courses->setPlaceholderText(QCoreApplication::translate("ViewLecturer", "* No. OF Courses", nullptr));
        plainTextEdit_Subjects->setPlaceholderText(QCoreApplication::translate("ViewLecturer", "* Enter Subjects or Courses this Lecturer can teach", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ViewLecturer", "All Fields marked with * are required fields make sure to have them all filled", nullptr));
        btn_update->setText(QCoreApplication::translate("ViewLecturer", "Update", nullptr));
        btn_delete->setText(QCoreApplication::translate("ViewLecturer", "Delete", nullptr));
        btn_clear->setText(QCoreApplication::translate("ViewLecturer", "Clear", nullptr));
        lineEdit_Search_Lecturer->setPlaceholderText(QCoreApplication::translate("ViewLecturer", "Enter Lecturer's NRC# to Search", nullptr));
        btn_search->setText(QCoreApplication::translate("ViewLecturer", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewLecturer: public Ui_ViewLecturer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWLECTURER_H

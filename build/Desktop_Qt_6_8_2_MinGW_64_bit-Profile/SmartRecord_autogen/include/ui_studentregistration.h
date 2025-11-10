/********************************************************************************
** Form generated from reading UI file 'studentregistration.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTREGISTRATION_H
#define UI_STUDENTREGISTRATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_StudentRegistration
{
public:
    QPushButton *pushButton;
    QPushButton *btn_RegisterStudent_back;
    QPushButton *StudentRegistration_2;
    QFrame *frame;
    QLineEdit *lineEdit_Fname;
    QLineEdit *lineEdit_Mname;
    QLineEdit *lineEdit_Lname;
    QLineEdit *lineEdit_Student_Program;
    QLineEdit *lineEdit_Student_ID;
    QLineEdit *lineEdit_Enro_year;
    QLineEdit *lineEdit_Course_Duration;
    QLineEdit *lineEdit_Student_Status;
    QPushButton *btn_Student_browse_image;
    QLabel *image_field;
    QLineEdit *lineEdit_Student_Email;
    QLineEdit *lineEdit_Student_Phone;
    QPushButton *pushButton_2;
    QPushButton *btn_submit_lecturer;
    QPushButton *btn_Reset_Lecturer;
    QLineEdit *lineEdit_Stud_NXTOF_KIN;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *Sponsorship_Type;
    QLabel *label_12;

    void setupUi(QDialog *StudentRegistration)
    {
        if (StudentRegistration->objectName().isEmpty())
            StudentRegistration->setObjectName("StudentRegistration");
        StudentRegistration->resize(1154, 604);
        StudentRegistration->setStyleSheet(QString::fromUtf8("background-color: #3a3f5c;"));
        pushButton = new QPushButton(StudentRegistration);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1154, 41));
        btn_RegisterStudent_back = new QPushButton(StudentRegistration);
        btn_RegisterStudent_back->setObjectName("btn_RegisterStudent_back");
        btn_RegisterStudent_back->setGeometry(QRect(1060, 50, 91, 41));
        btn_RegisterStudent_back->setStyleSheet(QString::fromUtf8("    \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        btn_RegisterStudent_back->setIcon(icon);
        StudentRegistration_2 = new QPushButton(StudentRegistration);
        StudentRegistration_2->setObjectName("StudentRegistration_2");
        StudentRegistration_2->setGeometry(QRect(170, 110, 971, 41));
        StudentRegistration_2->setStyleSheet(QString::fromUtf8("     \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 6px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        frame = new QFrame(StudentRegistration);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(170, 160, 971, 431));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        lineEdit_Fname = new QLineEdit(frame);
        lineEdit_Fname->setObjectName("lineEdit_Fname");
        lineEdit_Fname->setGeometry(QRect(250, 40, 231, 31));
        lineEdit_Fname->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        lineEdit_Mname = new QLineEdit(frame);
        lineEdit_Mname->setObjectName("lineEdit_Mname");
        lineEdit_Mname->setGeometry(QRect(490, 40, 231, 31));
        lineEdit_Mname->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        lineEdit_Lname = new QLineEdit(frame);
        lineEdit_Lname->setObjectName("lineEdit_Lname");
        lineEdit_Lname->setGeometry(QRect(730, 40, 231, 31));
        lineEdit_Lname->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        lineEdit_Student_Program = new QLineEdit(frame);
        lineEdit_Student_Program->setObjectName("lineEdit_Student_Program");
        lineEdit_Student_Program->setGeometry(QRect(250, 110, 231, 31));
        lineEdit_Student_Program->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        lineEdit_Student_ID = new QLineEdit(frame);
        lineEdit_Student_ID->setObjectName("lineEdit_Student_ID");
        lineEdit_Student_ID->setGeometry(QRect(490, 110, 231, 31));
        lineEdit_Student_ID->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        lineEdit_Enro_year = new QLineEdit(frame);
        lineEdit_Enro_year->setObjectName("lineEdit_Enro_year");
        lineEdit_Enro_year->setGeometry(QRect(730, 110, 231, 31));
        lineEdit_Enro_year->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        lineEdit_Course_Duration = new QLineEdit(frame);
        lineEdit_Course_Duration->setObjectName("lineEdit_Course_Duration");
        lineEdit_Course_Duration->setGeometry(QRect(250, 190, 231, 31));
        lineEdit_Course_Duration->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        lineEdit_Student_Status = new QLineEdit(frame);
        lineEdit_Student_Status->setObjectName("lineEdit_Student_Status");
        lineEdit_Student_Status->setGeometry(QRect(490, 190, 231, 31));
        lineEdit_Student_Status->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_Student_browse_image = new QPushButton(frame);
        btn_Student_browse_image->setObjectName("btn_Student_browse_image");
        btn_Student_browse_image->setGeometry(QRect(45, 218, 131, 41));
        btn_Student_browse_image->setStyleSheet(QString::fromUtf8("    \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        btn_Student_browse_image->setIcon(icon1);
        image_field = new QLabel(frame);
        image_field->setObjectName("image_field");
        image_field->setGeometry(QRect(10, 10, 211, 201));
        image_field->setStyleSheet(QString::fromUtf8(" \n"
" QLabel {\n"
"  border:2px solid green;\n"
"  border-radius: 10px;\n"
"  padding: 8px 8px;\n"
"  background: rgb(255, 255, 255);\n"
" \n"
"};"));
        lineEdit_Student_Email = new QLineEdit(frame);
        lineEdit_Student_Email->setObjectName("lineEdit_Student_Email");
        lineEdit_Student_Email->setGeometry(QRect(250, 260, 231, 31));
        lineEdit_Student_Email->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        lineEdit_Student_Phone = new QLineEdit(frame);
        lineEdit_Student_Phone->setObjectName("lineEdit_Student_Phone");
        lineEdit_Student_Phone->setGeometry(QRect(730, 190, 231, 31));
        lineEdit_Student_Phone->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 400, 971, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("    \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 6px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_submit_lecturer = new QPushButton(frame);
        btn_submit_lecturer->setObjectName("btn_submit_lecturer");
        btn_submit_lecturer->setGeometry(QRect(250, 320, 121, 41));
        btn_submit_lecturer->setStyleSheet(QString::fromUtf8("   \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        btn_submit_lecturer->setIcon(icon2);
        btn_Reset_Lecturer = new QPushButton(frame);
        btn_Reset_Lecturer->setObjectName("btn_Reset_Lecturer");
        btn_Reset_Lecturer->setGeometry(QRect(490, 320, 131, 41));
        btn_Reset_Lecturer->setStyleSheet(QString::fromUtf8("   \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::ViewRestore));
        btn_Reset_Lecturer->setIcon(icon3);
        lineEdit_Stud_NXTOF_KIN = new QLineEdit(frame);
        lineEdit_Stud_NXTOF_KIN->setObjectName("lineEdit_Stud_NXTOF_KIN");
        lineEdit_Stud_NXTOF_KIN->setGeometry(QRect(490, 260, 231, 31));
        lineEdit_Stud_NXTOF_KIN->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(255, 10, 101, 31));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(497, 10, 101, 31));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(738, 10, 101, 31));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(737, 80, 101, 31));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(497, 80, 100, 31));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(255, 80, 100, 31));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(255, 160, 100, 31));
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(254, 230, 100, 31));
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(496, 160, 100, 31));
        label_10 = new QLabel(frame);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(494, 230, 191, 31));
        label_11 = new QLabel(frame);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(739, 160, 100, 31));
        Sponsorship_Type = new QLineEdit(frame);
        Sponsorship_Type->setObjectName("Sponsorship_Type");
        Sponsorship_Type->setGeometry(QRect(730, 260, 231, 31));
        Sponsorship_Type->setStyleSheet(QString::fromUtf8("   \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 0px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                    \n"
"	                font: 700 9pt \"Segoe UI\";\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        label_12 = new QLabel(frame);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(740, 230, 121, 31));

        retranslateUi(StudentRegistration);

        QMetaObject::connectSlotsByName(StudentRegistration);
    } // setupUi

    void retranslateUi(QDialog *StudentRegistration)
    {
        StudentRegistration->setWindowTitle(QCoreApplication::translate("StudentRegistration", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("StudentRegistration", " STUDENT RECORDS  MANAGEMENT SYSTEM", nullptr));
        btn_RegisterStudent_back->setText(QCoreApplication::translate("StudentRegistration", "Back", nullptr));
        StudentRegistration_2->setText(QCoreApplication::translate("StudentRegistration", "STUDENT REGISTRATION FORM", nullptr));
        lineEdit_Fname->setPlaceholderText(QCoreApplication::translate("StudentRegistration", "First Name", nullptr));
        lineEdit_Mname->setPlaceholderText(QCoreApplication::translate("StudentRegistration", "Middle Name", nullptr));
        lineEdit_Lname->setPlaceholderText(QCoreApplication::translate("StudentRegistration", "Last Name", nullptr));
        lineEdit_Student_Program->setPlaceholderText(QCoreApplication::translate("StudentRegistration", "Program", nullptr));
        lineEdit_Student_ID->setText(QString());
        lineEdit_Student_ID->setPlaceholderText(QCoreApplication::translate("StudentRegistration", "Student ID", nullptr));
        lineEdit_Enro_year->setText(QString());
        lineEdit_Enro_year->setPlaceholderText(QCoreApplication::translate("StudentRegistration", "Year Enrolled", nullptr));
        lineEdit_Course_Duration->setPlaceholderText(QCoreApplication::translate("StudentRegistration", "Course Duration", nullptr));
        lineEdit_Student_Status->setPlaceholderText(QCoreApplication::translate("StudentRegistration", "Status", nullptr));
        btn_Student_browse_image->setText(QCoreApplication::translate("StudentRegistration", "Browse image", nullptr));
        image_field->setText(QString());
        lineEdit_Student_Email->setPlaceholderText(QCoreApplication::translate("StudentRegistration", "Email Address", nullptr));
        lineEdit_Student_Phone->setPlaceholderText(QCoreApplication::translate("StudentRegistration", "Phone", nullptr));
        pushButton_2->setText(QCoreApplication::translate("StudentRegistration", "All Fields marked with * are required fields make sure to have them all filled", nullptr));
        btn_submit_lecturer->setText(QCoreApplication::translate("StudentRegistration", "Submit", nullptr));
        btn_Reset_Lecturer->setText(QCoreApplication::translate("StudentRegistration", "Reset", nullptr));
        lineEdit_Stud_NXTOF_KIN->setPlaceholderText(QCoreApplication::translate("StudentRegistration", "Next oF Kin Contact Number", nullptr));
        label->setText(QCoreApplication::translate("StudentRegistration", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("StudentRegistration", "Middle Name", nullptr));
        label_3->setText(QCoreApplication::translate("StudentRegistration", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("StudentRegistration", "Year Enrolled", nullptr));
        label_5->setText(QCoreApplication::translate("StudentRegistration", "Student ID", nullptr));
        label_6->setText(QCoreApplication::translate("StudentRegistration", "Program", nullptr));
        label_7->setText(QCoreApplication::translate("StudentRegistration", "Course Duration", nullptr));
        label_8->setText(QCoreApplication::translate("StudentRegistration", "Email Address", nullptr));
        label_9->setText(QCoreApplication::translate("StudentRegistration", "Status", nullptr));
        label_10->setText(QCoreApplication::translate("StudentRegistration", "Next OF KIN Contact Number#", nullptr));
        label_11->setText(QCoreApplication::translate("StudentRegistration", "Phone", nullptr));
        Sponsorship_Type->setPlaceholderText(QCoreApplication::translate("StudentRegistration", "Sponsorship Type", nullptr));
        label_12->setText(QCoreApplication::translate("StudentRegistration", "Sponsorship Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentRegistration: public Ui_StudentRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTREGISTRATION_H

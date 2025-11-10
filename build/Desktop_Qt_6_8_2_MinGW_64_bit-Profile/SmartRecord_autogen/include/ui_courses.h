/********************************************************************************
** Form generated from reading UI file 'courses.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSES_H
#define UI_COURSES_H

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

class Ui_Courses
{
public:
    QPushButton *pushButton;
    QPushButton *btn_Course_back;
    QFrame *frame;
    QLineEdit *lineEdit_Department;
    QLineEdit *lineEdit_code;
    QLineEdit *lineEdit_Course_Name;
    QLineEdit *lineEdit_Total_Subjects;
    QLineEdit *lineEdit_Course_Duration;
    QPushButton *btn_Course_Submit;
    QPushButton *pushButton_2;
    QPushButton *btn_Reset_Course;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPlainTextEdit *plainTextEdit_SubjectList;
    QLabel *label_8;

    void setupUi(QDialog *Courses)
    {
        if (Courses->objectName().isEmpty())
            Courses->setObjectName("Courses");
        Courses->resize(1154, 604);
        Courses->setStyleSheet(QString::fromUtf8("background-color: #3a3f5c;"));
        pushButton = new QPushButton(Courses);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1154, 41));
        btn_Course_back = new QPushButton(Courses);
        btn_Course_back->setObjectName("btn_Course_back");
        btn_Course_back->setGeometry(QRect(1060, 50, 91, 41));
        btn_Course_back->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_Course_back->setIcon(icon);
        frame = new QFrame(Courses);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(170, 160, 971, 431));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        lineEdit_Department = new QLineEdit(frame);
        lineEdit_Department->setObjectName("lineEdit_Department");
        lineEdit_Department->setGeometry(QRect(250, 40, 231, 31));
        lineEdit_Department->setStyleSheet(QString::fromUtf8("   \n"
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
        lineEdit_code = new QLineEdit(frame);
        lineEdit_code->setObjectName("lineEdit_code");
        lineEdit_code->setGeometry(QRect(490, 40, 231, 31));
        lineEdit_code->setStyleSheet(QString::fromUtf8("   \n"
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
        lineEdit_Course_Name = new QLineEdit(frame);
        lineEdit_Course_Name->setObjectName("lineEdit_Course_Name");
        lineEdit_Course_Name->setGeometry(QRect(250, 110, 231, 31));
        lineEdit_Course_Name->setStyleSheet(QString::fromUtf8("   \n"
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
        lineEdit_Total_Subjects = new QLineEdit(frame);
        lineEdit_Total_Subjects->setObjectName("lineEdit_Total_Subjects");
        lineEdit_Total_Subjects->setGeometry(QRect(490, 110, 231, 31));
        lineEdit_Total_Subjects->setStyleSheet(QString::fromUtf8("   \n"
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
        lineEdit_Course_Duration->setGeometry(QRect(248, 173, 141, 31));
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
        btn_Course_Submit = new QPushButton(frame);
        btn_Course_Submit->setObjectName("btn_Course_Submit");
        btn_Course_Submit->setGeometry(QRect(250, 350, 101, 31));
        btn_Course_Submit->setStyleSheet(QString::fromUtf8("    \n"
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
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSend));
        btn_Course_Submit->setIcon(icon1);
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
        btn_Reset_Course = new QPushButton(frame);
        btn_Reset_Course->setObjectName("btn_Reset_Course");
        btn_Reset_Course->setGeometry(QRect(620, 350, 101, 31));
        btn_Reset_Course->setStyleSheet(QString::fromUtf8("   \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 400 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::ViewRestore));
        btn_Reset_Course->setIcon(icon2);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(255, 10, 101, 31));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(497, 10, 101, 31));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(497, 80, 100, 31));
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(255, 80, 100, 31));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(250, 150, 100, 31));
        plainTextEdit_SubjectList = new QPlainTextEdit(frame);
        plainTextEdit_SubjectList->setObjectName("plainTextEdit_SubjectList");
        plainTextEdit_SubjectList->setGeometry(QRect(400, 170, 321, 151));
        plainTextEdit_SubjectList->setStyleSheet(QString::fromUtf8("   \n"
"QPlainTextEdit{\n"
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
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(410, 150, 100, 31));
        btn_Course_Submit->raise();
        lineEdit_Department->raise();
        lineEdit_code->raise();
        lineEdit_Course_Name->raise();
        lineEdit_Total_Subjects->raise();
        lineEdit_Course_Duration->raise();
        pushButton_2->raise();
        btn_Reset_Course->raise();
        label->raise();
        label_2->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        plainTextEdit_SubjectList->raise();
        label_8->raise();

        retranslateUi(Courses);

        QMetaObject::connectSlotsByName(Courses);
    } // setupUi

    void retranslateUi(QDialog *Courses)
    {
        Courses->setWindowTitle(QCoreApplication::translate("Courses", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Courses", "STUDENT  RECORDS MANAGEMENT  SYSTEM", nullptr));
        btn_Course_back->setText(QCoreApplication::translate("Courses", "Back", nullptr));
        lineEdit_Department->setPlaceholderText(QCoreApplication::translate("Courses", "Department", nullptr));
        lineEdit_code->setPlaceholderText(QCoreApplication::translate("Courses", "CODE", nullptr));
        lineEdit_Course_Name->setPlaceholderText(QCoreApplication::translate("Courses", "Program", nullptr));
        lineEdit_Total_Subjects->setText(QString());
        lineEdit_Total_Subjects->setPlaceholderText(QCoreApplication::translate("Courses", "Total Subjects", nullptr));
        lineEdit_Course_Duration->setPlaceholderText(QCoreApplication::translate("Courses", "Course Duration", nullptr));
        btn_Course_Submit->setText(QCoreApplication::translate("Courses", "Submit", nullptr));
        pushButton_2->setText(QString());
        btn_Reset_Course->setText(QCoreApplication::translate("Courses", "Clear", nullptr));
        label->setText(QCoreApplication::translate("Courses", "Department", nullptr));
        label_2->setText(QCoreApplication::translate("Courses", "CODE", nullptr));
        label_5->setText(QCoreApplication::translate("Courses", "Total Subjects", nullptr));
        label_6->setText(QCoreApplication::translate("Courses", "Course Name", nullptr));
        label_7->setText(QCoreApplication::translate("Courses", "Course Duration", nullptr));
        label_8->setText(QCoreApplication::translate("Courses", "Enter Subject", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Courses: public Ui_Courses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSES_H

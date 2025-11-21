/********************************************************************************
** Form generated from reading UI file 'datasetcourses.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASETCOURSES_H
#define UI_DATASETCOURSES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DataSetCourses
{
public:
    QFrame *frame;
    QPushButton *btn_Search_Course;
    QPushButton *btn_Reset_Course;
    QLineEdit *lineEdit_Search_Course;
    QTableWidget *tableWidget;
    QPushButton *btn_View_All_Courses;
    QPushButton *pushButton;
    QPushButton *btn_DataSetCourse_Back;

    void setupUi(QDialog *DataSetCourses)
    {
        if (DataSetCourses->objectName().isEmpty())
            DataSetCourses->setObjectName("DataSetCourses");
        DataSetCourses->resize(1154, 685);
        DataSetCourses->setStyleSheet(QString::fromUtf8("background-color: #3a3f5c;"));
        frame = new QFrame(DataSetCourses);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 170, 1151, 461));
        frame->setStyleSheet(QString::fromUtf8("\n"
"QFrame{\n"
" \n"
"\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        btn_Search_Course = new QPushButton(frame);
        btn_Search_Course->setObjectName("btn_Search_Course");
        btn_Search_Course->setGeometry(QRect(650, 10, 91, 40));
        btn_Search_Course->setStyleSheet(QString::fromUtf8("   \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid white;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::SystemSearch));
        btn_Search_Course->setIcon(icon);
        btn_Reset_Course = new QPushButton(frame);
        btn_Reset_Course->setObjectName("btn_Reset_Course");
        btn_Reset_Course->setGeometry(QRect(870, 10, 91, 40));
        btn_Reset_Course->setStyleSheet(QString::fromUtf8("   \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid white;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ViewRestore));
        btn_Reset_Course->setIcon(icon1);
        lineEdit_Search_Course = new QLineEdit(frame);
        lineEdit_Search_Course->setObjectName("lineEdit_Search_Course");
        lineEdit_Search_Course->setGeometry(QRect(270, 10, 361, 41));
        lineEdit_Search_Course->setStyleSheet(QString::fromUtf8("     \n"
"QLineEdit{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid white;\n"
"                    border-radius: 6px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        tableWidget = new QTableWidget(frame);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 60, 1121, 381));
        tableWidget->setStyleSheet(QString::fromUtf8("   \n"
"QTableWidget{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid white;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_View_All_Courses = new QPushButton(frame);
        btn_View_All_Courses->setObjectName("btn_View_All_Courses");
        btn_View_All_Courses->setGeometry(QRect(760, 10, 91, 40));
        btn_View_All_Courses->setStyleSheet(QString::fromUtf8("   \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid white;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        btn_View_All_Courses->setIcon(icon2);
        pushButton = new QPushButton(DataSetCourses);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1154, 41));
        pushButton->setStyleSheet(QString::fromUtf8("    \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid white;\n"
"                    border-radius: 1px;\n"
"                    padding: 0 2px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_DataSetCourse_Back = new QPushButton(DataSetCourses);
        btn_DataSetCourse_Back->setObjectName("btn_DataSetCourse_Back");
        btn_DataSetCourse_Back->setGeometry(QRect(1060, 60, 81, 31));
        btn_DataSetCourse_Back->setStyleSheet(QString::fromUtf8("    \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid white;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        btn_DataSetCourse_Back->setIcon(icon3);

        retranslateUi(DataSetCourses);

        QMetaObject::connectSlotsByName(DataSetCourses);
    } // setupUi

    void retranslateUi(QDialog *DataSetCourses)
    {
        DataSetCourses->setWindowTitle(QCoreApplication::translate("DataSetCourses", "Dialog", nullptr));
        btn_Search_Course->setText(QCoreApplication::translate("DataSetCourses", "Search", nullptr));
        btn_Reset_Course->setText(QCoreApplication::translate("DataSetCourses", "Reset", nullptr));
        lineEdit_Search_Course->setPlaceholderText(QCoreApplication::translate("DataSetCourses", "Enter Search Query", nullptr));
        btn_View_All_Courses->setText(QCoreApplication::translate("DataSetCourses", "View All", nullptr));
        pushButton->setText(QCoreApplication::translate("DataSetCourses", " STUDENT RECORDS  MANAGEMENT SYSTEM", nullptr));
        btn_DataSetCourse_Back->setText(QCoreApplication::translate("DataSetCourses", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataSetCourses: public Ui_DataSetCourses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASETCOURSES_H

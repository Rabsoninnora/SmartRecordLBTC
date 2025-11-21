/********************************************************************************
** Form generated from reading UI file 'datasetstudents.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATASETSTUDENTS_H
#define UI_DATASETSTUDENTS_H

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

class Ui_DataSetStudents
{
public:
    QPushButton *pushButton;
    QPushButton *SearchRecord;
    QPushButton *btn_DataSetStudents_Back;
    QFrame *frame;
    QPushButton *btn_Search;
    QPushButton *btn_Reset;
    QLineEdit *lineEdit_Search_Student;
    QTableWidget *tableWidget;
    QPushButton *btn_View_All;

    void setupUi(QDialog *DataSetStudents)
    {
        if (DataSetStudents->objectName().isEmpty())
            DataSetStudents->setObjectName("DataSetStudents");
        DataSetStudents->resize(1154, 540);
        DataSetStudents->setStyleSheet(QString::fromUtf8("background-color: #3a3f5c;"));
        pushButton = new QPushButton(DataSetStudents);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1154, 41));
        SearchRecord = new QPushButton(DataSetStudents);
        SearchRecord->setObjectName("SearchRecord");
        SearchRecord->setGeometry(QRect(0, 50, 271, 31));
        SearchRecord->setStyleSheet(QString::fromUtf8("     \n"
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
        btn_DataSetStudents_Back = new QPushButton(DataSetStudents);
        btn_DataSetStudents_Back->setObjectName("btn_DataSetStudents_Back");
        btn_DataSetStudents_Back->setGeometry(QRect(1060, 50, 81, 31));
        btn_DataSetStudents_Back->setStyleSheet(QString::fromUtf8("    \n"
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
        btn_DataSetStudents_Back->setIcon(icon);
        frame = new QFrame(DataSetStudents);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 120, 1151, 401));
        frame->setStyleSheet(QString::fromUtf8("\n"
"QFrame{\n"
" \n"
"\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        btn_Search = new QPushButton(frame);
        btn_Search->setObjectName("btn_Search");
        btn_Search->setGeometry(QRect(650, 10, 91, 40));
        btn_Search->setStyleSheet(QString::fromUtf8("   \n"
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
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::SystemSearch));
        btn_Search->setIcon(icon1);
        btn_Reset = new QPushButton(frame);
        btn_Reset->setObjectName("btn_Reset");
        btn_Reset->setGeometry(QRect(870, 10, 91, 40));
        btn_Reset->setStyleSheet(QString::fromUtf8("   \n"
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
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::ViewRestore));
        btn_Reset->setIcon(icon2);
        lineEdit_Search_Student = new QLineEdit(frame);
        lineEdit_Search_Student->setObjectName("lineEdit_Search_Student");
        lineEdit_Search_Student->setGeometry(QRect(270, 10, 361, 41));
        lineEdit_Search_Student->setStyleSheet(QString::fromUtf8("     \n"
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
        if (tableWidget->columnCount() < 12)
            tableWidget->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 60, 1141, 321));
        btn_View_All = new QPushButton(frame);
        btn_View_All->setObjectName("btn_View_All");
        btn_View_All->setGeometry(QRect(760, 10, 91, 40));
        btn_View_All->setStyleSheet(QString::fromUtf8("   \n"
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
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        btn_View_All->setIcon(icon3);

        retranslateUi(DataSetStudents);

        QMetaObject::connectSlotsByName(DataSetStudents);
    } // setupUi

    void retranslateUi(QDialog *DataSetStudents)
    {
        DataSetStudents->setWindowTitle(QCoreApplication::translate("DataSetStudents", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("DataSetStudents", " STUDENT RECORDS  MANAGEMENT SYSTEM", nullptr));
        SearchRecord->setText(QCoreApplication::translate("DataSetStudents", "Search Record", nullptr));
        btn_DataSetStudents_Back->setText(QCoreApplication::translate("DataSetStudents", "Back", nullptr));
        btn_Search->setText(QCoreApplication::translate("DataSetStudents", "Search", nullptr));
        btn_Reset->setText(QCoreApplication::translate("DataSetStudents", "Reset", nullptr));
        lineEdit_Search_Student->setPlaceholderText(QCoreApplication::translate("DataSetStudents", "Search Student(s) Record", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DataSetStudents", "Student_ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DataSetStudents", "Fname", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DataSetStudents", "Middle_Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DataSetStudents", "Lname", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DataSetStudents", "Program_Of_Study", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DataSetStudents", "Year_Enrol", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DataSetStudents", "Duration", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DataSetStudents", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DataSetStudents", "Phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DataSetStudents", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("DataSetStudents", "Next_OF_Kin_Phone#", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("DataSetStudents", "Image_Name", nullptr));
        btn_View_All->setText(QCoreApplication::translate("DataSetStudents", "View All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataSetStudents: public Ui_DataSetStudents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATASETSTUDENTS_H

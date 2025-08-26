/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUser
{
public:
    QPushButton *btn_adduser_back;
    QTabWidget *tabWidget;
    QWidget *Admin;
    QPushButton *btn_View_admin;
    QPushButton *btn_Update_admin;
    QLineEdit *lineEdit_Admin_ID;
    QPushButton *btn_Delete_admin;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit_User_name_2;
    QLineEdit *lineEdit_User_Password_2;
    QPushButton *btn_Insert_User_2;
    QPushButton *btn_Reset_User_2;
    QWidget *Students;
    QTableWidget *tableWidget;
    QPushButton *btn_View_User;
    QPushButton *btn_Update_User;
    QLineEdit *lineEdit_User_ID;
    QPushButton *btn_Delete_User;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_User_name;
    QLineEdit *lineEdit_User_Password;
    QPushButton *btn_Insert_User;
    QPushButton *btn_Reset_User;

    void setupUi(QDialog *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName("AddUser");
        AddUser->resize(1019, 710);
        btn_adduser_back = new QPushButton(AddUser);
        btn_adduser_back->setObjectName("btn_adduser_back");
        btn_adduser_back->setGeometry(QRect(930, 10, 61, 21));
        tabWidget = new QTabWidget(AddUser);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(90, 150, 813, 461));
        Admin = new QWidget();
        Admin->setObjectName("Admin");
        btn_View_admin = new QPushButton(Admin);
        btn_View_admin->setObjectName("btn_View_admin");
        btn_View_admin->setGeometry(QRect(250, 20, 111, 31));
        btn_View_admin->setStyleSheet(QString::fromUtf8(" \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditSelectAll));
        btn_View_admin->setIcon(icon);
        btn_Update_admin = new QPushButton(Admin);
        btn_Update_admin->setObjectName("btn_Update_admin");
        btn_Update_admin->setGeometry(QRect(430, 20, 91, 31));
        btn_Update_admin->setStyleSheet(QString::fromUtf8("  \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        btn_Update_admin->setIcon(icon1);
        lineEdit_Admin_ID = new QLineEdit(Admin);
        lineEdit_Admin_ID->setObjectName("lineEdit_Admin_ID");
        lineEdit_Admin_ID->setGeometry(QRect(550, 20, 121, 31));
        lineEdit_Admin_ID->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
"  border:3px solid red;\n"
"  border-radius: 10px;\n"
"  padding: 6px 6px;\n"
"  background: rgb(255, 255, 255);\n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"}"));
        btn_Delete_admin = new QPushButton(Admin);
        btn_Delete_admin->setObjectName("btn_Delete_admin");
        btn_Delete_admin->setGeometry(QRect(680, 20, 81, 31));
        btn_Delete_admin->setStyleSheet(QString::fromUtf8(" \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid red;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" \n"
" "));
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-delete")));
        btn_Delete_admin->setIcon(icon2);
        tableWidget_2 = new QTableWidget(Admin);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(250, 70, 511, 351));
        tableWidget_2->setStyleSheet(QString::fromUtf8(" QTableWidget {\n"
"    border: 2px solid rgb(0, 120, 215); /* A sleek blue border */\n"
"    border-radius: 8px;\n"
"    background-color: rgb(230, 240, 255); /* Soft blue background for readability */\n"
"    color: rgb(33, 33, 33); /* Dark gray text for better contrast */\n"
"    font-family: 'Segoe UI', sans-serif;\n"
"    font-size: 14px;\n"
"    gridline-color: rgb(200, 200, 200); /* Subtle grid lines */\n"
"}\n"
""));
        pushButton_7 = new QPushButton(Admin);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(70, 100, 81, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:0px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                     background-color: rgb(255, 255, 255); /* Soft blue background for readability */\n"
"                    font: 600 11pt ;\n"
"\n"
"}\n"
"\n"
"\n"
"    "));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        pushButton_7->setIcon(icon3);
        pushButton_7->setIconSize(QSize(45, 45));
        lineEdit_User_name_2 = new QLineEdit(Admin);
        lineEdit_User_name_2->setObjectName("lineEdit_User_name_2");
        lineEdit_User_name_2->setGeometry(QRect(20, 200, 221, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        lineEdit_User_name_2->setFont(font);
        lineEdit_User_name_2->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
"  border:3px solid gray;\n"
"  border-radius: 10px;\n"
"  padding: 6px 6px;\n"
"  background: rgb(255, 255, 255);\n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"}"));
        lineEdit_User_Password_2 = new QLineEdit(Admin);
        lineEdit_User_Password_2->setObjectName("lineEdit_User_Password_2");
        lineEdit_User_Password_2->setGeometry(QRect(20, 270, 221, 41));
        lineEdit_User_Password_2->setFont(font);
        lineEdit_User_Password_2->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
"  border:3px solid gray;\n"
"  border-radius: 10px;\n"
"  padding: 6px 6px;\n"
"  background: rgb(255, 255, 255);\n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"}"));
        btn_Insert_User_2 = new QPushButton(Admin);
        btn_Insert_User_2->setObjectName("btn_Insert_User_2");
        btn_Insert_User_2->setGeometry(QRect(20, 340, 81, 41));
        btn_Insert_User_2->setStyleSheet(QString::fromUtf8("  \n"
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
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSaveAs));
        btn_Insert_User_2->setIcon(icon4);
        btn_Reset_User_2 = new QPushButton(Admin);
        btn_Reset_User_2->setObjectName("btn_Reset_User_2");
        btn_Reset_User_2->setGeometry(QRect(150, 340, 91, 41));
        btn_Reset_User_2->setStyleSheet(QString::fromUtf8("  \n"
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
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::DocumentRevert));
        btn_Reset_User_2->setIcon(icon5);
        tabWidget->addTab(Admin, QString());
        Students = new QWidget();
        Students->setObjectName("Students");
        tableWidget = new QTableWidget(Students);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(260, 70, 541, 351));
        tableWidget->setStyleSheet(QString::fromUtf8(" QTableWidget {\n"
"    border: 2px solid rgb(0, 120, 215); /* A sleek blue border */\n"
"    border-radius: 8px;\n"
"    background-color: rgb(230, 240, 255); /* Soft blue background for readability */\n"
"    color: rgb(33, 33, 33); /* Dark gray text for better contrast */\n"
"    font-family: 'Segoe UI', sans-serif;\n"
"    font-size: 14px;\n"
"    gridline-color: rgb(200, 200, 200); /* Subtle grid lines */\n"
"}\n"
""));
        btn_View_User = new QPushButton(Students);
        btn_View_User->setObjectName("btn_View_User");
        btn_View_User->setGeometry(QRect(350, 10, 111, 31));
        btn_View_User->setStyleSheet(QString::fromUtf8("  \n"
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
        btn_View_User->setIcon(icon);
        btn_Update_User = new QPushButton(Students);
        btn_Update_User->setObjectName("btn_Update_User");
        btn_Update_User->setGeometry(QRect(470, 10, 91, 31));
        btn_Update_User->setStyleSheet(QString::fromUtf8("  \n"
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
        btn_Update_User->setIcon(icon1);
        lineEdit_User_ID = new QLineEdit(Students);
        lineEdit_User_ID->setObjectName("lineEdit_User_ID");
        lineEdit_User_ID->setGeometry(QRect(580, 10, 121, 31));
        lineEdit_User_ID->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
"  border:3px solid red;\n"
"  border-radius: 10px;\n"
"  padding: 6px 6px;\n"
"  background: rgb(255, 255, 255);\n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"}"));
        btn_Delete_User = new QPushButton(Students);
        btn_Delete_User->setObjectName("btn_Delete_User");
        btn_Delete_User->setGeometry(QRect(710, 10, 81, 31));
        btn_Delete_User->setStyleSheet(QString::fromUtf8("  \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid red;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        btn_Delete_User->setIcon(icon6);
        pushButton_6 = new QPushButton(Students);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(80, 80, 81, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:0px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                     background-color: rgb(255, 255, 255); /* Soft blue background for readability */\n"
"                    font: 600 11pt ;\n"
"\n"
"}\n"
"\n"
"\n"
"    "));
        pushButton_6->setIcon(icon3);
        pushButton_6->setIconSize(QSize(45, 45));
        lineEdit_User_name = new QLineEdit(Students);
        lineEdit_User_name->setObjectName("lineEdit_User_name");
        lineEdit_User_name->setGeometry(QRect(20, 190, 221, 41));
        lineEdit_User_name->setFont(font);
        lineEdit_User_name->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
"  border:3px solid gray;\n"
"  border-radius: 10px;\n"
"  padding: 6px 6px;\n"
"  background: rgb(255, 255, 255);\n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"}"));
        lineEdit_User_Password = new QLineEdit(Students);
        lineEdit_User_Password->setObjectName("lineEdit_User_Password");
        lineEdit_User_Password->setGeometry(QRect(20, 260, 221, 41));
        lineEdit_User_Password->setFont(font);
        lineEdit_User_Password->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
"  border:3px solid gray;\n"
"  border-radius: 10px;\n"
"  padding: 6px 6px;\n"
"  background: rgb(255, 255, 255);\n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"}"));
        btn_Insert_User = new QPushButton(Students);
        btn_Insert_User->setObjectName("btn_Insert_User");
        btn_Insert_User->setGeometry(QRect(20, 320, 81, 41));
        btn_Insert_User->setStyleSheet(QString::fromUtf8("  \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:3px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_Insert_User->setIcon(icon4);
        btn_Reset_User = new QPushButton(Students);
        btn_Reset_User->setObjectName("btn_Reset_User");
        btn_Reset_User->setGeometry(QRect(160, 320, 91, 41));
        btn_Reset_User->setStyleSheet(QString::fromUtf8("  \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:3px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_Reset_User->setIcon(icon5);
        tabWidget->addTab(Students, QString());

        retranslateUi(AddUser);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QDialog *AddUser)
    {
        AddUser->setWindowTitle(QCoreApplication::translate("AddUser", "Dialog", nullptr));
        btn_adduser_back->setText(QCoreApplication::translate("AddUser", "Back", nullptr));
        btn_View_admin->setText(QCoreApplication::translate("AddUser", "View Record", nullptr));
        btn_Update_admin->setText(QCoreApplication::translate("AddUser", "Update", nullptr));
        lineEdit_Admin_ID->setPlaceholderText(QCoreApplication::translate("AddUser", "Enter ID *", nullptr));
        btn_Delete_admin->setText(QCoreApplication::translate("AddUser", "Delete", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AddUser", "User_ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AddUser", "User_name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AddUser", "Password", nullptr));
        pushButton_7->setText(QString());
        lineEdit_User_name_2->setPlaceholderText(QCoreApplication::translate("AddUser", "Username *", nullptr));
        lineEdit_User_Password_2->setPlaceholderText(QCoreApplication::translate("AddUser", "Password *", nullptr));
        btn_Insert_User_2->setText(QCoreApplication::translate("AddUser", " Submit", nullptr));
        btn_Reset_User_2->setText(QCoreApplication::translate("AddUser", "Reset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Admin), QCoreApplication::translate("AddUser", "Adminstrator", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AddUser", "User_ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AddUser", "User_name", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AddUser", "Password", nullptr));
        btn_View_User->setText(QCoreApplication::translate("AddUser", "View Record", nullptr));
        btn_Update_User->setText(QCoreApplication::translate("AddUser", "Update", nullptr));
        lineEdit_User_ID->setPlaceholderText(QCoreApplication::translate("AddUser", "Enter ID *", nullptr));
        btn_Delete_User->setText(QCoreApplication::translate("AddUser", "Delete", nullptr));
        pushButton_6->setText(QString());
        lineEdit_User_name->setPlaceholderText(QCoreApplication::translate("AddUser", "Username *", nullptr));
        lineEdit_User_Password->setPlaceholderText(QCoreApplication::translate("AddUser", "Password *", nullptr));
        btn_Insert_User->setText(QCoreApplication::translate("AddUser", " Submit", nullptr));
        btn_Reset_User->setText(QCoreApplication::translate("AddUser", "Reset", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Students), QCoreApplication::translate("AddUser", "Students", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H

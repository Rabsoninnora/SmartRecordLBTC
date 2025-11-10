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
    QLineEdit *lineEdit_username_admin;
    QLineEdit *lineEdit_Admin_Password;
    QPushButton *btn_Insert_admin;
    QPushButton *btn_Reset_admin;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QWidget *HOS;
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
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName("AddUser");
        AddUser->resize(1154, 710);
        AddUser->setStyleSheet(QString::fromUtf8("background-color: #3a3f5c;"));
        btn_adduser_back = new QPushButton(AddUser);
        btn_adduser_back->setObjectName("btn_adduser_back");
        btn_adduser_back->setGeometry(QRect(1050, 30, 91, 41));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentRevert));
        btn_adduser_back->setIcon(icon);
        tabWidget = new QTabWidget(AddUser);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(130, 140, 941, 461));
        tabWidget->setStyleSheet(QString::fromUtf8(" background-color: #1e1e2f;"));
        Admin = new QWidget();
        Admin->setObjectName("Admin");
        btn_View_admin = new QPushButton(Admin);
        btn_View_admin->setObjectName("btn_View_admin");
        btn_View_admin->setGeometry(QRect(420, 340, 121, 41));
        btn_View_admin->setStyleSheet(QString::fromUtf8("   \n"
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
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditSelectAll));
        btn_View_admin->setIcon(icon1);
        btn_Update_admin = new QPushButton(Admin);
        btn_Update_admin->setObjectName("btn_Update_admin");
        btn_Update_admin->setGeometry(QRect(540, 340, 111, 41));
        btn_Update_admin->setStyleSheet(QString::fromUtf8("   \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px; \n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        btn_Update_admin->setIcon(icon2);
        lineEdit_Admin_ID = new QLineEdit(Admin);
        lineEdit_Admin_ID->setObjectName("lineEdit_Admin_ID");
        lineEdit_Admin_ID->setGeometry(QRect(650, 340, 151, 41));
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
        btn_Delete_admin->setGeometry(QRect(810, 340, 101, 41));
        btn_Delete_admin->setStyleSheet(QString::fromUtf8(" \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:1px solid red;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px; \n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" \n"
" "));
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("edit-delete")));
        btn_Delete_admin->setIcon(icon3);
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
        tableWidget_2->setGeometry(QRect(400, 80, 531, 231));
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
        pushButton_7->setGeometry(QRect(220, 100, 81, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:0px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                    background-color: #3a3f5c;\n"
"                      \n"
"                    font: 600 11pt ;\n"
"\n"
"}\n"
"\n"
"\n"
"    "));
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        pushButton_7->setIcon(icon4);
        pushButton_7->setIconSize(QSize(45, 45));
        lineEdit_username_admin = new QLineEdit(Admin);
        lineEdit_username_admin->setObjectName("lineEdit_username_admin");
        lineEdit_username_admin->setGeometry(QRect(150, 200, 221, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        lineEdit_username_admin->setFont(font);
        lineEdit_username_admin->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
"  border:3px solid gray;\n"
"  border-radius: 10px;\n"
"  padding: 6px 6px;\n"
"  background: rgb(255, 255, 255);\n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"}"));
        lineEdit_Admin_Password = new QLineEdit(Admin);
        lineEdit_Admin_Password->setObjectName("lineEdit_Admin_Password");
        lineEdit_Admin_Password->setGeometry(QRect(150, 260, 221, 41));
        lineEdit_Admin_Password->setFont(font);
        lineEdit_Admin_Password->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
"  border:3px solid gray;\n"
"  border-radius: 10px;\n"
"  padding: 6px 6px;\n"
"  background: rgb(255, 255, 255);\n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"}"));
        btn_Insert_admin = new QPushButton(Admin);
        btn_Insert_admin->setObjectName("btn_Insert_admin");
        btn_Insert_admin->setGeometry(QRect(150, 310, 91, 41));
        btn_Insert_admin->setStyleSheet(QString::fromUtf8("  \n"
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
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSaveAs));
        btn_Insert_admin->setIcon(icon5);
        btn_Reset_admin = new QPushButton(Admin);
        btn_Reset_admin->setObjectName("btn_Reset_admin");
        btn_Reset_admin->setGeometry(QRect(270, 310, 101, 41));
        btn_Reset_admin->setStyleSheet(QString::fromUtf8("  \n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:2px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;  \n"
"                    background-color: rgb(255, 267, 245);\n"
"                    font: 500 11pt ;\n"
"                   \n"
"\n"
"}\n"
"\n"
" "));
        btn_Reset_admin->setIcon(icon);
        pushButton_2 = new QPushButton(Admin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(399, 320, 531, 101));
        pushButton_4 = new QPushButton(Admin);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(399, 30, 531, 41));
        tabWidget->addTab(Admin, QString());
        tableWidget_2->raise();
        pushButton_7->raise();
        lineEdit_username_admin->raise();
        lineEdit_Admin_Password->raise();
        btn_Insert_admin->raise();
        btn_Reset_admin->raise();
        pushButton_2->raise();
        btn_Delete_admin->raise();
        lineEdit_Admin_ID->raise();
        btn_Update_admin->raise();
        btn_View_admin->raise();
        pushButton_4->raise();
        HOS = new QWidget();
        HOS->setObjectName("HOS");
        tableWidget = new QTableWidget(HOS);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(400, 80, 531, 231));
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
        btn_View_User = new QPushButton(HOS);
        btn_View_User->setObjectName("btn_View_User");
        btn_View_User->setGeometry(QRect(420, 340, 121, 41));
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
        btn_View_User->setIcon(icon1);
        btn_Update_User = new QPushButton(HOS);
        btn_Update_User->setObjectName("btn_Update_User");
        btn_Update_User->setGeometry(QRect(540, 340, 111, 41));
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
        btn_Update_User->setIcon(icon2);
        lineEdit_User_ID = new QLineEdit(HOS);
        lineEdit_User_ID->setObjectName("lineEdit_User_ID");
        lineEdit_User_ID->setGeometry(QRect(650, 340, 151, 41));
        lineEdit_User_ID->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
"  border:3px solid red;\n"
"  border-radius: 10px;\n"
"  padding: 6px 6px;\n"
"  background: rgb(255, 255, 255);\n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"}"));
        btn_Delete_User = new QPushButton(HOS);
        btn_Delete_User->setObjectName("btn_Delete_User");
        btn_Delete_User->setGeometry(QRect(810, 340, 101, 41));
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
        pushButton_6 = new QPushButton(HOS);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(220, 100, 81, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"                    color: rgb(255, 255, 255);\n"
"                    border:0px solid green;\n"
"                    border-radius: 8px;\n"
"                    padding: 0 8px;\n"
"                   \n"
"                    background-color: #3a3f5c;\n"
"                 \n"
"                    font: 600 11pt ;\n"
"\n"
"}\n"
"\n"
"\n"
"    "));
        pushButton_6->setIcon(icon4);
        pushButton_6->setIconSize(QSize(45, 45));
        lineEdit_User_name = new QLineEdit(HOS);
        lineEdit_User_name->setObjectName("lineEdit_User_name");
        lineEdit_User_name->setGeometry(QRect(150, 200, 221, 41));
        lineEdit_User_name->setFont(font);
        lineEdit_User_name->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
"  border:3px solid gray;\n"
"  border-radius: 10px;\n"
"  padding: 6px 6px;\n"
"  background: rgb(255, 255, 255);\n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"}"));
        lineEdit_User_Password = new QLineEdit(HOS);
        lineEdit_User_Password->setObjectName("lineEdit_User_Password");
        lineEdit_User_Password->setGeometry(QRect(150, 260, 221, 41));
        lineEdit_User_Password->setFont(font);
        lineEdit_User_Password->setStyleSheet(QString::fromUtf8("  QLineEdit {\n"
"  border:3px solid gray;\n"
"  border-radius: 10px;\n"
"  padding: 6px 6px;\n"
"  background: rgb(255, 255, 255);\n"
"  font: 700 12pt ;\n"
"  color: rgb(0, 0, 0);;\n"
"}"));
        btn_Insert_User = new QPushButton(HOS);
        btn_Insert_User->setObjectName("btn_Insert_User");
        btn_Insert_User->setGeometry(QRect(150, 310, 91, 41));
        btn_Insert_User->setStyleSheet(QString::fromUtf8("   \n"
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
        btn_Insert_User->setIcon(icon5);
        btn_Reset_User = new QPushButton(HOS);
        btn_Reset_User->setObjectName("btn_Reset_User");
        btn_Reset_User->setGeometry(QRect(270, 310, 101, 41));
        btn_Reset_User->setStyleSheet(QString::fromUtf8("   \n"
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
        btn_Reset_User->setIcon(icon);
        pushButton = new QPushButton(HOS);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(399, 320, 531, 101));
        pushButton_3 = new QPushButton(HOS);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(399, 30, 531, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("  background-color: rgb(230, 240, 255); /* Soft blue background for readability */"));
        tabWidget->addTab(HOS, QString());
        tableWidget->raise();
        pushButton_6->raise();
        lineEdit_User_name->raise();
        lineEdit_User_Password->raise();
        btn_Insert_User->raise();
        btn_Reset_User->raise();
        pushButton->raise();
        btn_Delete_User->raise();
        lineEdit_User_ID->raise();
        btn_Update_User->raise();
        btn_View_User->raise();
        pushButton_3->raise();

        retranslateUi(AddUser);

        tabWidget->setCurrentIndex(0);


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
        lineEdit_username_admin->setPlaceholderText(QCoreApplication::translate("AddUser", "Username *", nullptr));
        lineEdit_Admin_Password->setPlaceholderText(QCoreApplication::translate("AddUser", "Password *", nullptr));
        btn_Insert_admin->setText(QCoreApplication::translate("AddUser", " Submit", nullptr));
        btn_Reset_admin->setText(QCoreApplication::translate("AddUser", "Reset", nullptr));
        pushButton_2->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("AddUser", "ADMIN", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Admin), QCoreApplication::translate("AddUser", "ADMINSTRATOR", nullptr));
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
        pushButton->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("AddUser", "HEAD OF SECTIONS", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(HOS), QCoreApplication::translate("AddUser", "HEAD OF SECTION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H

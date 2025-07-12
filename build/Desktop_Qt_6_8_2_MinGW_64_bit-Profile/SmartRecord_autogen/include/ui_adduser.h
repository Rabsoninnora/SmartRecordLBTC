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
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUser
{
public:
    QPushButton *btn_adduser_back;
    QToolBox *toolBox;
    QWidget *page_3;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton_11;
    QPushButton *btn_Delete_admin;
    QLineEdit *lineEdit_Admin_ID;
    QPushButton *btn_Update_admin;
    QPushButton *btn_View_admin;
    QPushButton *pushButton_12;
    QLineEdit *lineEdit__username_admin;
    QLineEdit *lineEdit_admin_password;
    QPushButton *btn_Insert_admin;
    QPushButton *btn_Reset_admin;
    QWidget *page_4;
    QTableWidget *tableWidget;
    QPushButton *pushButton_7;
    QPushButton *btn_Delete_User;
    QLineEdit *lineEdit_User_ID;
    QPushButton *btn_Update_User;
    QPushButton *btn_View_User;
    QPushButton *btn_Insert_User;
    QPushButton *btn_Reset_User;
    QPushButton *pushButton;
    QLineEdit *lineEdit_User_name;
    QLineEdit *lineEdit_User_Password;

    void setupUi(QDialog *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName("AddUser");
        AddUser->resize(1019, 710);
        btn_adduser_back = new QPushButton(AddUser);
        btn_adduser_back->setObjectName("btn_adduser_back");
        btn_adduser_back->setGeometry(QRect(930, 10, 61, 21));
        toolBox = new QToolBox(AddUser);
        toolBox->setObjectName("toolBox");
        toolBox->setGeometry(QRect(10, 90, 1019, 551));
        toolBox->setStyleSheet(QString::fromUtf8(""));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setGeometry(QRect(0, 0, 1019, 503));
        tableWidget_2 = new QTableWidget(page_3);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(450, 140, 481, 341));
        pushButton_11 = new QPushButton(page_3);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(450, 100, 481, 31));
        btn_Delete_admin = new QPushButton(page_3);
        btn_Delete_admin->setObjectName("btn_Delete_admin");
        btn_Delete_admin->setGeometry(QRect(460, 20, 91, 31));
        lineEdit_Admin_ID = new QLineEdit(page_3);
        lineEdit_Admin_ID->setObjectName("lineEdit_Admin_ID");
        lineEdit_Admin_ID->setGeometry(QRect(280, 20, 161, 31));
        btn_Update_admin = new QPushButton(page_3);
        btn_Update_admin->setObjectName("btn_Update_admin");
        btn_Update_admin->setGeometry(QRect(150, 20, 111, 31));
        btn_View_admin = new QPushButton(page_3);
        btn_View_admin->setObjectName("btn_View_admin");
        btn_View_admin->setGeometry(QRect(20, 20, 111, 31));
        pushButton_12 = new QPushButton(page_3);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(140, 160, 91, 71));
        lineEdit__username_admin = new QLineEdit(page_3);
        lineEdit__username_admin->setObjectName("lineEdit__username_admin");
        lineEdit__username_admin->setGeometry(QRect(70, 250, 241, 41));
        lineEdit_admin_password = new QLineEdit(page_3);
        lineEdit_admin_password->setObjectName("lineEdit_admin_password");
        lineEdit_admin_password->setGeometry(QRect(70, 320, 241, 41));
        btn_Insert_admin = new QPushButton(page_3);
        btn_Insert_admin->setObjectName("btn_Insert_admin");
        btn_Insert_admin->setGeometry(QRect(70, 380, 71, 41));
        btn_Reset_admin = new QPushButton(page_3);
        btn_Reset_admin->setObjectName("btn_Reset_admin");
        btn_Reset_admin->setGeometry(QRect(230, 380, 71, 41));
        toolBox->addItem(page_3, QString::fromUtf8("Page 1"));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        page_4->setGeometry(QRect(0, 0, 1019, 503));
        tableWidget = new QTableWidget(page_4);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(450, 140, 481, 341));
        pushButton_7 = new QPushButton(page_4);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(450, 90, 481, 31));
        btn_Delete_User = new QPushButton(page_4);
        btn_Delete_User->setObjectName("btn_Delete_User");
        btn_Delete_User->setGeometry(QRect(460, 20, 91, 31));
        lineEdit_User_ID = new QLineEdit(page_4);
        lineEdit_User_ID->setObjectName("lineEdit_User_ID");
        lineEdit_User_ID->setGeometry(QRect(280, 20, 161, 31));
        btn_Update_User = new QPushButton(page_4);
        btn_Update_User->setObjectName("btn_Update_User");
        btn_Update_User->setGeometry(QRect(150, 20, 111, 31));
        btn_View_User = new QPushButton(page_4);
        btn_View_User->setObjectName("btn_View_User");
        btn_View_User->setGeometry(QRect(20, 20, 111, 31));
        btn_Insert_User = new QPushButton(page_4);
        btn_Insert_User->setObjectName("btn_Insert_User");
        btn_Insert_User->setGeometry(QRect(70, 380, 71, 41));
        btn_Reset_User = new QPushButton(page_4);
        btn_Reset_User->setObjectName("btn_Reset_User");
        btn_Reset_User->setGeometry(QRect(230, 380, 71, 41));
        pushButton = new QPushButton(page_4);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 160, 91, 71));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("user-available")));
        pushButton->setIcon(icon);
        lineEdit_User_name = new QLineEdit(page_4);
        lineEdit_User_name->setObjectName("lineEdit_User_name");
        lineEdit_User_name->setGeometry(QRect(70, 250, 241, 41));
        lineEdit_User_Password = new QLineEdit(page_4);
        lineEdit_User_Password->setObjectName("lineEdit_User_Password");
        lineEdit_User_Password->setGeometry(QRect(70, 320, 241, 41));
        toolBox->addItem(page_4, QString::fromUtf8("Page 2"));

        retranslateUi(AddUser);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QDialog *AddUser)
    {
        AddUser->setWindowTitle(QCoreApplication::translate("AddUser", "Dialog", nullptr));
        btn_adduser_back->setText(QCoreApplication::translate("AddUser", "Back", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AddUser", "User_ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AddUser", "Password", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AddUser", "User_name", nullptr));
        pushButton_11->setText(QCoreApplication::translate("AddUser", "Admin login details", nullptr));
        btn_Delete_admin->setText(QCoreApplication::translate("AddUser", "Delete", nullptr));
        btn_Update_admin->setText(QCoreApplication::translate("AddUser", "Update", nullptr));
        btn_View_admin->setText(QCoreApplication::translate("AddUser", "View Record", nullptr));
        pushButton_12->setText(QString());
        btn_Insert_admin->setText(QCoreApplication::translate("AddUser", "Insert", nullptr));
        btn_Reset_admin->setText(QCoreApplication::translate("AddUser", "Reset", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("AddUser", "Page 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AddUser", "User_ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("AddUser", "Password", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("AddUser", "User_name", nullptr));
        pushButton_7->setText(QCoreApplication::translate("AddUser", "Student login details", nullptr));
        btn_Delete_User->setText(QCoreApplication::translate("AddUser", "Delete", nullptr));
        btn_Update_User->setText(QCoreApplication::translate("AddUser", "Update", nullptr));
        btn_View_User->setText(QCoreApplication::translate("AddUser", "View Record", nullptr));
        btn_Insert_User->setText(QCoreApplication::translate("AddUser", "Insert", nullptr));
        btn_Reset_User->setText(QCoreApplication::translate("AddUser", "Reset", nullptr));
        pushButton->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_4), QCoreApplication::translate("AddUser", "Page 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H

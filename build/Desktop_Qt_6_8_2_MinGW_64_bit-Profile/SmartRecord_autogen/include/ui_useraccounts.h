/********************************************************************************
** Form generated from reading UI file 'useraccounts.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERACCOUNTS_H
#define UI_USERACCOUNTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_UserAccounts
{
public:

    void setupUi(QDialog *UserAccounts)
    {
        if (UserAccounts->objectName().isEmpty())
            UserAccounts->setObjectName("UserAccounts");
        UserAccounts->resize(400, 300);

        retranslateUi(UserAccounts);

        QMetaObject::connectSlotsByName(UserAccounts);
    } // setupUi

    void retranslateUi(QDialog *UserAccounts)
    {
        UserAccounts->setWindowTitle(QCoreApplication::translate("UserAccounts", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserAccounts: public Ui_UserAccounts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERACCOUNTS_H

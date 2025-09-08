/********************************************************************************
** Form generated from reading UI file 'hosdashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSDASHBOARD_H
#define UI_HOSDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_HOSDashboard
{
public:

    void setupUi(QDialog *HOSDashboard)
    {
        if (HOSDashboard->objectName().isEmpty())
            HOSDashboard->setObjectName("HOSDashboard");
        HOSDashboard->resize(512, 390);

        retranslateUi(HOSDashboard);

        QMetaObject::connectSlotsByName(HOSDashboard);
    } // setupUi

    void retranslateUi(QDialog *HOSDashboard)
    {
        HOSDashboard->setWindowTitle(QCoreApplication::translate("HOSDashboard", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HOSDashboard: public Ui_HOSDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSDASHBOARD_H

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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_StudentRegistration
{
public:

    void setupUi(QDialog *StudentRegistration)
    {
        if (StudentRegistration->objectName().isEmpty())
            StudentRegistration->setObjectName("StudentRegistration");
        StudentRegistration->resize(400, 300);

        retranslateUi(StudentRegistration);

        QMetaObject::connectSlotsByName(StudentRegistration);
    } // setupUi

    void retranslateUi(QDialog *StudentRegistration)
    {
        StudentRegistration->setWindowTitle(QCoreApplication::translate("StudentRegistration", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentRegistration: public Ui_StudentRegistration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTREGISTRATION_H

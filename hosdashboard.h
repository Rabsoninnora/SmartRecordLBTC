#ifndef HOSDASHBOARD_H
#define HOSDASHBOARD_H

#include <QDialog>
#include <QListWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QTableWidget>
#include <QFormLayout>
#include <QLineEdit>
#include <QSpinBox>
#include <QCheckBox>
#include <QMessageBox>
#include <QHeaderView>
#include <QApplication>
#include "studentregistration.h"
// Include AddUser  if you have it for HOSDashboard as well
#include "adduser.h"

namespace Ui {
class HOSDashboard;
}

class HOSDashboard : public QDialog
{
    Q_OBJECT

public:
    explicit HOSDashboard(QWidget *parent = nullptr);
    ~HOSDashboard();

private slots:
    void switchDepartment();
    void showStudentManagement();
    void showCourseManagement();
    void showReports();
    void showSettings();
    void viewStudents();
    void registerStudent();
    void manageData();
    void logout();

private:
    Ui::HOSDashboard *ui;
    StudentRegistration *ptrStudentRegistration;
    QListWidget *departmentList;
    QStackedWidget *mainContent;
    AddUser  *ptrAddUser ;

    void setupUI();
    void setupConnections();
    QWidget* createStudentManagementWidget();
    QWidget* createCourseManagementWidget();
    QWidget* createReportWidget();
    QWidget* createSettingsWidget();
    QString loadStylesheet();
    QPushButton* createNavButton(const QString &text, const QString &objectName);
};

#endif // HOSDASHBOARD_H

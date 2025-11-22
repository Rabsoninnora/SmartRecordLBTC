#ifndef DASHBOARD_H
#define DASHBOARD_H

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
#include "adduser.h"
#include "registerlecturer.h"
#include "viewlecturer.h"
#include "courses.h"
#include "datasetstudents.h"
#include "datasetcourses.h"

namespace Ui {
class Dashboard;
}

class Dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void switchDepartment();
    void showStudentManagement();
    void viewStudents();
    void viewCourses();
    void manageData();
    void AddCourses();

private:
    Ui::Dashboard *ui;
    QListWidget *departmentList;
    QStackedWidget *mainContent;

    AddUser *ptrAddUser;
    RegisterLecturer *ptrRegisterLecturer;
    ViewLecturer *ptrViewLecturer;
    Courses *ptrCourses;
    DataSetStudents *ptrDataSetStudents;
    DataSetCourses *ptrDataSetCourses;

    void setupUI();
    void setupConnections();
    QWidget* createStudentManagementWidget();

    QString loadStylesheet();
    QPushButton* createNavButton(const QString &text, const QString &objectName);
};

#endif // DASHBOARD_H

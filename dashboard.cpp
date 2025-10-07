#include "dashboard.h"
#include "ui_dashboard.h"

Dashboard::Dashboard(QWidget *parent)
    : QDialog(parent), ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    this->showFullScreen();
    this->setStyleSheet(loadStylesheet());

    departmentList = new QListWidget(this);
    mainContent = new QStackedWidget(this);
    ptrAddUser = new AddUser();
    ptrRegisterLecturer = new RegisterLecturer();
    ptrViewLecturer = new ViewLecturer();
    ptrCourses = new Courses();

    setupUI();
    setupConnections();

    QStringList departments = {
        "Business", "Hospitality", "Engineering","Cosmotology"
    };

    for (const QString &dept : departments) {
        departmentList->addItem(dept);
    }

    if (departmentList->count() > 0) {
        departmentList->setCurrentRow(0);
    }
}

Dashboard::~Dashboard()
{
    delete ui;
    delete ptrAddUser;
    delete ptrRegisterLecturer;
    delete ptrViewLecturer;
    delete ptrCourses;
}

void Dashboard::setupUI()
{
    QVBoxLayout *outerLayout = new QVBoxLayout(this);

    // Top right buttons
    QHBoxLayout *topButtons = new QHBoxLayout();
    topButtons->addStretch();

    QPushButton *minimizeBtn = new QPushButton("_", this);
    QPushButton *closeBtn = new QPushButton("logout",this);

 ////////////////////////////////////////////////////////////////////////////////////////////////////////////

 ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    connect(minimizeBtn, &QPushButton::clicked, this, &Dashboard::showMinimized);
    connect(closeBtn, &QPushButton::clicked, this, &Dashboard::close);

    topButtons->addWidget(minimizeBtn);
    topButtons->addWidget(closeBtn);
    outerLayout->addLayout(topButtons);

    QHBoxLayout *mainLayout = new QHBoxLayout();

    QWidget *leftPanel = new QWidget(this);
    leftPanel->setFixedWidth(250);
    QVBoxLayout *leftLayout = new QVBoxLayout(leftPanel);

    QLabel *titleLabel = new QLabel("DASHBOARD", this);
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-weight: bold; font-size: 18px;");

    QLabel *deptLabel = new QLabel("Departments", this);
    deptLabel->setStyleSheet("font-size: 14px; background-color: rgb(0, 81, 121); color: white; border:1px; border-radius: 5px; padding: 4px;");

    // Navigation buttons
    QPushButton *logoutBtn = createNavButton("Add Course", "btnLogout");
    QPushButton *coursesBtn = createNavButton("View Courses", "btnCourses");
    QPushButton *registerStudentBtn = createNavButton("Register Lecturer", "btnRegisterStudent");
    QPushButton *viewStudentsBtn = createNavButton("View Lecturer", "btnViewStudents");
    QPushButton *studentsBtn = createNavButton("Students", "btnStudents");

    QPushButton *settingsBtn = createNavButton("Settings", "btnSettings");
    QPushButton *manageDataBtn = createNavButton("Add User", "btnManageData");

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    leftLayout->addWidget(titleLabel);
    leftLayout->addWidget(deptLabel);
    leftLayout->addWidget(departmentList);
    leftLayout->addSpacing(10);
    leftLayout->addWidget(studentsBtn);
    leftLayout->addWidget(coursesBtn);


    leftLayout->addWidget(viewStudentsBtn);
    leftLayout->addWidget(registerStudentBtn);
    leftLayout->addWidget(manageDataBtn);
    leftLayout->addWidget(logoutBtn);
    leftLayout->addStretch();

    QWidget *rightPanel = new QWidget(this);
    QVBoxLayout *rightLayout = new QVBoxLayout(rightPanel);
    rightLayout->addWidget(mainContent);

    mainContent->addWidget(createStudentManagementWidget());
    mainContent->addWidget(createCourseManagementWidget());
    mainContent->addWidget(createReportWidget());


    mainLayout->addWidget(leftPanel);
    mainLayout->addWidget(rightPanel, 1);
    outerLayout->addLayout(mainLayout);
    this->setLayout(outerLayout);


}

void Dashboard::setupConnections()
{
    connect(departmentList, &QListWidget::currentRowChanged, this, &Dashboard::switchDepartment);
    connect(findChild<QPushButton*>("btnStudents"), &QPushButton::clicked, this, &Dashboard::showStudentManagement);
    connect(findChild<QPushButton*>("btnCourses"), &QPushButton::clicked, this, &Dashboard::showCourseManagement);
    connect(findChild<QPushButton*>("btnReports"), &QPushButton::clicked, this, &Dashboard::showReports);

    connect(findChild<QPushButton*>("btnViewStudents"), &QPushButton::clicked, this, &Dashboard::viewStudents);
    connect(findChild<QPushButton*>("btnRegisterStudent"), &QPushButton::clicked, this, &Dashboard::registerStudent);
    connect(findChild<QPushButton*>("btnManageData"), &QPushButton::clicked, this, &Dashboard::manageData);
    connect(findChild<QPushButton*>("btnLogout"), &QPushButton::clicked, this, &Dashboard::logout);
}

void Dashboard::switchDepartment() {}

void Dashboard::showStudentManagement() { mainContent->setCurrentIndex(0); }
void Dashboard::showCourseManagement() { mainContent->setCurrentIndex(1); }
void Dashboard::showReports() { mainContent->setCurrentIndex(2); }


void Dashboard::viewStudents() {
    /*
 Show all Lecturer's show database
*/
    ptrViewLecturer->show();
}

void Dashboard::registerStudent() {
    ptrRegisterLecturer->show();

}

void Dashboard::manageData() {
    /*
Install admin previleges
*/
    ptrAddUser->show();
}

void Dashboard::logout() {
    ptrCourses->show();
}

QPushButton* Dashboard::createNavButton(const QString &text, const QString &objectName) {
    QPushButton *btn = new QPushButton(text, this);
    btn->setObjectName(objectName);
    btn->setMinimumHeight(40);
    return btn;
}

QString Dashboard::loadStylesheet() {
    return R"(
        QWidget { background-color: #1e1e2f; font-family: 'Segoe UI'; font-size: 14px; color: #f0f0f0; }
        QListWidget { background-color: #2c2f48; border-radius: 5px; color: #ffffff; }
        QPushButton {
            background-color: #3a3f5c; color: #ffffff; border-radius: 5px;
            padding: 10px 20px; font-weight: bold;
        }
        QPushButton:hover { background-color: #4a4f70; }
        QPushButton:pressed { background-color: #3498db; }
        QLabel { color: #f0f0f0; }
        QTableWidget, QLineEdit, QSpinBox {
            background-color: #ffffff; color: #000000;
            border: 1px solid #ccc; border-radius: 4px;
        }
        QCheckBox { color: #f0f0f0; }
    )";
}

QWidget* Dashboard::createStudentManagementWidget()
{
    QWidget *widget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QLabel *title1 = new QLabel("Lusaka Business & Technical College Students", widget);
    title1->setAlignment(Qt::AlignCenter);
    title1->setStyleSheet("font-weight: bold; font-size: 24px; margin-bottom: 20px;");

    // Add Refresh button
    QPushButton *refreshBtn1 = new QPushButton("Refresh", widget);
    refreshBtn1->setStyleSheet("QPushButton { background-color: #4CAF50; color: white; font-weight: bold; padding: 10px; border-radius: 5px; } "
                              "QPushButton:hover { background-color: #45a049; } "
                              "QPushButton:pressed { background-color: #3d8b40; }");
    refreshBtn1->setFixedHeight(40);  // Optional: Set a fixed height for better appearance

    QTableWidget *studentTable = new QTableWidget(widget);
    studentTable->setColumnCount(6);  // Updated to match insertions
    studentTable->setHorizontalHeaderLabels({
        "First Name", "Middle Name", "Last Name", "Program",
        "Student ID", "Year Enrolled","Duration","Status","Status","Phone","Email","Next OF KIN"  // Added missing headers
    });

    // Enable manual resizing (dragging) for columns
    studentTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);

    // Enable manual resizing (dragging) for rows
    studentTable->verticalHeader()->setSectionResizeMode(QHeaderView::Interactive);

    // Optional: Hide row numbers if not needed
    // courseTable->verticalHeader()->setVisible(false);

    // Improve data visibility
    studentTable->setWordWrap(true);  // Wrap long text
    studentTable->setAlternatingRowColors(true);  // Better readability
    studentTable->setEditTriggers(QAbstractItemView::NoEditTriggers);  // Keep non-editable

    // Initially resize columns to fit content (you can set per-column if needed)
    studentTable->resizeColumnsToContents();

    // Load initial data
    loadStudentData(studentTable);

    // Connect the refresh button to reload data
    connect(refreshBtn1, &QPushButton::clicked, [this, studentTable]() {loadStudentData(studentTable);});

    // Add widgets to layout: title, refresh button, then table
    layout->addWidget(title1);
    layout->addWidget(refreshBtn1, 0, Qt::AlignCenter);  // Center the button horizontally
    layout->addWidget(studentTable);

    // Optional: Add some spacing
    layout->addStretch();  // Push table to top if needed, or remove for full height

    return widget;
}

 void Dashboard::loadCourseData(QTableWidget* table)
 {
    // Clearing existing rows
    table->setRowCount(0);

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    if (query.exec("SELECT Department, CODE, CourseName, TotalSubjects, CourseDuration, SubjectList FROM CoursesTable")) {
        int row = 0;
        while (query.next()) {
            table->insertRow(row);
            table->setItem(row, 0, new QTableWidgetItem(query.value("Department").toString()));
            table->setItem(row, 1, new QTableWidgetItem(query.value("CODE").toString()));
            table->setItem(row, 2, new QTableWidgetItem(query.value("CourseName").toString()));
            table->setItem(row, 3, new QTableWidgetItem(query.value("TotalSubjects").toString()));
            table->setItem(row, 4, new QTableWidgetItem(query.value("CourseDuration").toString()));
            table->setItem(row, 5, new QTableWidgetItem(query.value("SubjectList").toString()));
            row++;
        }

        // After populating, re-adjust column widths if needed
        table->resizeColumnsToContents();
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to load course data: " + query.lastError().text());
    }
}

 void Dashboard::loadStudentData(QTableWidget* table1){
     // Clearing existing rows
     table1->setRowCount(0);

     QSqlQuery query(MyDB::getInstance()->getDBInstance());
     if (query.exec("SELECT Fname, Mname, Lname, Program, Stud_ID, Enro_year, Duration, Status, Phone, Email, NextOfkin_Phone FROM StudentsTable")) {
         int row = 0;
         while (query.next()) {
             table1->insertRow(row);
             table1->setItem(row, 0, new QTableWidgetItem(query.value("Fname").toString()));
             table1->setItem(row, 1, new QTableWidgetItem(query.value("Mname").toString()));
             table1->setItem(row, 2, new QTableWidgetItem(query.value("Lname").toString()));
             table1->setItem(row, 3, new QTableWidgetItem(query.value("Program").toString()));
             table1->setItem(row, 4, new QTableWidgetItem(query.value("Stud_ID").toString()));
             table1->setItem(row, 5, new QTableWidgetItem(query.value("Enro_year").toString()));
             table1->setItem(row, 6, new QTableWidgetItem(query.value("Duration").toString()));
             table1->setItem(row, 7, new QTableWidgetItem(query.value("Status").toString()));
             table1->setItem(row, 8, new QTableWidgetItem(query.value("Phone").toString()));
             table1->setItem(row, 9, new QTableWidgetItem(query.value("Email").toString()));
             table1->setItem(row, 10, new QTableWidgetItem(query.value("NextOfkin_Phone").toString()));
             row++;
         }

         // After populating, re-adjust column widths if needed
         table1->resizeColumnsToContents();
     } else {
         QMessageBox::critical(this, "Database Error", "Failed to load course data: " + query.lastError().text());
     }
 }

// Updated createCourseManagementWidget() function:
QWidget* Dashboard::createCourseManagementWidget()
{
    QWidget *widget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QLabel *title = new QLabel("Lusaka Business & Technical College Course List", widget);
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("font-weight: bold; font-size: 24px; margin-bottom: 20px;");

    // Add Refresh button
    QPushButton *refreshBtn = new QPushButton("Refresh", widget);
    refreshBtn->setStyleSheet("QPushButton { background-color: #4CAF50; color: white; font-weight: bold; padding: 10px; border-radius: 5px; } "
                              "QPushButton:hover { background-color: #45a049; } "
                              "QPushButton:pressed { background-color: #3d8b40; }");
    refreshBtn->setFixedHeight(40);  // Optional: Set a fixed height for better appearance

    QTableWidget *courseTable = new QTableWidget(widget);
    courseTable->setColumnCount(6);  // Updated to match insertions
    courseTable->setHorizontalHeaderLabels({
        "Department", "Code", "Course Name", "Total Subjects",
        "Course Duration", "Subjects List"  // Added missing headers
    });

    // Enable manual resizing (dragging) for columns
    courseTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);

    // Enable manual resizing (dragging) for rows
    courseTable->verticalHeader()->setSectionResizeMode(QHeaderView::Interactive);

    // Optional: Hide row numbers if not needed
    // courseTable->verticalHeader()->setVisible(false);

    // Improve data visibility
    courseTable->setWordWrap(true);  // Wrap long text
    courseTable->setAlternatingRowColors(true);  // Better readability
    courseTable->setEditTriggers(QAbstractItemView::NoEditTriggers);  // Keep non-editable

    // Initially resize columns to fit content (you can set per-column if needed)
    courseTable->resizeColumnsToContents();

    // Load initial data
    loadCourseData(courseTable);

    // Connect the refresh button to reload data
    connect(refreshBtn, &QPushButton::clicked, [this, courseTable]() {loadCourseData(courseTable);});

    // Add widgets to layout: title, refresh button, then table
    layout->addWidget(title);
    layout->addWidget(refreshBtn, 0, Qt::AlignCenter);  // Center the button horizontally
    layout->addWidget(courseTable);

    // Optional: Add some spacing
    layout->addStretch();  // Push table to top if needed, or remove for full height

    return widget;
}




QWidget* Dashboard::createReportWidget()
{
    QWidget *widget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QLabel *title = new QLabel("Reports & Analytics", widget);
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("font-weight: bold; font-size: 24px; margin-bottom: 20px;");

    QListWidget *reportList = new QListWidget(widget);
    reportList->addItem("Student Enrollment Statistics");
    reportList->addItem("Course Completion Rates");
    reportList->addItem("Department Performance");
    reportList->addItem("Graduation Project Analysis");
    reportList->addItem("Financial Reports");

    layout->addWidget(title);
    layout->addWidget(reportList);
    return widget;
}


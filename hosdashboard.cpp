#include "hosdashboard.h"
#include "ui_hosdashboard.h"

HOSDashboard::HOSDashboard(QWidget *parent)
    : QDialog(parent), ui(new Ui::HOSDashboard), ptrAddUser (nullptr)
{
    ui->setupUi(this);
    this->showFullScreen();
    this->setStyleSheet(loadStylesheet());

    departmentList = new QListWidget(this);
    mainContent = new QStackedWidget(this);
    ptrStudentRegistration = new StudentRegistration();
    ptrViewStudents = new ViewStudents();

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

HOSDashboard::~HOSDashboard()
{
    delete ui;
    delete ptrStudentRegistration;
    delete ptrViewStudents;
}

void HOSDashboard::setupUI()
{
    QVBoxLayout *outerLayout = new QVBoxLayout(this);

    // Top right buttons
    QHBoxLayout *topButtons = new QHBoxLayout();
    topButtons->addStretch();

    QPushButton *minimizeBtn = new QPushButton("_", this);
    QPushButton *closeBtn = new QPushButton("Logout", this);

    connect(minimizeBtn, &QPushButton::clicked, this, &HOSDashboard::showMinimized);
    connect(closeBtn, &QPushButton::clicked, this, &HOSDashboard::close);

    topButtons->addWidget(minimizeBtn);
    topButtons->addWidget(closeBtn);
    outerLayout->addLayout(topButtons);

    QHBoxLayout *mainLayout = new QHBoxLayout();

    QWidget *leftPanel = new QWidget(this);
    leftPanel->setFixedWidth(250);
    QVBoxLayout *leftLayout = new QVBoxLayout(leftPanel);

    QLabel *titleLabel = new QLabel("HOS DASHBOARD", this);
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-weight: bold; font-size: 18px;");

    QLabel *deptLabel = new QLabel("Departments", this);
    deptLabel->setStyleSheet("font-size: 14px; background-color: rgb(0, 81, 121); color: white; border:1px; border-radius: 5px; padding: 4px;");

    // Navigation buttons
    QPushButton *studentsBtn = createNavButton("Students", "btnStudents");
    QPushButton *coursesBtn = createNavButton("Courses", "btnCourses");
    QPushButton *reportsBtn = createNavButton("Reports", "btnReports");
    //QPushButton *settingsBtn = createNavButton("Settings", "btnSettings");
    QPushButton *viewStudentsBtn = createNavButton("View Students", "btnViewStudents");
    QPushButton *registerStudentBtn = createNavButton("Register Student", "btnRegisterStudent");
   // QPushButton *manageDataBtn = createNavButton("Add User", "btnManageData");
   // QPushButton *logoutBtn = createNavButton("Close App", "btnLogout");
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    leftLayout->addWidget(titleLabel);
    leftLayout->addWidget(deptLabel);
    leftLayout->addWidget(departmentList);
    leftLayout->addSpacing(10);
    leftLayout->addWidget(studentsBtn);
    leftLayout->addWidget(coursesBtn);
    leftLayout->addWidget(reportsBtn);

    leftLayout->addWidget(viewStudentsBtn);
    leftLayout->addWidget(registerStudentBtn);
    //leftLayout->addWidget(manageDataBtn);
    //leftLayout->addWidget(logoutBtn);
    leftLayout->addStretch();

    QWidget *rightPanel = new QWidget(this);
    QVBoxLayout *rightLayout = new QVBoxLayout(rightPanel);
    rightLayout->addWidget(mainContent);

    mainContent->addWidget(createStudentManagementWidget());
    mainContent->addWidget(createCourseManagementWidget());
    mainContent->addWidget(createReportWidget());
    mainContent->addWidget(createSettingsWidget());

    mainLayout->addWidget(leftPanel);
    mainLayout->addWidget(rightPanel, 1);
    outerLayout->addLayout(mainLayout);
    this->setLayout(outerLayout);


}

void HOSDashboard::setupConnections()
{
    connect(departmentList, &QListWidget::currentRowChanged, this, &HOSDashboard::switchDepartment);
    connect(findChild<QPushButton*>("btnStudents"), &QPushButton::clicked, this, &HOSDashboard::showStudentManagement);
    connect(findChild<QPushButton*>("btnCourses"), &QPushButton::clicked, this, &HOSDashboard::showCourseManagement);
    connect(findChild<QPushButton*>("btnReports"), &QPushButton::clicked, this, &HOSDashboard::showReports);

    connect(findChild<QPushButton*>("btnViewStudents"), &QPushButton::clicked, this, &HOSDashboard::viewStudents);
    connect(findChild<QPushButton*>("btnRegisterStudent"), &QPushButton::clicked, this, &HOSDashboard::registerStudent);

}

void HOSDashboard::switchDepartment()
{
    // TODO: Implement department switching logic if needed
}

void HOSDashboard::showStudentManagement()
{
    mainContent->setCurrentIndex(0);
}

void HOSDashboard::showCourseManagement()
{
    mainContent->setCurrentIndex(1);
}

void HOSDashboard::showReports()
{
    mainContent->setCurrentIndex(2);
}



void HOSDashboard::viewStudents()
{
    // TODO: Implement viewStudents functionality
    ptrViewStudents->show();
}

void HOSDashboard::registerStudent()
{
    // TODO: Implement registerStudent functionality

    ptrStudentRegistration->show();
}


void HOSDashboard::logout()
{
    this->close();
}

QPushButton* HOSDashboard::createNavButton(const QString &text, const QString &objectName)
{
    QPushButton *btn = new QPushButton(text, this);
    btn->setObjectName(objectName);
    btn->setMinimumHeight(40);
    return btn;
}

QString HOSDashboard::loadStylesheet()
{
    return R"(
        QWidget { font-size: 14px; background-color: rgb(0, 81, 121); color: white; border:1px; border-radius: 5px; padding: 4px; }
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

QWidget* HOSDashboard::createStudentManagementWidget()
{
    QWidget *widget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QLabel *title = new QLabel("Student Management", widget);
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("font-weight: bold; font-size: 24px; margin-bottom: 20px;");

    QTableWidget *studentTable = new QTableWidget(0, 5, widget);
    studentTable->setHorizontalHeaderLabels({"ID", "Name", "Program", "Year", "GPA/Score"});
    studentTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    studentTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    // Example data row
    studentTable->insertRow(0);
    studentTable->setItem(0, 0, new QTableWidgetItem("1001"));
    studentTable->setItem(0, 1, new QTableWidgetItem("Poniso"));
    studentTable->setItem(0, 2, new QTableWidgetItem("Computer Science"));
    studentTable->setItem(0, 3, new QTableWidgetItem("Senior"));
    studentTable->setItem(0, 4, new QTableWidgetItem("3.8"));

    layout->addWidget(title);
    layout->addWidget(studentTable);
    return widget;
}

QWidget* HOSDashboard::createCourseManagementWidget()
{
    QWidget *widget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QLabel *title = new QLabel("Course Management", widget);
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("font-weight: bold; font-size: 24px; margin-bottom: 20px;");

    QTableWidget *courseTable = new QTableWidget(0, 4, widget);
    courseTable->setHorizontalHeaderLabels({"Department", "Code", "Course Name", "Total Subject"});
    courseTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    courseTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    // Example data row
    courseTable->insertRow(0);
    courseTable->setItem(0, 0, new QTableWidgetItem("Business"));
    courseTable->setItem(0, 1, new QTableWidgetItem("DCS"));
    courseTable->setItem(0, 2, new QTableWidgetItem("Diploma in Computer Studies"));
    courseTable->setItem(0, 3, new QTableWidgetItem("5"));

    layout->addWidget(title);
    layout->addWidget(courseTable);
    return widget;
}

QWidget* HOSDashboard::createReportWidget()
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

QWidget* HOSDashboard::createSettingsWidget()
{
    QWidget *widget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QLabel *title = new QLabel("System Settings", widget);
    title->setAlignment(Qt::AlignCenter);
    title->setStyleSheet("font-weight: bold; font-size: 24px; margin-bottom: 20px;");

    QFormLayout *formLayout = new QFormLayout();

    QLineEdit *adminEmail = new QLineEdit(widget);
    adminEmail->setPlaceholderText("admin@lbtc.edu");
    formLayout->addRow("Admin Email:", adminEmail);

    QSpinBox *dataRetention = new QSpinBox(widget);
    dataRetention->setRange(1, 10);
    dataRetention->setValue(5);
    formLayout->addRow("Data Retention (years):", dataRetention);

    QCheckBox *backupEnabled = new QCheckBox("Enable Automatic Backups", widget);
    backupEnabled->setChecked(true);
    formLayout->addRow("", backupEnabled);

    QPushButton *saveBtn = new QPushButton("Save Settings", widget);
    saveBtn->setMinimumHeight(35);

    layout->addWidget(title);
    layout->addLayout(formLayout);
    layout->addWidget(saveBtn);
    layout->addStretch();

    return widget;
}

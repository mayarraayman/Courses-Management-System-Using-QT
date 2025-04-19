#include "enrollcourses.h"
#include "ui_enrollcourses.h"

EnrollCourses::EnrollCourses(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EnrollCourses)
{
    ui->setupUi(this);
}

EnrollCourses::~EnrollCourses()
{
    delete ui;
}

void EnrollCourses::on_btnSave_clicked()
{
    QString CoursesName = ui->txtCourseName->text();
    QString Description = ui->txtDescription->toPlainText();

    qDebug () << "Courses: " <<CoursesName <<"Course Descrition: " << Description;

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/NU/ED/Semester 2/Intro to Programming/Project/CoursesManagmentSystem/database/CoursesmanagmentSystem.db");

    if (QFile::exists("D:/NU/ED/Semester 2/Intro to Programming/Project/CoursesManagmentSystem/database/CoursesmanagmentSystem.db")){
        qDebug() << "Database file exist";
    }else{
        qDebug() << "Database file doesn't exist";
        return;
    }

    if (!database.open()){
        qDebug() << "Error: Unable to open Database";
        return;
    }else{
        qDebug() <<"Database opened successfully..";
    }
    QSqlQuery query(database);
    query.prepare("INSERT INTO Courses (CoursesName, Description) VALUES (:CoursesName, :Description)");
    query.bindValue(":CoursesName", CoursesName);
    query.bindValue(":Description", Description);

    if (!query.exec()) {
        qDebug() << "Query execution failed:" << query.lastError().text();
    } else {
        qDebug() << "Query executed successfully";
    }

    database.close();
}


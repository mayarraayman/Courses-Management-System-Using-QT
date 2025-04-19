#include "findcourses.h"
#include "ui_findcourses.h"

FindCourses::FindCourses(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FindCourses)
{
    ui->setupUi(this);
}

FindCourses::~FindCourses()
{
    delete ui;
    delete model;

}

void FindCourses::on_btnFindCourse_clicked()
{
    QString CourseName = ui->txtCourseName->text();

    qDebug() << "Courses: " << CourseName;

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("D:/NU/ED/Semester 2/Intro to Programming/Project/CoursesManagmentSystem/database/CoursesmanagmentSystem.db");

    if (QFile::exists("D:/NU/ED/Semester 2/Intro to Programming/Project/CoursesManagmentSystem/database/CoursesmanagmentSystem.db")) {
        qDebug() << "Database file exists";
    } else {
        qDebug() << "Database file doesn't exist";
        return;
    }

    if (!database.open()) {
        qDebug() << "Error: Unable to open Database";
        return;
    } else {
        qDebug() << "Database opened successfully.";
    }

    QSqlQuery query(database);
    query.prepare("SELECT * FROM Courses WHERE CoursesName LIKE '%" + CourseName + "%'");
    query.exec();
    qDebug() <<"Last error: " << query.lastQuery();
    qDebug() <<"Last error: " << query.lastError().text();

    if (model == NULL){
        model = new QSqlQueryModel();
    }

    model->setQuery(std::move(query));
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0, 200);
    ui->tableView->setColumnWidth(1, 200);
    ui->tableView->setColumnWidth(2, 200);

    database.close();
}

void FindCourses::on_tableview_customContextMenuRequested(const QPoint &pos)
{

}


#include "viewgrades.h"
#include "ui_viewgrades.h"

ViewGrades::ViewGrades(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ViewGrades)
{
    ui->setupUi(this);
}

ViewGrades::~ViewGrades()
{
    delete ui;
    delete model;

}

void ViewGrades::on_btnFind_clicked()
{
    QString AssigNumber = ui->txtAssigNumber->text();


    qDebug() << "Assignment: " << AssigNumber;

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
    query.prepare("SELECT * FROM Assignments WHERE AssigNumber LIKE '%" + AssigNumber + "%'");
    query.exec();
    qDebug() <<"Last error: " << query.lastQuery();
    qDebug() <<"Last error: " << query.lastError().text();

    if (model == NULL){
        model = new QSqlQueryModel();
    }

    model->setQuery(std::move(query));
    ui->tableView2->setModel(model);
    ui->tableView2->setColumnWidth(0, 200);
    ui->tableView2->setColumnWidth(1, 200);
    ui->tableView2->setColumnWidth(2, 200);
    database.close();

}


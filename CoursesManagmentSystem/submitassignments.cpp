#include "submitassignments.h"
#include "ui_submitassignments.h"

SubmitAssignments::SubmitAssignments(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SubmitAssignments)
{
    ui->setupUi(this);
}

SubmitAssignments::~SubmitAssignments()
{
    delete ui;
}

void SubmitAssignments::on_btnSave_clicked()
{
    QString AssigNumber = ui->txtAssigNumber->text();
    QString AssigAnswer = ui->txtAssig->toPlainText();


    qDebug() << "Assignment: " << AssigNumber;
    qDebug() << "Assignment Answer: " <<AssigAnswer;

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
    query.prepare("insert into Assignments (AssigNumber, AssigAnswers)" "Values('" + AssigNumber + "','" + AssigAnswer + "')");
    query.exec();
    qDebug() <<"Last error: " << query.lastQuery();
    qDebug() <<"Last error: " << query.lastError().text();

    database.close();
}


//Author: Cppbuzz.com
//Note: Users can download & modify this project as per their requirement

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrEnrollcourses = new EnrollCourses();
    ptrSubmitAssignments = new SubmitAssignments();
    ptrFindPackage = new FindCourses();
    ptrviewgrades = new ViewGrades();
    database = QSqlDatabase::addDatabase("QSQLITE", "DB1");
    database.setDatabaseName("C:/Users/singh/OneDrive/Documents/Projects/database/MyTourstManager.db");

    if(!database.open()){
        qDebug() << "Error: Unable to open database..";
    }
    else{
        qDebug() << "Database open successfully..";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    delete ptrEnrollcourses;
    delete ptrSubmitAssignments;
    delete ptrviewgrades;
    delete ptrFindPackage;
    database.close();
    QSqlDatabase::removeDatabase(database.connectionName());
    qDebug() << " ~MainWindow()";
}


void MainWindow::on_pushButton_clicked()
{
    ptrEnrollcourses->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ptrSubmitAssignments->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    ptrFindPackage->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    ptrviewgrades->show();
}

#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrEnrollCourses = new EnrollCourses();
    ptrSubmitAssignments = new SubmitAssignments();
    ptrViewGrades = new ViewGrades();
    ptrFindCourses = new FindCourses();

}

MainWindow::~MainWindow()
{
    delete ptrEnrollCourses;
    delete ptrSubmitAssignments;
    delete ptrViewGrades;
    delete ptrFindCourses;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ptrEnrollCourses->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ptrSubmitAssignments->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    ptrFindCourses->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    ptrViewGrades->show();
}


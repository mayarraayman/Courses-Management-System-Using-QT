//Author: Cppbuzz.com
//Note: Users can download & modify this project as per their requirement

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "enrollcourses.h"
#include "submitassignments.h"
#include "findcourses.h"
#include "viewgrades.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    EnrollCourses *ptrEnrollcourses;
    SubmitAssignments *ptrSubmitAssignments;
    FindCourses *ptrFindPackage;
    ViewGrades *ptrviewgrades;

    QSqlDatabase database;

};
#endif // MAINWINDOW_H

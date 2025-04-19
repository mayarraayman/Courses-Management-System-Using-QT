//Author: Cppbuzz.com
//Note: Users can download & modify this project as per their requirement

#ifndef ENROLLCOURSES_H
#define ENROLLCOURSES_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class EnrollCourses;
}

class EnrollCourses : public QDialog
{
    Q_OBJECT

public:
    explicit EnrollCourses(QWidget *parent = nullptr);
    ~EnrollCourses();

private slots:
    void on_btnSave_clicked();

    void on_btnReset_clicked();

private:
    Ui::EnrollCourses *ui;
    QSqlDatabase database;
};

#endif // ENROLLCOURSES_H

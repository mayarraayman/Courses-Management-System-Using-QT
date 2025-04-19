//Author: Cppbuzz.com
//Note: Users can download & modify this project as per their requirement

#ifndef FINDCOURSES_H
#define FINDCOURSES_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class FindCourses;
}

class FindCourses : public QDialog
{
    Q_OBJECT

public:
    explicit FindCourses(QWidget *parent = nullptr);
    ~FindCourses();

private slots:
    void on_btnFindPackage_clicked();

private:
    Ui::FindCourses *ui;
    QSqlQueryModel *model;
};

#endif // FINDCOURSES_H

//Author: Cppbuzz.com
//Note: Users can download & modify this project as per their requirement

#ifndef VIEWGRADES_H
#define VIEWGRADES_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class ViewGrades;
}

class ViewGrades : public QDialog
{
    Q_OBJECT

public:
    explicit ViewGrades(QWidget *parent = nullptr);
    ~ViewGrades();

private slots:
    void on_btnFind_clicked();

private:
    Ui::ViewGrades *ui;
     QSqlQueryModel *model;
};

#endif // VIEWGRADES_H

//Author: Cppbuzz.com
//Note: Users can download & modify this project as per their requirement

#include "viewgrades.h"
#include "ui_viewgrades.h"

ViewGrades::ViewGrades(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindTourist)
{
    ui->setupUi(this);
    model = NULL;
}

ViewGrades::~ViewGrades()
{
    qDebug() << "In ~FindTourist()";
    delete ui;
    delete model;
}

void ViewGrades::on_btnFind_clicked()
{
    QString packageName = ui->txtTourstfName->text();
    qDebug() << "Package Name : "<< packageName;
    QSqlDatabase database = QSqlDatabase::database("DB1");

    if(model == NULL)
        model = new QSqlQueryModel();

    model->setQuery("select * from Tourist where FirstName like '%" + packageName + "%'", database);
    ui->tableView->setModel(model);
    qDebug() << " after btnFind_clicked";
}


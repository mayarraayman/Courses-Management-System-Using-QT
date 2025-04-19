//Author: Cppbuzz.com
//Note: Users can download & modify this project as per their requirement

#include "findcourses.h"
#include "ui_findcourses.h"

FindCourses::FindCourses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindPackage)
{
    ui->setupUi(this);
}

FindCourses::~FindCourses()
{
    qDebug() << "~ Findpackage()";
    delete ui;
    delete model;
}

void FindCourses::on_btnFindPackage_clicked()
{
    QString packageName = ui->txtPackageName->text();
    qDebug() << "Package Name : "<< packageName;
    QSqlDatabase database = QSqlDatabase::database("DB1");

    if(model == NULL)
        model = new QSqlQueryModel();

    model->setQuery("select * from Package where PackageName like '%" + packageName + "%'", database);
    ui->tableView->setModel(model);
}


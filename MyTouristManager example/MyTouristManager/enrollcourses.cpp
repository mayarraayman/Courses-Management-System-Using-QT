//Author: Cppbuzz.com
//Note: Users can download & modify this project as per their requirement

#include "enrollcourses.h"
#include "ui_enrollcourses.h"

EnrollCourses::EnrollCourses(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnrollCourses)
{
    ui->setupUi(this);
}

AddPackageEnrollCourses::~AddPackageEnrollCourses()
{   qDebug() << "~ AddPackage()";
    delete ui;
}

void AddPackageEnrollCourses::on_btnSave_clicked()
{
    QString packageName = ui->txtPackageName->text();
    QString packageDescription = ui->txtDescription->toPlainText();
    QString amount = ui->txtAmount->text();
    qDebug() << "Package Name : "<< packageName <<" Package Description : "<<packageDescription << "Amount : "<<amount;
    QSqlDatabase database = QSqlDatabase::database("DB1");
    QSqlQuery query(database);
    query.prepare("insert into Package (PackageName, PackageDescription, Amount) values('" + packageName + "','" + packageDescription + "','" + amount + "')");
    query.exec();
    query.finish();query.clear();
    qDebug() << "Last error : "<< query.lastError().text();
    on_btnReset_clicked();
}


void AddPackageEnrollCourses::on_btnReset_clicked()
{
    ui->txtPackageName->clear();
    ui->txtDescription->clear();
    ui->txtAmount->clear();
}


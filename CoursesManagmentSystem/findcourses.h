#ifndef FINDCOURSES_H
#define FINDCOURSES_H

#include <QDialog>
#include "databaseheader.h"
#include <QSqlQueryModel>


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
    void on_btnFindCourse_clicked();
    void on_tableview_customContextMenuRequested(const QPoint &pos);

private:
    Ui::FindCourses *ui;
    QSqlQueryModel *model;
};

#endif // FINDCOURSES_H

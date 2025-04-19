#ifndef ENROLLCOURSES_H
#define ENROLLCOURSES_H
#include "databaseheader.h"
#include <QDialog>

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

private:
    Ui::EnrollCourses *ui;
};

#endif // ENROLLCOURSES_H

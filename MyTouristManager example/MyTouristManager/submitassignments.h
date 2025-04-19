//Author: Cppbuzz.com
//Note: Users can download & modify this project as per their requirement

#ifndef SUBMITASSIGNMENTS_H
#define SUBMITASSIGNMENTS_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class SubmitAssignments;
}

class SubmitAssignments : public QDialog
{
    Q_OBJECT

public:
    explicit SubmitAssignments(QWidget *parent = nullptr);
    ~SubmitAssignments();

private slots:
    void on_btnSave_clicked();

    void on_loadPakcage_clicked();

    void on_cmbChoosePackage_currentIndexChanged(int index);

    void on_btnReset_clicked();

private:
    Ui::SubmitAssignments *ui;
    QSqlDatabase database;
};

#endif // SUBMITASSIGNMENTS_H

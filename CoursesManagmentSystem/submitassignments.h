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

private:
    Ui::SubmitAssignments *ui;
};

#endif // SUBMITASSIGNMENTS_H

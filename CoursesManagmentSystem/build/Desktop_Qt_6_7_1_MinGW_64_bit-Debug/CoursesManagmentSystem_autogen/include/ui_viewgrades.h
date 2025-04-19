/********************************************************************************
** Form generated from reading UI file 'viewgrades.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWGRADES_H
#define UI_VIEWGRADES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ViewGrades
{
public:
    QLabel *label;
    QLineEdit *txtAssigNumber;
    QPushButton *btnFind;
    QLabel *label_2;
    QTableView *tableView2;

    void setupUi(QDialog *ViewGrades)
    {
        if (ViewGrades->objectName().isEmpty())
            ViewGrades->setObjectName("ViewGrades");
        ViewGrades->resize(400, 300);
        ViewGrades->setMaximumSize(QSize(400, 300));
        label = new QLabel(ViewGrades);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 101, 16));
        txtAssigNumber = new QLineEdit(ViewGrades);
        txtAssigNumber->setObjectName("txtAssigNumber");
        txtAssigNumber->setGeometry(QRect(150, 30, 113, 20));
        btnFind = new QPushButton(ViewGrades);
        btnFind->setObjectName("btnFind");
        btnFind->setGeometry(QRect(310, 30, 80, 18));
        label_2 = new QLabel(ViewGrades);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 100, 51, 16));
        tableView2 = new QTableView(ViewGrades);
        tableView2->setObjectName("tableView2");
        tableView2->setGeometry(QRect(85, 90, 291, 191));

        retranslateUi(ViewGrades);

        QMetaObject::connectSlotsByName(ViewGrades);
    } // setupUi

    void retranslateUi(QDialog *ViewGrades)
    {
        ViewGrades->setWindowTitle(QCoreApplication::translate("ViewGrades", "View Grades", nullptr));
        label->setText(QCoreApplication::translate("ViewGrades", "Assignment Number", nullptr));
        btnFind->setText(QCoreApplication::translate("ViewGrades", "Find", nullptr));
        label_2->setText(QCoreApplication::translate("ViewGrades", "Grade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewGrades: public Ui_ViewGrades {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWGRADES_H

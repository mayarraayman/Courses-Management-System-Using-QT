/********************************************************************************
** Form generated from reading UI file 'findpackage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDPACKAGE_H
#define UI_FINDPACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindPackage
{
public:
    QLabel *label;
    QLineEdit *txtPackageName;
    QPushButton *btnFindPackage;
    QTableView *tableView;

    void setupUi(QDialog *FindPackage)
    {
        if (FindPackage->objectName().isEmpty())
            FindPackage->setObjectName("FindPackage");
        FindPackage->resize(500, 400);
        FindPackage->setMaximumSize(QSize(500, 400));
        label = new QLabel(FindPackage);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 71, 16));
        txtPackageName = new QLineEdit(FindPackage);
        txtPackageName->setObjectName("txtPackageName");
        txtPackageName->setGeometry(QRect(90, 10, 191, 20));
        btnFindPackage = new QPushButton(FindPackage);
        btnFindPackage->setObjectName("btnFindPackage");
        btnFindPackage->setGeometry(QRect(300, 10, 80, 18));
        tableView = new QTableView(FindPackage);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 80, 481, 311));

        retranslateUi(FindPackage);

        QMetaObject::connectSlotsByName(FindPackage);
    } // setupUi

    void retranslateUi(QDialog *FindPackage)
    {
        FindPackage->setWindowTitle(QCoreApplication::translate("FindPackage", "Find Package", nullptr));
        label->setText(QCoreApplication::translate("FindPackage", "Package Name", nullptr));
        btnFindPackage->setText(QCoreApplication::translate("FindPackage", "Find Package", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindPackage: public Ui_FindPackage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDPACKAGE_H

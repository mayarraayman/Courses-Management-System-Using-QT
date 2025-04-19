/********************************************************************************
** Form generated from reading UI file 'findtourist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTOURIST_H
#define UI_FINDTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindTourist
{
public:
    QLabel *label;
    QLineEdit *txtTourstfName;
    QPushButton *btnFind;
    QTableView *tableView;

    void setupUi(QDialog *FindTourist)
    {
        if (FindTourist->objectName().isEmpty())
            FindTourist->setObjectName("FindTourist");
        FindTourist->resize(500, 400);
        FindTourist->setMaximumSize(QSize(500, 400));
        label = new QLabel(FindTourist);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 91, 16));
        txtTourstfName = new QLineEdit(FindTourist);
        txtTourstfName->setObjectName("txtTourstfName");
        txtTourstfName->setGeometry(QRect(100, 10, 181, 20));
        btnFind = new QPushButton(FindTourist);
        btnFind->setObjectName("btnFind");
        btnFind->setGeometry(QRect(300, 10, 80, 18));
        tableView = new QTableView(FindTourist);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 50, 481, 341));
        QWidget::setTabOrder(txtTourstfName, btnFind);

        retranslateUi(FindTourist);

        QMetaObject::connectSlotsByName(FindTourist);
    } // setupUi

    void retranslateUi(QDialog *FindTourist)
    {
        FindTourist->setWindowTitle(QCoreApplication::translate("FindTourist", "Find Tourist", nullptr));
        label->setText(QCoreApplication::translate("FindTourist", "Enter Tourist Name", nullptr));
        btnFind->setText(QCoreApplication::translate("FindTourist", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindTourist: public Ui_FindTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTOURIST_H

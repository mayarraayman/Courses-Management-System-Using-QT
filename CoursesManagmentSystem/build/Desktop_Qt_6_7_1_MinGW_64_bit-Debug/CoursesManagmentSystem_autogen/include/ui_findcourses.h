/********************************************************************************
** Form generated from reading UI file 'findcourses.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCOURSES_H
#define UI_FINDCOURSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindCourses
{
public:
    QLabel *label;
    QLineEdit *txtCourseName;
    QPushButton *btnFindCourse;
    QTableView *tableView;

    void setupUi(QDialog *FindCourses)
    {
        if (FindCourses->objectName().isEmpty())
            FindCourses->setObjectName("FindCourses");
        FindCourses->resize(400, 300);
        FindCourses->setMaximumSize(QSize(400, 300));
        FindCourses->setAutoFillBackground(true);
        label = new QLabel(FindCourses);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 61, 16));
        txtCourseName = new QLineEdit(FindCourses);
        txtCourseName->setObjectName("txtCourseName");
        txtCourseName->setGeometry(QRect(102, 20, 171, 20));
        btnFindCourse = new QPushButton(FindCourses);
        btnFindCourse->setObjectName("btnFindCourse");
        btnFindCourse->setGeometry(QRect(290, 20, 80, 18));
        tableView = new QTableView(FindCourses);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(15, 90, 361, 192));

        retranslateUi(FindCourses);

        QMetaObject::connectSlotsByName(FindCourses);
    } // setupUi

    void retranslateUi(QDialog *FindCourses)
    {
        FindCourses->setWindowTitle(QCoreApplication::translate("FindCourses", "Find Course", nullptr));
        label->setText(QCoreApplication::translate("FindCourses", "Course Name", nullptr));
        btnFindCourse->setText(QCoreApplication::translate("FindCourses", "Find Course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindCourses: public Ui_FindCourses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCOURSES_H

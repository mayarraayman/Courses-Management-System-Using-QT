/********************************************************************************
** Form generated from reading UI file 'enrollcourses.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLLCOURSES_H
#define UI_ENROLLCOURSES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnrollCourses
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtCourseName;
    QLabel *label_2;
    QTextEdit *txtDescription;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *EnrollCourses)
    {
        if (EnrollCourses->objectName().isEmpty())
            EnrollCourses->setObjectName("EnrollCourses");
        EnrollCourses->setWindowModality(Qt::WindowModal);
        EnrollCourses->resize(397, 300);
        EnrollCourses->setMaximumSize(QSize(400, 300));
        formLayoutWidget = new QWidget(EnrollCourses);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 30, 351, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtCourseName = new QLineEdit(formLayoutWidget);
        txtCourseName->setObjectName("txtCourseName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtCourseName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtDescription = new QTextEdit(formLayoutWidget);
        txtDescription->setObjectName("txtDescription");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtDescription);

        btnSave = new QPushButton(EnrollCourses);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(300, 200, 80, 18));
        btnReset = new QPushButton(EnrollCourses);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(180, 200, 80, 18));

        retranslateUi(EnrollCourses);

        QMetaObject::connectSlotsByName(EnrollCourses);
    } // setupUi

    void retranslateUi(QDialog *EnrollCourses)
    {
        EnrollCourses->setWindowTitle(QCoreApplication::translate("EnrollCourses", "Enroll Courses", nullptr));
        label->setText(QCoreApplication::translate("EnrollCourses", "Course Name", nullptr));
        label_2->setText(QCoreApplication::translate("EnrollCourses", "Description", nullptr));
        btnSave->setText(QCoreApplication::translate("EnrollCourses", "Enroll", nullptr));
        btnReset->setText(QCoreApplication::translate("EnrollCourses", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnrollCourses: public Ui_EnrollCourses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLLCOURSES_H

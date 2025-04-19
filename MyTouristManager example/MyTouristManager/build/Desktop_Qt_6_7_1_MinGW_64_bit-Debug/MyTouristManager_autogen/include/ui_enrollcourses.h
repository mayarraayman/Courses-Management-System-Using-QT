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

class Ui_RegisterCourses
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtPackageName;
    QLabel *label_2;
    QTextEdit *txtDescription;
    QLabel *label_3;
    QLineEdit *txtAmount;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *RegisterCourses)
    {
        if (RegisterCourses->objectName().isEmpty())
            RegisterCourses->setObjectName("RegisterCourses");
        RegisterCourses->setWindowModality(Qt::WindowModal);
        RegisterCourses->resize(400, 300);
        RegisterCourses->setMaximumSize(QSize(400, 300));
        formLayoutWidget = new QWidget(RegisterCourses);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 10, 341, 105));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtPackageName = new QLineEdit(formLayoutWidget);
        txtPackageName->setObjectName("txtPackageName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtPackageName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtDescription = new QTextEdit(formLayoutWidget);
        txtDescription->setObjectName("txtDescription");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtDescription);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtAmount = new QLineEdit(formLayoutWidget);
        txtAmount->setObjectName("txtAmount");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtAmount);

        btnSave = new QPushButton(RegisterCourses);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(280, 160, 80, 18));
        btnReset = new QPushButton(RegisterCourses);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(180, 160, 80, 18));

        retranslateUi(RegisterCourses);

        QMetaObject::connectSlotsByName(RegisterCourses);
    } // setupUi

    void retranslateUi(QDialog *RegisterCourses)
    {
        RegisterCourses->setWindowTitle(QCoreApplication::translate("RegisterCourses", "Register Courses", nullptr));
        label->setText(QCoreApplication::translate("RegisterCourses", "Course Name", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterCourses", "Description", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterCourses", "Amount", nullptr));
        btnSave->setText(QCoreApplication::translate("RegisterCourses", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("RegisterCourses", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterCourses: public Ui_RegisterCourses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLLCOURSES_H

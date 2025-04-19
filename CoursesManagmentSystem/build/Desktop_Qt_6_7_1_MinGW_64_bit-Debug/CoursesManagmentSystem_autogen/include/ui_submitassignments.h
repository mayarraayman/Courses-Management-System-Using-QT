/********************************************************************************
** Form generated from reading UI file 'submitassignments.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMITASSIGNMENTS_H
#define UI_SUBMITASSIGNMENTS_H

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

class Ui_SubmitAssignments
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QTextEdit *txtAssig;
    QLabel *label_2;
    QLineEdit *txtAssigNumber;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *SubmitAssignments)
    {
        if (SubmitAssignments->objectName().isEmpty())
            SubmitAssignments->setObjectName("SubmitAssignments");
        SubmitAssignments->resize(400, 300);
        SubmitAssignments->setMaximumSize(QSize(400, 300));
        formLayoutWidget = new QWidget(SubmitAssignments);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 19, 361, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        label->setEnabled(true);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        txtAssig = new QTextEdit(formLayoutWidget);
        txtAssig->setObjectName("txtAssig");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtAssig);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        txtAssigNumber = new QLineEdit(formLayoutWidget);
        txtAssigNumber->setObjectName("txtAssigNumber");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtAssigNumber);

        btnSave = new QPushButton(SubmitAssignments);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(270, 270, 80, 18));
        btnReset = new QPushButton(SubmitAssignments);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(160, 270, 80, 18));

        retranslateUi(SubmitAssignments);

        QMetaObject::connectSlotsByName(SubmitAssignments);
    } // setupUi

    void retranslateUi(QDialog *SubmitAssignments)
    {
        SubmitAssignments->setWindowTitle(QCoreApplication::translate("SubmitAssignments", "Submit Assignment", nullptr));
        label->setText(QCoreApplication::translate("SubmitAssignments", "Write your assgnment here or drop a link", nullptr));
        label_2->setText(QCoreApplication::translate("SubmitAssignments", "Assignment Number", nullptr));
        btnSave->setText(QCoreApplication::translate("SubmitAssignments", "Submit", nullptr));
        btnReset->setText(QCoreApplication::translate("SubmitAssignments", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubmitAssignments: public Ui_SubmitAssignments {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBMITASSIGNMENTS_H

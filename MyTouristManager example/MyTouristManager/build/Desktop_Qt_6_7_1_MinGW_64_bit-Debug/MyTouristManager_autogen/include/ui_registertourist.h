/********************************************************************************
** Form generated from reading UI file 'registertourist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERTOURIST_H
#define UI_REGISTERTOURIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterTourist
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtFirstName;
    QLabel *label_2;
    QLineEdit *txtMiddleName;
    QLabel *label_3;
    QLineEdit *txtLastName;
    QLabel *label_4;
    QLineEdit *txtPassportNo;
    QLabel *label_5;
    QLineEdit *txtContactNo;
    QLabel *label_6;
    QLineEdit *txtPermanentAddress;
    QTextEdit *txtPackageDescription;
    QLabel *label_8;
    QComboBox *cmbChoosePackage;
    QPushButton *loadPakcage;
    QLabel *label_7;
    QPushButton *btnSave;
    QPushButton *btnReset;

    void setupUi(QDialog *RegisterTourist)
    {
        if (RegisterTourist->objectName().isEmpty())
            RegisterTourist->setObjectName("RegisterTourist");
        RegisterTourist->resize(500, 400);
        RegisterTourist->setMaximumSize(QSize(500, 400));
        formLayoutWidget = new QWidget(RegisterTourist);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 10, 451, 331));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtFirstName = new QLineEdit(formLayoutWidget);
        txtFirstName->setObjectName("txtFirstName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtFirstName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtMiddleName = new QLineEdit(formLayoutWidget);
        txtMiddleName->setObjectName("txtMiddleName");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtMiddleName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtLastName = new QLineEdit(formLayoutWidget);
        txtLastName->setObjectName("txtLastName");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtLastName);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtPassportNo = new QLineEdit(formLayoutWidget);
        txtPassportNo->setObjectName("txtPassportNo");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtPassportNo);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        txtContactNo = new QLineEdit(formLayoutWidget);
        txtContactNo->setObjectName("txtContactNo");

        formLayout->setWidget(4, QFormLayout::FieldRole, txtContactNo);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        txtPermanentAddress = new QLineEdit(formLayoutWidget);
        txtPermanentAddress->setObjectName("txtPermanentAddress");

        formLayout->setWidget(5, QFormLayout::FieldRole, txtPermanentAddress);

        txtPackageDescription = new QTextEdit(formLayoutWidget);
        txtPackageDescription->setObjectName("txtPackageDescription");
        txtPackageDescription->setEnabled(false);

        formLayout->setWidget(11, QFormLayout::FieldRole, txtPackageDescription);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(11, QFormLayout::LabelRole, label_8);

        cmbChoosePackage = new QComboBox(formLayoutWidget);
        cmbChoosePackage->setObjectName("cmbChoosePackage");

        formLayout->setWidget(6, QFormLayout::FieldRole, cmbChoosePackage);

        loadPakcage = new QPushButton(formLayoutWidget);
        loadPakcage->setObjectName("loadPakcage");
        loadPakcage->setMaximumSize(QSize(100, 25));

        formLayout->setWidget(10, QFormLayout::FieldRole, loadPakcage);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        btnSave = new QPushButton(RegisterTourist);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(310, 350, 80, 25));
        btnReset = new QPushButton(RegisterTourist);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(210, 350, 80, 25));

        retranslateUi(RegisterTourist);

        QMetaObject::connectSlotsByName(RegisterTourist);
    } // setupUi

    void retranslateUi(QDialog *RegisterTourist)
    {
        RegisterTourist->setWindowTitle(QCoreApplication::translate("RegisterTourist", "Register Tourist", nullptr));
        label->setText(QCoreApplication::translate("RegisterTourist", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterTourist", "Middle Name", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterTourist", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterTourist", "Passport No", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterTourist", "Contact No", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterTourist", "Permanent Address", nullptr));
        label_8->setText(QCoreApplication::translate("RegisterTourist", "Package Description", nullptr));
        loadPakcage->setText(QCoreApplication::translate("RegisterTourist", "Load Packages", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterTourist", "Choose Package", nullptr));
        btnSave->setText(QCoreApplication::translate("RegisterTourist", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("RegisterTourist", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterTourist: public Ui_RegisterTourist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERTOURIST_H

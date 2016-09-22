/********************************************************************************
** Form generated from reading UI file 'formchargecontrollersizing.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCHARGECONTROLLERSIZING_H
#define UI_FORMCHARGECONTROLLERSIZING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormChargeControllerSizing
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *shortCircuitCurrentIscLabel;
    QLineEdit *shortCircuitCurrentIscLineEdit;
    QLabel *safeFactornFsLabel;
    QLineEdit *safeFactornFsLineEdit;
    QPushButton *calculatePushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *solarChargeControllerCurrentLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *FormChargeControllerSizing)
    {
        if (FormChargeControllerSizing->objectName().isEmpty())
            FormChargeControllerSizing->setObjectName(QStringLiteral("FormChargeControllerSizing"));
        FormChargeControllerSizing->resize(299, 357);
        verticalLayout_3 = new QVBoxLayout(FormChargeControllerSizing);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_4 = new QLabel(FormChargeControllerSizing);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        line = new QFrame(FormChargeControllerSizing);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        label = new QLabel(FormChargeControllerSizing);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        groupBox = new QGroupBox(FormChargeControllerSizing);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        shortCircuitCurrentIscLabel = new QLabel(groupBox);
        shortCircuitCurrentIscLabel->setObjectName(QStringLiteral("shortCircuitCurrentIscLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, shortCircuitCurrentIscLabel);

        shortCircuitCurrentIscLineEdit = new QLineEdit(groupBox);
        shortCircuitCurrentIscLineEdit->setObjectName(QStringLiteral("shortCircuitCurrentIscLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, shortCircuitCurrentIscLineEdit);

        safeFactornFsLabel = new QLabel(groupBox);
        safeFactornFsLabel->setObjectName(QStringLiteral("safeFactornFsLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, safeFactornFsLabel);

        safeFactornFsLineEdit = new QLineEdit(groupBox);
        safeFactornFsLineEdit->setObjectName(QStringLiteral("safeFactornFsLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, safeFactornFsLineEdit);


        verticalLayout->addLayout(formLayout);

        calculatePushButton = new QPushButton(groupBox);
        calculatePushButton->setObjectName(QStringLiteral("calculatePushButton"));

        verticalLayout->addWidget(calculatePushButton);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        groupBox_2 = new QGroupBox(FormChargeControllerSizing);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        solarChargeControllerCurrentLabel = new QLabel(groupBox_2);
        solarChargeControllerCurrentLabel->setObjectName(QStringLiteral("solarChargeControllerCurrentLabel"));

        gridLayout->addWidget(solarChargeControllerCurrentLabel, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_3->addWidget(groupBox_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        label->raise();
        groupBox->raise();
        groupBox_2->raise();
        line->raise();

        retranslateUi(FormChargeControllerSizing);

        QMetaObject::connectSlotsByName(FormChargeControllerSizing);
    } // setupUi

    void retranslateUi(QWidget *FormChargeControllerSizing)
    {
        FormChargeControllerSizing->setWindowTitle(QApplication::translate("FormChargeControllerSizing", "Form", 0));
        label_4->setText(QApplication::translate("FormChargeControllerSizing", "Charge Controller Sizing", 0));
        label->setText(QApplication::translate("FormChargeControllerSizing", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#ff0000;\">Note:</span><span style=\" font-size:11pt; color:#ff0000;\"> The voltage rating of the charge <br> controller must be equal to the nominal<br> voltage of the system (Vreg = Vdc)</span></p></body></html>", 0));
        groupBox->setTitle(QString());
        shortCircuitCurrentIscLabel->setText(QApplication::translate("FormChargeControllerSizing", "Short circuit current (Isc)", 0));
        safeFactornFsLabel->setText(QApplication::translate("FormChargeControllerSizing", "Safe factor (Fs)", 0));
        calculatePushButton->setText(QApplication::translate("FormChargeControllerSizing", "Calculate", 0));
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("FormChargeControllerSizing", "Solar charge controller curent rating (Ireg):", 0));
        solarChargeControllerCurrentLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormChargeControllerSizing: public Ui_FormChargeControllerSizing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCHARGECONTROLLERSIZING_H

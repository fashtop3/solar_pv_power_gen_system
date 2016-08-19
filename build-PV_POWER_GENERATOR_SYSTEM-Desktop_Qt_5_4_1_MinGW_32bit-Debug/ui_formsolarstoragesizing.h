/********************************************************************************
** Form generated from reading UI file 'formsolarstoragesizing.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSOLARSTORAGESIZING_H
#define UI_FORMSOLARSTORAGESIZING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
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

class Ui_FormSolarStorageSizing
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *daysOfAutonnomyLabel;
    QComboBox *daysOfAutonnomyComboBox;
    QLabel *maxDepthOfDischargeLabel;
    QComboBox *maxDepthOfDischargeComboBox;
    QLabel *voltageOfAUnitBatteryVbattLabel;
    QLineEdit *voltageOfAUnitBatteryVbattLineEdit;
    QLabel *chosenCapacityOfOneBatteryUnitCbLabel;
    QLineEdit *chosenCapacityOfOneBatteryUnitCbLineEdit;
    QPushButton *calculatePushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *unadjustedBatteryLabel;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *adjustedbatteryLabel;
    QLabel *totalNumberRequiredBatteryLabel;
    QLabel *numberBatteriesInSeriesLabel;
    QLabel *numberBatteriesInParallelLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *FormSolarStorageSizing)
    {
        if (FormSolarStorageSizing->objectName().isEmpty())
            FormSolarStorageSizing->setObjectName(QStringLiteral("FormSolarStorageSizing"));
        FormSolarStorageSizing->resize(374, 399);
        verticalLayout_3 = new QVBoxLayout(FormSolarStorageSizing);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(FormSolarStorageSizing);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout);

        line = new QFrame(FormSolarStorageSizing);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        groupBox = new QGroupBox(FormSolarStorageSizing);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        daysOfAutonnomyLabel = new QLabel(groupBox);
        daysOfAutonnomyLabel->setObjectName(QStringLiteral("daysOfAutonnomyLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, daysOfAutonnomyLabel);

        daysOfAutonnomyComboBox = new QComboBox(groupBox);
        daysOfAutonnomyComboBox->setObjectName(QStringLiteral("daysOfAutonnomyComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, daysOfAutonnomyComboBox);

        maxDepthOfDischargeLabel = new QLabel(groupBox);
        maxDepthOfDischargeLabel->setObjectName(QStringLiteral("maxDepthOfDischargeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, maxDepthOfDischargeLabel);

        maxDepthOfDischargeComboBox = new QComboBox(groupBox);
        maxDepthOfDischargeComboBox->setObjectName(QStringLiteral("maxDepthOfDischargeComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, maxDepthOfDischargeComboBox);

        voltageOfAUnitBatteryVbattLabel = new QLabel(groupBox);
        voltageOfAUnitBatteryVbattLabel->setObjectName(QStringLiteral("voltageOfAUnitBatteryVbattLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, voltageOfAUnitBatteryVbattLabel);

        voltageOfAUnitBatteryVbattLineEdit = new QLineEdit(groupBox);
        voltageOfAUnitBatteryVbattLineEdit->setObjectName(QStringLiteral("voltageOfAUnitBatteryVbattLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, voltageOfAUnitBatteryVbattLineEdit);

        chosenCapacityOfOneBatteryUnitCbLabel = new QLabel(groupBox);
        chosenCapacityOfOneBatteryUnitCbLabel->setObjectName(QStringLiteral("chosenCapacityOfOneBatteryUnitCbLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, chosenCapacityOfOneBatteryUnitCbLabel);

        chosenCapacityOfOneBatteryUnitCbLineEdit = new QLineEdit(groupBox);
        chosenCapacityOfOneBatteryUnitCbLineEdit->setObjectName(QStringLiteral("chosenCapacityOfOneBatteryUnitCbLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, chosenCapacityOfOneBatteryUnitCbLineEdit);


        verticalLayout->addLayout(formLayout);

        calculatePushButton = new QPushButton(groupBox);
        calculatePushButton->setObjectName(QStringLiteral("calculatePushButton"));

        verticalLayout->addWidget(calculatePushButton);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        groupBox_2 = new QGroupBox(FormSolarStorageSizing);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        unadjustedBatteryLabel = new QLabel(groupBox_2);
        unadjustedBatteryLabel->setObjectName(QStringLiteral("unadjustedBatteryLabel"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, unadjustedBatteryLabel);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_7);

        adjustedbatteryLabel = new QLabel(groupBox_2);
        adjustedbatteryLabel->setObjectName(QStringLiteral("adjustedbatteryLabel"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, adjustedbatteryLabel);

        totalNumberRequiredBatteryLabel = new QLabel(groupBox_2);
        totalNumberRequiredBatteryLabel->setObjectName(QStringLiteral("totalNumberRequiredBatteryLabel"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, totalNumberRequiredBatteryLabel);

        numberBatteriesInSeriesLabel = new QLabel(groupBox_2);
        numberBatteriesInSeriesLabel->setObjectName(QStringLiteral("numberBatteriesInSeriesLabel"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, numberBatteriesInSeriesLabel);

        numberBatteriesInParallelLabel = new QLabel(groupBox_2);
        numberBatteriesInParallelLabel->setObjectName(QStringLiteral("numberBatteriesInParallelLabel"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, numberBatteriesInParallelLabel);


        verticalLayout_2->addLayout(formLayout_2);


        verticalLayout_3->addWidget(groupBox_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        retranslateUi(FormSolarStorageSizing);

        QMetaObject::connectSlotsByName(FormSolarStorageSizing);
    } // setupUi

    void retranslateUi(QWidget *FormSolarStorageSizing)
    {
        FormSolarStorageSizing->setWindowTitle(QApplication::translate("FormSolarStorageSizing", "Form", 0));
        label_2->setText(QApplication::translate("FormSolarStorageSizing", "Solar Storage Sizing", 0));
        groupBox->setTitle(QString());
        daysOfAutonnomyLabel->setText(QApplication::translate("FormSolarStorageSizing", "Days of Autonomy", 0));
        maxDepthOfDischargeLabel->setText(QApplication::translate("FormSolarStorageSizing", "<html><head/><body><p>Max Depth of Discharge (DoD)</p></body></html>", 0));
        voltageOfAUnitBatteryVbattLabel->setText(QApplication::translate("FormSolarStorageSizing", "<html><head/><body><p>Voltage of a unit battery (V<span style=\" vertical-align:sub;\">batt</span>)</p></body></html>", 0));
        chosenCapacityOfOneBatteryUnitCbLabel->setText(QApplication::translate("FormSolarStorageSizing", "<html><head/><body><p>Chosen capacity of one battery unit (C<span style=\" vertical-align:sub;\">b</span>)</p></body></html>", 0));
        calculatePushButton->setText(QApplication::translate("FormSolarStorageSizing", "Calculate", 0));
        groupBox_2->setTitle(QString());
        label->setText(QApplication::translate("FormSolarStorageSizing", "Unadjusted battery capacity (c):", 0));
        unadjustedBatteryLabel->setText(QString());
        label_4->setText(QApplication::translate("FormSolarStorageSizing", "<html><head/><body><p>Total number of required battery (N<span style=\" vertical-align:sub;\">bm</span>):</p></body></html>", 0));
        label_5->setText(QApplication::translate("FormSolarStorageSizing", "<html><head/><body><p>Adjusted battery capacity (C<span style=\" vertical-align:sub;\">adjusted</span>):</p></body></html>", 0));
        label_6->setText(QApplication::translate("FormSolarStorageSizing", "<html><head/><body><p>Number of batteries in parallel (N<span style=\" vertical-align:sub;\">bp</span>):</p></body></html>", 0));
        label_7->setText(QApplication::translate("FormSolarStorageSizing", "<html><head/><body><p>Number of batteries in series (N<span style=\" vertical-align:sub;\">bs</span>):</p></body></html>", 0));
        adjustedbatteryLabel->setText(QString());
        totalNumberRequiredBatteryLabel->setText(QString());
        numberBatteriesInSeriesLabel->setText(QString());
        numberBatteriesInParallelLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormSolarStorageSizing: public Ui_FormSolarStorageSizing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSOLARSTORAGESIZING_H

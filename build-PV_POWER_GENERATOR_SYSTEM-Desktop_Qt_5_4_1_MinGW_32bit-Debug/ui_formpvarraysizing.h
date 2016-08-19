/********************************************************************************
** Form generated from reading UI file 'formpvarraysizing.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPVARRAYSIZING_H
#define UI_FORMPVARRAYSIZING_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormPVArraySizing
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *dc12vRadioButton;
    QRadioButton *dc24vRadioButton;
    QRadioButton *dc48vRadioButton;
    QFormLayout *formLayout;
    QLabel *minimumPeakSunHoursDayLabel;
    QLabel *dCCurrentOfASinglePVLabel;
    QLineEdit *dcCurrentOfASinglePVLineEdit;
    QLabel *dCVoltageOfASinglePVLabel;
    QLineEdit *dcVoltageOfASinglePVLineEdit;
    QComboBox *minimumPeakSunHoursDayComboBox;
    QPushButton *calcPushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLabel *totalRatedCurrentPVArrayLabel;
    QLabel *label_3;
    QLabel *totalRatedPowerSuppliedPVArrayLabel;
    QLabel *label_4;
    QLabel *requiredNumberModuleParallellabel;
    QLabel *label_5;
    QLabel *requiredNumberModuleSeriesLabel;
    QLabel *label_6;
    QLabel *overallNumberModuleReqLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *FormPVArraySizing)
    {
        if (FormPVArraySizing->objectName().isEmpty())
            FormPVArraySizing->setObjectName(QStringLiteral("FormPVArraySizing"));
        FormPVArraySizing->resize(299, 411);
        verticalLayout_3 = new QVBoxLayout(FormPVArraySizing);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_7 = new QLabel(FormPVArraySizing);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_2);

        line = new QFrame(FormPVArraySizing);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(FormPVArraySizing);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dc12vRadioButton = new QRadioButton(groupBox);
        dc12vRadioButton->setObjectName(QStringLiteral("dc12vRadioButton"));

        horizontalLayout->addWidget(dc12vRadioButton);

        dc24vRadioButton = new QRadioButton(groupBox);
        dc24vRadioButton->setObjectName(QStringLiteral("dc24vRadioButton"));

        horizontalLayout->addWidget(dc24vRadioButton);

        dc48vRadioButton = new QRadioButton(groupBox);
        dc48vRadioButton->setObjectName(QStringLiteral("dc48vRadioButton"));

        horizontalLayout->addWidget(dc48vRadioButton);


        verticalLayout->addWidget(groupBox);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        minimumPeakSunHoursDayLabel = new QLabel(FormPVArraySizing);
        minimumPeakSunHoursDayLabel->setObjectName(QStringLiteral("minimumPeakSunHoursDayLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, minimumPeakSunHoursDayLabel);

        dCCurrentOfASinglePVLabel = new QLabel(FormPVArraySizing);
        dCCurrentOfASinglePVLabel->setObjectName(QStringLiteral("dCCurrentOfASinglePVLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, dCCurrentOfASinglePVLabel);

        dcCurrentOfASinglePVLineEdit = new QLineEdit(FormPVArraySizing);
        dcCurrentOfASinglePVLineEdit->setObjectName(QStringLiteral("dcCurrentOfASinglePVLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dcCurrentOfASinglePVLineEdit);

        dCVoltageOfASinglePVLabel = new QLabel(FormPVArraySizing);
        dCVoltageOfASinglePVLabel->setObjectName(QStringLiteral("dCVoltageOfASinglePVLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, dCVoltageOfASinglePVLabel);

        dcVoltageOfASinglePVLineEdit = new QLineEdit(FormPVArraySizing);
        dcVoltageOfASinglePVLineEdit->setObjectName(QStringLiteral("dcVoltageOfASinglePVLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, dcVoltageOfASinglePVLineEdit);

        minimumPeakSunHoursDayComboBox = new QComboBox(FormPVArraySizing);
        minimumPeakSunHoursDayComboBox->setObjectName(QStringLiteral("minimumPeakSunHoursDayComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, minimumPeakSunHoursDayComboBox);


        verticalLayout->addLayout(formLayout);

        calcPushButton = new QPushButton(FormPVArraySizing);
        calcPushButton->setObjectName(QStringLiteral("calcPushButton"));

        verticalLayout->addWidget(calcPushButton);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        groupBox_2 = new QGroupBox(FormPVArraySizing);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        totalRatedCurrentPVArrayLabel = new QLabel(groupBox_2);
        totalRatedCurrentPVArrayLabel->setObjectName(QStringLiteral("totalRatedCurrentPVArrayLabel"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, totalRatedCurrentPVArrayLabel);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        totalRatedPowerSuppliedPVArrayLabel = new QLabel(groupBox_2);
        totalRatedPowerSuppliedPVArrayLabel->setObjectName(QStringLiteral("totalRatedPowerSuppliedPVArrayLabel"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, totalRatedPowerSuppliedPVArrayLabel);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_4);

        requiredNumberModuleParallellabel = new QLabel(groupBox_2);
        requiredNumberModuleParallellabel->setObjectName(QStringLiteral("requiredNumberModuleParallellabel"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, requiredNumberModuleParallellabel);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_5);

        requiredNumberModuleSeriesLabel = new QLabel(groupBox_2);
        requiredNumberModuleSeriesLabel->setObjectName(QStringLiteral("requiredNumberModuleSeriesLabel"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, requiredNumberModuleSeriesLabel);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_6);

        overallNumberModuleReqLabel = new QLabel(groupBox_2);
        overallNumberModuleReqLabel->setObjectName(QStringLiteral("overallNumberModuleReqLabel"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, overallNumberModuleReqLabel);


        verticalLayout_2->addLayout(formLayout_2);


        verticalLayout_3->addWidget(groupBox_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        retranslateUi(FormPVArraySizing);

        QMetaObject::connectSlotsByName(FormPVArraySizing);
    } // setupUi

    void retranslateUi(QWidget *FormPVArraySizing)
    {
        FormPVArraySizing->setWindowTitle(QApplication::translate("FormPVArraySizing", "Form", 0));
        label_7->setText(QApplication::translate("FormPVArraySizing", "PV Array Sizing", 0));
        groupBox->setTitle(QApplication::translate("FormPVArraySizing", "DC System voltage (Vdc)", 0));
        dc12vRadioButton->setText(QApplication::translate("FormPVArraySizing", "12V DC", 0));
        dc24vRadioButton->setText(QApplication::translate("FormPVArraySizing", "24V DC", 0));
        dc48vRadioButton->setText(QApplication::translate("FormPVArraySizing", "48V DC", 0));
        minimumPeakSunHoursDayLabel->setText(QApplication::translate("FormPVArraySizing", "Minimum peak sun hours/day", 0));
        dCCurrentOfASinglePVLabel->setText(QApplication::translate("FormPVArraySizing", "DC current of a single PV", 0));
        dCVoltageOfASinglePVLabel->setText(QApplication::translate("FormPVArraySizing", "DC voltage of a single PV", 0));
        calcPushButton->setText(QApplication::translate("FormPVArraySizing", "Calculate", 0));
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("FormPVArraySizing", "Total rated current of PV array:", 0));
        totalRatedCurrentPVArrayLabel->setText(QString());
        label_3->setText(QApplication::translate("FormPVArraySizing", "Total power supplied by PV array:", 0));
        totalRatedPowerSuppliedPVArrayLabel->setText(QString());
        label_4->setText(QApplication::translate("FormPVArraySizing", "Required number of modules in parallel:", 0));
        requiredNumberModuleParallellabel->setText(QString());
        label_5->setText(QApplication::translate("FormPVArraySizing", "Required number of modules in series:", 0));
        requiredNumberModuleSeriesLabel->setText(QString());
        label_6->setText(QApplication::translate("FormPVArraySizing", "Overall number of modules required:", 0));
        overallNumberModuleReqLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormPVArraySizing: public Ui_FormPVArraySizing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPVARRAYSIZING_H

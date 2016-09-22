/********************************************************************************
** Form generated from reading UI file 'formrecomendedpvsystem.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMRECOMENDEDPVSYSTEM_H
#define UI_FORMRECOMENDEDPVSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormRecomendedPVSystem
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *dcToAcLabel;
    QLabel *powerRatingLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *ratedCurrentLabel;
    QLabel *regulatorVoltageLabel;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_3;
    QLabel *label_6;
    QLabel *totalNumberPVModulesLabel;
    QLabel *label_7;
    QLabel *numberOfPVParallelLabel;
    QLabel *label_10;
    QLabel *numberOfPVSeriesLabel;
    QLabel *label_11;
    QLabel *ratedPVVoltageLabel;
    QLabel *label_14;
    QLabel *ratedCurrentPVSinglePanelLabel;
    QLabel *label_15;
    QLabel *ratedPowerPVSinglePanelLabel;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_4;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *numberOfBatteriesInSeriesLabel;
    QLabel *totalNumberBatteriesLabel;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *numberOfBatteriesInParallelLabel;
    QLabel *ratedBatteryVoltageLabel;
    QLabel *label_16;
    QLabel *ampereCapacityLabel;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *latitudeLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *updatePushButton;
    QPushButton *printPushButton;

    void setupUi(QWidget *FormRecomendedPVSystem)
    {
        if (FormRecomendedPVSystem->objectName().isEmpty())
            FormRecomendedPVSystem->setObjectName(QStringLiteral("FormRecomendedPVSystem"));
        FormRecomendedPVSystem->resize(369, 429);
        verticalLayout_6 = new QVBoxLayout(FormRecomendedPVSystem);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(FormRecomendedPVSystem);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout_6->addLayout(horizontalLayout);

        line = new QFrame(FormRecomendedPVSystem);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox = new QGroupBox(FormRecomendedPVSystem);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        dcToAcLabel = new QLabel(groupBox);
        dcToAcLabel->setObjectName(QStringLiteral("dcToAcLabel"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dcToAcLabel);

        powerRatingLabel = new QLabel(groupBox);
        powerRatingLabel->setObjectName(QStringLiteral("powerRatingLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, powerRatingLabel);


        verticalLayout->addLayout(formLayout);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(FormRecomendedPVSystem);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        ratedCurrentLabel = new QLabel(groupBox_2);
        ratedCurrentLabel->setObjectName(QStringLiteral("ratedCurrentLabel"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, ratedCurrentLabel);

        regulatorVoltageLabel = new QLabel(groupBox_2);
        regulatorVoltageLabel->setObjectName(QStringLiteral("regulatorVoltageLabel"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, regulatorVoltageLabel);


        verticalLayout_2->addLayout(formLayout_2);


        horizontalLayout_3->addWidget(groupBox_2);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox_3 = new QGroupBox(FormRecomendedPVSystem);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_6);

        totalNumberPVModulesLabel = new QLabel(groupBox_3);
        totalNumberPVModulesLabel->setObjectName(QStringLiteral("totalNumberPVModulesLabel"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, totalNumberPVModulesLabel);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_7);

        numberOfPVParallelLabel = new QLabel(groupBox_3);
        numberOfPVParallelLabel->setObjectName(QStringLiteral("numberOfPVParallelLabel"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, numberOfPVParallelLabel);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_10);

        numberOfPVSeriesLabel = new QLabel(groupBox_3);
        numberOfPVSeriesLabel->setObjectName(QStringLiteral("numberOfPVSeriesLabel"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, numberOfPVSeriesLabel);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_11);

        ratedPVVoltageLabel = new QLabel(groupBox_3);
        ratedPVVoltageLabel->setObjectName(QStringLiteral("ratedPVVoltageLabel"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, ratedPVVoltageLabel);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_14);

        ratedCurrentPVSinglePanelLabel = new QLabel(groupBox_3);
        ratedCurrentPVSinglePanelLabel->setObjectName(QStringLiteral("ratedCurrentPVSinglePanelLabel"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, ratedCurrentPVSinglePanelLabel);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_15);

        ratedPowerPVSinglePanelLabel = new QLabel(groupBox_3);
        ratedPowerPVSinglePanelLabel->setObjectName(QStringLiteral("ratedPowerPVSinglePanelLabel"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, ratedPowerPVSinglePanelLabel);


        verticalLayout_5->addLayout(formLayout_3);


        horizontalLayout_4->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(FormRecomendedPVSystem);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_9);

        numberOfBatteriesInSeriesLabel = new QLabel(groupBox_4);
        numberOfBatteriesInSeriesLabel->setObjectName(QStringLiteral("numberOfBatteriesInSeriesLabel"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, numberOfBatteriesInSeriesLabel);

        totalNumberBatteriesLabel = new QLabel(groupBox_4);
        totalNumberBatteriesLabel->setObjectName(QStringLiteral("totalNumberBatteriesLabel"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, totalNumberBatteriesLabel);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_13);

        numberOfBatteriesInParallelLabel = new QLabel(groupBox_4);
        numberOfBatteriesInParallelLabel->setObjectName(QStringLiteral("numberOfBatteriesInParallelLabel"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, numberOfBatteriesInParallelLabel);

        ratedBatteryVoltageLabel = new QLabel(groupBox_4);
        ratedBatteryVoltageLabel->setObjectName(QStringLiteral("ratedBatteryVoltageLabel"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, ratedBatteryVoltageLabel);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_16);

        ampereCapacityLabel = new QLabel(groupBox_4);
        ampereCapacityLabel->setObjectName(QStringLiteral("ampereCapacityLabel"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, ampereCapacityLabel);


        verticalLayout_4->addLayout(formLayout_4);


        horizontalLayout_4->addWidget(groupBox_4);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_5 = new QGroupBox(FormRecomendedPVSystem);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        latitudeLabel = new QLabel(groupBox_5);
        latitudeLabel->setObjectName(QStringLiteral("latitudeLabel"));
        latitudeLabel->setMinimumSize(QSize(111, 28));

        verticalLayout_3->addWidget(latitudeLabel);


        horizontalLayout_2->addWidget(groupBox_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        updatePushButton = new QPushButton(FormRecomendedPVSystem);
        updatePushButton->setObjectName(QStringLiteral("updatePushButton"));

        horizontalLayout_5->addWidget(updatePushButton);

        printPushButton = new QPushButton(FormRecomendedPVSystem);
        printPushButton->setObjectName(QStringLiteral("printPushButton"));

        horizontalLayout_5->addWidget(printPushButton);


        verticalLayout_6->addLayout(horizontalLayout_5);


        retranslateUi(FormRecomendedPVSystem);

        QMetaObject::connectSlotsByName(FormRecomendedPVSystem);
    } // setupUi

    void retranslateUi(QWidget *FormRecomendedPVSystem)
    {
        FormRecomendedPVSystem->setWindowTitle(QApplication::translate("FormRecomendedPVSystem", "Form", 0));
        label_3->setText(QApplication::translate("FormRecomendedPVSystem", "Recommended PV Generation System", 0));
        groupBox->setTitle(QApplication::translate("FormRecomendedPVSystem", "Inverter", 0));
        label->setText(QApplication::translate("FormRecomendedPVSystem", "Power rating:", 0));
        label_2->setText(QApplication::translate("FormRecomendedPVSystem", "Dc to AC:", 0));
        dcToAcLabel->setText(QString());
        powerRatingLabel->setText(QString());
        groupBox_2->setTitle(QApplication::translate("FormRecomendedPVSystem", "Charge Controller", 0));
        label_4->setText(QApplication::translate("FormRecomendedPVSystem", "Regulator Volatge:", 0));
        label_5->setText(QApplication::translate("FormRecomendedPVSystem", "Rated current:", 0));
        ratedCurrentLabel->setText(QString());
        regulatorVoltageLabel->setText(QString());
        groupBox_3->setTitle(QApplication::translate("FormRecomendedPVSystem", "PV Array", 0));
        label_6->setText(QApplication::translate("FormRecomendedPVSystem", "Total number of modules:", 0));
        totalNumberPVModulesLabel->setText(QString());
        label_7->setText(QApplication::translate("FormRecomendedPVSystem", "Number of parallel:", 0));
        numberOfPVParallelLabel->setText(QString());
        label_10->setText(QApplication::translate("FormRecomendedPVSystem", "Number of series:", 0));
        numberOfPVSeriesLabel->setText(QString());
        label_11->setText(QApplication::translate("FormRecomendedPVSystem", "Rated voltage:", 0));
        ratedPVVoltageLabel->setText(QString());
        label_14->setText(QApplication::translate("FormRecomendedPVSystem", "Rated current of single panel:", 0));
        ratedCurrentPVSinglePanelLabel->setText(QString());
        label_15->setText(QApplication::translate("FormRecomendedPVSystem", "Rated power of single panel:", 0));
        ratedPowerPVSinglePanelLabel->setText(QString());
        groupBox_4->setTitle(QApplication::translate("FormRecomendedPVSystem", "Solar Storage", 0));
        label_8->setText(QApplication::translate("FormRecomendedPVSystem", "Total number of batteries:", 0));
        label_9->setText(QApplication::translate("FormRecomendedPVSystem", "Number of series:", 0));
        numberOfBatteriesInSeriesLabel->setText(QString());
        totalNumberBatteriesLabel->setText(QString());
        label_12->setText(QApplication::translate("FormRecomendedPVSystem", "Number of parallel:", 0));
        label_13->setText(QApplication::translate("FormRecomendedPVSystem", "Rated voltage:", 0));
        numberOfBatteriesInParallelLabel->setText(QString());
        ratedBatteryVoltageLabel->setText(QString());
        label_16->setText(QApplication::translate("FormRecomendedPVSystem", "Ampere capacity:", 0));
        ampereCapacityLabel->setText(QString());
        groupBox_5->setTitle(QApplication::translate("FormRecomendedPVSystem", "Latitude", 0));
        latitudeLabel->setText(QString());
        updatePushButton->setText(QApplication::translate("FormRecomendedPVSystem", "&Update", 0));
        printPushButton->setText(QApplication::translate("FormRecomendedPVSystem", "&Print", 0));
    } // retranslateUi

};

namespace Ui {
    class FormRecomendedPVSystem: public Ui_FormRecomendedPVSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMRECOMENDEDPVSYSTEM_H

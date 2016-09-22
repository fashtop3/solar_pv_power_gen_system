/********************************************************************************
** Form generated from reading UI file 'formresourseestimation.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMRESOURSEESTIMATION_H
#define UI_FORMRESOURSEESTIMATION_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormResourseEstimation
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QFrame *line;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *latitudeLineEdit;
    QLabel *label_3;
    QPushButton *estimatePushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLabel *janLabel;
    QLabel *label_6;
    QLabel *febLabel;
    QLabel *label_8;
    QLabel *marchLabel;
    QLabel *label_10;
    QLabel *aprilLabel;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *mayLabel;
    QLabel *juneLabel;
    QFormLayout *formLayout_4;
    QLabel *label_16;
    QLabel *julyLabel;
    QLabel *label_19;
    QLabel *augLabel;
    QLabel *label_20;
    QLabel *septLabel;
    QLabel *label_22;
    QLabel *octLabel;
    QLabel *label_25;
    QLabel *novLabel;
    QLabel *label_27;
    QLabel *decLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *FormResourseEstimation)
    {
        if (FormResourseEstimation->objectName().isEmpty())
            FormResourseEstimation->setObjectName(QStringLiteral("FormResourseEstimation"));
        FormResourseEstimation->setEnabled(true);
        FormResourseEstimation->resize(399, 338);
        FormResourseEstimation->setMaximumSize(QSize(399, 338));
        FormResourseEstimation->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(FormResourseEstimation);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_5 = new QLabel(FormResourseEstimation);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout_2->addLayout(horizontalLayout_2);

        line = new QFrame(FormResourseEstimation);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        groupBox = new QGroupBox(FormResourseEstimation);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        latitudeLineEdit = new QLineEdit(groupBox);
        latitudeLineEdit->setObjectName(QStringLiteral("latitudeLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, latitudeLineEdit);


        verticalLayout->addLayout(formLayout);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        estimatePushButton = new QPushButton(groupBox);
        estimatePushButton->setObjectName(QStringLiteral("estimatePushButton"));

        verticalLayout->addWidget(estimatePushButton);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        groupBox_2 = new QGroupBox(FormResourseEstimation);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(381, 0));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        janLabel = new QLabel(groupBox_2);
        janLabel->setObjectName(QStringLiteral("janLabel"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, janLabel);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        febLabel = new QLabel(groupBox_2);
        febLabel->setObjectName(QStringLiteral("febLabel"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, febLabel);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        marchLabel = new QLabel(groupBox_2);
        marchLabel->setObjectName(QStringLiteral("marchLabel"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, marchLabel);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_10);

        aprilLabel = new QLabel(groupBox_2);
        aprilLabel->setObjectName(QStringLiteral("aprilLabel"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, aprilLabel);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_12);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_14);

        mayLabel = new QLabel(groupBox_2);
        mayLabel->setObjectName(QStringLiteral("mayLabel"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, mayLabel);

        juneLabel = new QLabel(groupBox_2);
        juneLabel->setObjectName(QStringLiteral("juneLabel"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, juneLabel);


        horizontalLayout->addLayout(formLayout_2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_16);

        julyLabel = new QLabel(groupBox_2);
        julyLabel->setObjectName(QStringLiteral("julyLabel"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, julyLabel);

        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_19);

        augLabel = new QLabel(groupBox_2);
        augLabel->setObjectName(QStringLiteral("augLabel"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, augLabel);

        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_20);

        septLabel = new QLabel(groupBox_2);
        septLabel->setObjectName(QStringLiteral("septLabel"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, septLabel);

        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_22);

        octLabel = new QLabel(groupBox_2);
        octLabel->setObjectName(QStringLiteral("octLabel"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, octLabel);

        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QStringLiteral("label_25"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_25);

        novLabel = new QLabel(groupBox_2);
        novLabel->setObjectName(QStringLiteral("novLabel"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, novLabel);

        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QStringLiteral("label_27"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_27);

        decLabel = new QLabel(groupBox_2);
        decLabel->setObjectName(QStringLiteral("decLabel"));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, decLabel);


        horizontalLayout->addLayout(formLayout_4);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(latitudeLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(FormResourseEstimation);

        QMetaObject::connectSlotsByName(FormResourseEstimation);
    } // setupUi

    void retranslateUi(QWidget *FormResourseEstimation)
    {
        FormResourseEstimation->setWindowTitle(QApplication::translate("FormResourseEstimation", "Form", 0));
        label_5->setText(QApplication::translate("FormResourseEstimation", "Solar resourse estimation", 0));
        groupBox->setTitle(QApplication::translate("FormResourseEstimation", "Monthly average extra-terrestial solar radiation", 0));
        label_2->setText(QApplication::translate("FormResourseEstimation", "&Latitude in Degrees ", 0));
        label_3->setText(QApplication::translate("FormResourseEstimation", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; text-decoration: underline;\">Notes:</span><span style=\" font-size:9pt; font-weight:600;\"/><span style=\" color:#ff0000;\">&nbsp;Hints on estimation and numbers of days.</span></p></body></html>", 0));
        estimatePushButton->setText(QApplication::translate("FormResourseEstimation", "Estimate", 0));
        groupBox_2->setTitle(QApplication::translate("FormResourseEstimation", "Month solar estimation in a year", 0));
        label_4->setText(QApplication::translate("FormResourseEstimation", "January:", 0));
        janLabel->setText(QString());
        label_6->setText(QApplication::translate("FormResourseEstimation", "February:", 0));
        febLabel->setText(QString());
        label_8->setText(QApplication::translate("FormResourseEstimation", "March:", 0));
        marchLabel->setText(QString());
        label_10->setText(QApplication::translate("FormResourseEstimation", "April:", 0));
        aprilLabel->setText(QString());
        label_12->setText(QApplication::translate("FormResourseEstimation", "May:", 0));
        label_14->setText(QApplication::translate("FormResourseEstimation", "June:", 0));
        mayLabel->setText(QString());
        juneLabel->setText(QString());
        label_16->setText(QApplication::translate("FormResourseEstimation", "July:", 0));
        julyLabel->setText(QString());
        label_19->setText(QApplication::translate("FormResourseEstimation", "August:", 0));
        augLabel->setText(QString());
        label_20->setText(QApplication::translate("FormResourseEstimation", "September:", 0));
        septLabel->setText(QString());
        label_22->setText(QApplication::translate("FormResourseEstimation", "October:", 0));
        octLabel->setText(QString());
        label_25->setText(QApplication::translate("FormResourseEstimation", "November:", 0));
        novLabel->setText(QString());
        label_27->setText(QApplication::translate("FormResourseEstimation", "December:", 0));
        decLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormResourseEstimation: public Ui_FormResourseEstimation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMRESOURSEESTIMATION_H

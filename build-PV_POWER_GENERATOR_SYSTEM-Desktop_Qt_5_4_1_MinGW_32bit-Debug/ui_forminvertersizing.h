/********************************************************************************
** Form generated from reading UI file 'forminvertersizing.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMINVERTERSIZING_H
#define UI_FORMINVERTERSIZING_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormInverterSizing
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QFrame *line;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox1;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *ac120vRadioButton;
    QRadioButton *ac240vRadioButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QComboBox *overallComboBox;
    QPushButton *calculatePushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *inverterPowerLabel;
    QLabel *label_5;
    QLabel *inverterCurrentLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *FormInverterSizing)
    {
        if (FormInverterSizing->objectName().isEmpty())
            FormInverterSizing->setObjectName(QStringLiteral("FormInverterSizing"));
        FormInverterSizing->resize(224, 376);
        verticalLayout_3 = new QVBoxLayout(FormInverterSizing);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_7 = new QLabel(FormInverterSizing);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout);

        line = new QFrame(FormInverterSizing);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        groupBox = new QGroupBox(FormInverterSizing);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox1 = new QGroupBox(groupBox);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        horizontalLayout_2 = new QHBoxLayout(groupBox1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ac120vRadioButton = new QRadioButton(groupBox1);
        ac120vRadioButton->setObjectName(QStringLiteral("ac120vRadioButton"));

        horizontalLayout_2->addWidget(ac120vRadioButton);

        ac240vRadioButton = new QRadioButton(groupBox1);
        ac240vRadioButton->setObjectName(QStringLiteral("ac240vRadioButton"));

        horizontalLayout_2->addWidget(ac240vRadioButton);


        verticalLayout->addWidget(groupBox1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        overallComboBox = new QComboBox(groupBox);
        overallComboBox->setObjectName(QStringLiteral("overallComboBox"));

        horizontalLayout_5->addWidget(overallComboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        calculatePushButton = new QPushButton(groupBox);
        calculatePushButton->setObjectName(QStringLiteral("calculatePushButton"));

        verticalLayout->addWidget(calculatePushButton);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        groupBox_3 = new QGroupBox(FormInverterSizing);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        inverterPowerLabel = new QLabel(groupBox_3);
        inverterPowerLabel->setObjectName(QStringLiteral("inverterPowerLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, inverterPowerLabel);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        inverterCurrentLabel = new QLabel(groupBox_3);
        inverterCurrentLabel->setObjectName(QStringLiteral("inverterCurrentLabel"));

        formLayout->setWidget(1, QFormLayout::FieldRole, inverterCurrentLabel);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout_3->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        retranslateUi(FormInverterSizing);

        QMetaObject::connectSlotsByName(FormInverterSizing);
    } // setupUi

    void retranslateUi(QWidget *FormInverterSizing)
    {
        FormInverterSizing->setWindowTitle(QApplication::translate("FormInverterSizing", "Form", 0));
        label_7->setText(QApplication::translate("FormInverterSizing", "Inverter Sizing", 0));
        groupBox1->setTitle(QApplication::translate("FormInverterSizing", "AC System voltage (Vac)", 0));
        ac120vRadioButton->setText(QApplication::translate("FormInverterSizing", "120V", 0));
        ac240vRadioButton->setText(QApplication::translate("FormInverterSizing", "240V", 0));
        label->setText(QApplication::translate("FormInverterSizing", "<html><head/><body><p>Overall load factor (P<span style=\" vertical-align:sub;\">c</span>)</p></body></html>", 0));
        calculatePushButton->setText(QApplication::translate("FormInverterSizing", "Calculate", 0));
        groupBox_3->setTitle(QString());
        label_2->setText(QApplication::translate("FormInverterSizing", "<html><head/><body><p>Inverter power rating (P<span style=\" vertical-align:sub;\">inv</span>):</p></body></html>", 0));
        inverterPowerLabel->setText(QString());
        label_5->setText(QApplication::translate("FormInverterSizing", "<html><head/><body><p>Inverter current rating (I<span style=\" vertical-align:sub;\">inv</span>):</p></body></html>", 0));
        inverterCurrentLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormInverterSizing: public Ui_FormInverterSizing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMINVERTERSIZING_H

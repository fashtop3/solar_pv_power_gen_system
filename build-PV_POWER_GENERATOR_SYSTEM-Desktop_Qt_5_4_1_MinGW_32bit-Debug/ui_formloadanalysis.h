/********************************************************************************
** Form generated from reading UI file 'formloadanalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLOADANALYSIS_H
#define UI_FORMLOADANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormLoadAnalysis
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *acRadioButton;
    QRadioButton *dcRadioButton;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *regulationLabel;
    QComboBox *regulationComboBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QTableWidget *appTableWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *eTotalEnergyLabel;
    QLabel *label_4;
    QLabel *eTotalLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *addPushButton;
    QPushButton *deletePushButton;
    QPushButton *resetPushButton;
    QPushButton *calcPushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FormLoadAnalysis)
    {
        if (FormLoadAnalysis->objectName().isEmpty())
            FormLoadAnalysis->setObjectName(QStringLiteral("FormLoadAnalysis"));
        FormLoadAnalysis->resize(471, 338);
        verticalLayout_3 = new QVBoxLayout(FormLoadAnalysis);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_3 = new QLabel(FormLoadAnalysis);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        line = new QFrame(FormLoadAnalysis);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox = new QGroupBox(FormLoadAnalysis);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        acRadioButton = new QRadioButton(groupBox);
        acRadioButton->setObjectName(QStringLiteral("acRadioButton"));

        horizontalLayout_2->addWidget(acRadioButton);

        dcRadioButton = new QRadioButton(groupBox);
        dcRadioButton->setObjectName(QStringLiteral("dcRadioButton"));

        horizontalLayout_2->addWidget(dcRadioButton);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(FormLoadAnalysis);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        regulationLabel = new QLabel(groupBox_2);
        regulationLabel->setObjectName(QStringLiteral("regulationLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, regulationLabel);

        regulationComboBox = new QComboBox(groupBox_2);
        regulationComboBox->setObjectName(QStringLiteral("regulationComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, regulationComboBox);


        horizontalLayout->addLayout(formLayout);


        horizontalLayout_3->addWidget(groupBox_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        appTableWidget = new QTableWidget(FormLoadAnalysis);
        if (appTableWidget->columnCount() < 5)
            appTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        appTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        appTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        appTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        appTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        appTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        appTableWidget->setObjectName(QStringLiteral("appTableWidget"));

        verticalLayout->addWidget(appTableWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(FormLoadAnalysis);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        eTotalEnergyLabel = new QLabel(FormLoadAnalysis);
        eTotalEnergyLabel->setObjectName(QStringLiteral("eTotalEnergyLabel"));

        gridLayout->addWidget(eTotalEnergyLabel, 0, 4, 1, 1);

        label_4 = new QLabel(FormLoadAnalysis);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        eTotalLabel = new QLabel(FormLoadAnalysis);
        eTotalLabel->setObjectName(QStringLiteral("eTotalLabel"));

        gridLayout->addWidget(eTotalLabel, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        addPushButton = new QPushButton(FormLoadAnalysis);
        addPushButton->setObjectName(QStringLiteral("addPushButton"));

        verticalLayout_2->addWidget(addPushButton);

        deletePushButton = new QPushButton(FormLoadAnalysis);
        deletePushButton->setObjectName(QStringLiteral("deletePushButton"));

        verticalLayout_2->addWidget(deletePushButton);

        resetPushButton = new QPushButton(FormLoadAnalysis);
        resetPushButton->setObjectName(QStringLiteral("resetPushButton"));

        verticalLayout_2->addWidget(resetPushButton);

        calcPushButton = new QPushButton(FormLoadAnalysis);
        calcPushButton->setObjectName(QStringLiteral("calcPushButton"));

        verticalLayout_2->addWidget(calcPushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_5);


        retranslateUi(FormLoadAnalysis);

        QMetaObject::connectSlotsByName(FormLoadAnalysis);
    } // setupUi

    void retranslateUi(QWidget *FormLoadAnalysis)
    {
        FormLoadAnalysis->setWindowTitle(QApplication::translate("FormLoadAnalysis", "Form", 0));
        label_3->setText(QApplication::translate("FormLoadAnalysis", "Load Analysis", 0));
        groupBox->setTitle(QApplication::translate("FormLoadAnalysis", "Load", 0));
        acRadioButton->setText(QApplication::translate("FormLoadAnalysis", "AC", 0));
        dcRadioButton->setText(QApplication::translate("FormLoadAnalysis", "DC", 0));
        groupBox_2->setTitle(QApplication::translate("FormLoadAnalysis", "Inverter Efficiency", 0));
        regulationLabel->setText(QApplication::translate("FormLoadAnalysis", "Regulation", 0));
        QTableWidgetItem *___qtablewidgetitem = appTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FormLoadAnalysis", "Appliances Desc.", 0));
        QTableWidgetItem *___qtablewidgetitem1 = appTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FormLoadAnalysis", "Number of Units", 0));
        QTableWidgetItem *___qtablewidgetitem2 = appTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("FormLoadAnalysis", "Power rating", 0));
        QTableWidgetItem *___qtablewidgetitem3 = appTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("FormLoadAnalysis", "Usage hours", 0));
        QTableWidgetItem *___qtablewidgetitem4 = appTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("FormLoadAnalysis", "Energy", 0));
        label_2->setText(QApplication::translate("FormLoadAnalysis", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">E-Total =</span></p></body></html>", 0));
        eTotalEnergyLabel->setText(QApplication::translate("FormLoadAnalysis", "0.00WH/Day", 0));
        label_4->setText(QApplication::translate("FormLoadAnalysis", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">E-Total energy =</span></p></body></html>", 0));
        eTotalLabel->setText(QApplication::translate("FormLoadAnalysis", "0.00", 0));
        addPushButton->setText(QApplication::translate("FormLoadAnalysis", "Add", 0));
        deletePushButton->setText(QApplication::translate("FormLoadAnalysis", "Delete", 0));
        resetPushButton->setText(QApplication::translate("FormLoadAnalysis", "Reset", 0));
        calcPushButton->setText(QApplication::translate("FormLoadAnalysis", "Calculate", 0));
    } // retranslateUi

};

namespace Ui {
    class FormLoadAnalysis: public Ui_FormLoadAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLOADANALYSIS_H

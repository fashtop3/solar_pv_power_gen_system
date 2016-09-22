/********************************************************************************
** Form generated from reading UI file 'preferencedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCEDIALOG_H
#define UI_PREFERENCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PreferenceDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *printPushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *closePushButton;

    void setupUi(QDialog *PreferenceDialog)
    {
        if (PreferenceDialog->objectName().isEmpty())
            PreferenceDialog->setObjectName(QStringLiteral("PreferenceDialog"));
        PreferenceDialog->resize(575, 503);
        PreferenceDialog->setCursor(QCursor(Qt::ArrowCursor));
        verticalLayout_2 = new QVBoxLayout(PreferenceDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        listWidget = new QListWidget(PreferenceDialog);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(161, 443));
        listWidget->setMaximumSize(QSize(161, 443));

        horizontalLayout_3->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(PreferenceDialog);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        verticalLayout->addWidget(stackedWidget);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        line = new QFrame(PreferenceDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        printPushButton = new QPushButton(PreferenceDialog);
        printPushButton->setObjectName(QStringLiteral("printPushButton"));

        horizontalLayout_2->addWidget(printPushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        closePushButton = new QPushButton(PreferenceDialog);
        closePushButton->setObjectName(QStringLiteral("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(PreferenceDialog);
        QObject::connect(closePushButton, SIGNAL(clicked()), PreferenceDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(PreferenceDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferenceDialog)
    {
        PreferenceDialog->setWindowTitle(QApplication::translate("PreferenceDialog", "Dialog", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("PreferenceDialog", "Solar Resource Estimation", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("PreferenceDialog", "Load Analysis", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("PreferenceDialog", "PV Array Sizing", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("PreferenceDialog", "Charge controller Sizing", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("PreferenceDialog", "Inverter Sizing", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("PreferenceDialog", "Solar Storage Sizing", 0));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("PreferenceDialog", "Recommended PV System", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        printPushButton->setText(QApplication::translate("PreferenceDialog", "&Print", 0));
        closePushButton->setText(QApplication::translate("PreferenceDialog", "&Close", 0));
    } // retranslateUi

};

namespace Ui {
    class PreferenceDialog: public Ui_PreferenceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCEDIALOG_H

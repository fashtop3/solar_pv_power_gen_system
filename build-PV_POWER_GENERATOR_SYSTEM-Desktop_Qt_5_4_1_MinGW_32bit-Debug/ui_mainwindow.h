/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *newReportPushButton;
    QPushButton *viewRecommendedPushButton;
    QPushButton *printPushButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(708, 504);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/images/solar-energy-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(32, 32));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(381, 71));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        newReportPushButton = new QPushButton(groupBox);
        newReportPushButton->setObjectName(QStringLiteral("newReportPushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(newReportPushButton->sizePolicy().hasHeightForWidth());
        newReportPushButton->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/images/newspaper.png"), QSize(), QIcon::Normal, QIcon::Off);
        newReportPushButton->setIcon(icon1);
        newReportPushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(newReportPushButton);

        viewRecommendedPushButton = new QPushButton(groupBox);
        viewRecommendedPushButton->setObjectName(QStringLiteral("viewRecommendedPushButton"));
        sizePolicy1.setHeightForWidth(viewRecommendedPushButton->sizePolicy().hasHeightForWidth());
        viewRecommendedPushButton->setSizePolicy(sizePolicy1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/images/view.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewRecommendedPushButton->setIcon(icon2);
        viewRecommendedPushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(viewRecommendedPushButton);

        printPushButton = new QPushButton(groupBox);
        printPushButton->setObjectName(QStringLiteral("printPushButton"));
        sizePolicy1.setHeightForWidth(printPushButton->sizePolicy().hasHeightForWidth());
        printPushButton->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/images/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        printPushButton->setIcon(icon3);
        printPushButton->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(printPushButton);


        horizontalLayout_2->addWidget(groupBox);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 708, 21));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QString());
        newReportPushButton->setText(QApplication::translate("MainWindow", "Generate new report", 0));
        viewRecommendedPushButton->setText(QApplication::translate("MainWindow", "View recommended PV system", 0));
        printPushButton->setText(QApplication::translate("MainWindow", "Print", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

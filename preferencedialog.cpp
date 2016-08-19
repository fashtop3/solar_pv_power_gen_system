#include "preferencedialog.h"
#include "ui_preferencedialog.h"


PreferenceDialog::PreferenceDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PreferenceDialog)
{
    ui->setupUi(this);
    ui->printPushButton->setEnabled (false);

    formResourseEstimation = new FormResourseEstimation;
    formLoadAnalysis = new FormLoadAnalysis;
    formPVArraySizing = new FormPVArraySizing;
    formChargeControllerSizing = new FormChargeControllerSizing;
    formInverterSizing = new FormInverterSizing;
    formSolarStorageSizing = new FormSolarStorageSizing;
    formRecomendedPVSystem = new FormRecomendedPVSystem;

    ui->listWidget->setIconSize (QSize(60,60));

    setStackWidgetItems();

    //enable next frame
    connect (formResourseEstimation, &formResourseEstimation->isResolved,
             formLoadAnalysis, &formLoadAnalysis->setEnabled);

    //enable next frame
    connect (formLoadAnalysis, &formLoadAnalysis->isResolved,
             formPVArraySizing, &formPVArraySizing->setEnabled);

     //enable next frame
    connect (formPVArraySizing, &formPVArraySizing->isResolved,
             formChargeControllerSizing, &formChargeControllerSizing->setEnabled);

    //enable next frame
    connect (formChargeControllerSizing, &formChargeControllerSizing->isResolved,
             formInverterSizing, &formInverterSizing->setEnabled);

    //enable next frame
    connect (formInverterSizing, &formInverterSizing->isResolved,
             formSolarStorageSizing, &formSolarStorageSizing->setEnabled);

    connect(ui->listWidget, SIGNAL(currentRowChanged(int)), ui->stackedWidget, SLOT(setCurrentIndex(int)));

    ui->stackedWidget->setCurrentWidget (formLoadAnalysis);

    setWindowTitle ("Power generation preferences");
}

PreferenceDialog::~PreferenceDialog()
{
    delete ui;
}

void PreferenceDialog::setStackWidgetItems()
{
    ui->stackedWidget->addWidget (formResourseEstimation);
    ui->stackedWidget->addWidget (formLoadAnalysis);
    ui->stackedWidget->addWidget (formPVArraySizing);
    ui->stackedWidget->addWidget (formChargeControllerSizing);
    ui->stackedWidget->addWidget (formInverterSizing);
    ui->stackedWidget->addWidget (formSolarStorageSizing);
    ui->stackedWidget->addWidget (formRecomendedPVSystem);
}

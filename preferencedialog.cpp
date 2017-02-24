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
    connect (formResourseEstimation, &FormResourseEstimation::isResolved,
             formLoadAnalysis, &FormLoadAnalysis::setEnabled);

    //enable next frame
    connect (formLoadAnalysis, &FormLoadAnalysis::isResolved,
             formPVArraySizing, &FormPVArraySizing::setEnabled);

     //enable next frame
    connect (formPVArraySizing, &FormPVArraySizing::isResolved,
             formChargeControllerSizing, &FormChargeControllerSizing::setEnabled);

    //enable next frame
    connect (formChargeControllerSizing, &FormChargeControllerSizing::isResolved,
             formInverterSizing, &FormInverterSizing::setEnabled);

    //enable next frame
    connect (formInverterSizing, &FormInverterSizing::isResolved,
             formSolarStorageSizing, &FormSolarStorageSizing::setEnabled);

    connect(ui->listWidget, SIGNAL(currentRowChanged(int)), ui->stackedWidget, SLOT(setCurrentIndex(int)));

    ui->stackedWidget->setCurrentWidget (formLoadAnalysis);

    connections();

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

void PreferenceDialog::connections()
{
    ////////
    /// \brief make connections to recommendation system
    ////////
    connect(formPVArraySizing, SIGNAL(overallModReq(int)), formRecomendedPVSystem, SLOT(onOverallModReq(int)));
    connect(formPVArraySizing, SIGNAL(reqModInSeries(int)), formRecomendedPVSystem, SLOT(onReqModInSeries(int)));
    connect(formPVArraySizing, SIGNAL(reqModInParallel(int)), formRecomendedPVSystem, SLOT(onReqModInParallel(int)));
    connect(formPVArraySizing, SIGNAL(dcSystemVoltage(int)), formRecomendedPVSystem, SLOT(onDcSystemVoltage(int)));
    connect(formPVArraySizing, SIGNAL(dcVoltageSinglePV(double)), formRecomendedPVSystem, SLOT(onDcVoltageSinglePV(double)));
    connect(formPVArraySizing, SIGNAL(dcCurrentSinglePV(double)), formRecomendedPVSystem, SLOT(onDcCurrentSinglePV(double)));


    ////
    /// \brief make connections to charge controller sizing
    ///
    connect(formPVArraySizing, SIGNAL(reqModInParallel(int)), formChargeControllerSizing, SLOT(onReqModInParallel(int)));


    connect(formPVArraySizing, SIGNAL(dcSystemVoltage(int)), formSolarStorageSizing, SLOT(onDcSystemVoltage(int)));

    connect(formLoadAnalysis, SIGNAL(regulation(double)), formSolarStorageSizing, SLOT(onRegulation(double)));
    connect(formLoadAnalysis, SIGNAL(eTotal(double)), formSolarStorageSizing, SLOT(onETotal(double)));

    connect(formLoadAnalysis, SIGNAL(eTotalEnergy(double)), formInverterSizing, SLOT(onETotalEnergy(double)));

    connect(formLoadAnalysis, SIGNAL(eTotalEnergy(double)), formPVArraySizing, SLOT(onETotalEnergy(double)));


    connect(formChargeControllerSizing, SIGNAL(chargeCtrlCurrRating(double)), formRecomendedPVSystem, SLOT(onChargeCtrlCurrRating(double)));

    connect(formSolarStorageSizing, SIGNAL(totalReqBatt(int)), formRecomendedPVSystem, SLOT(onTotalReqBatt(int)));
    connect(formSolarStorageSizing, SIGNAL(totalSeriesBatt(int)), formRecomendedPVSystem, SLOT(onTotalSeriesBatt(int)));
    connect(formSolarStorageSizing, SIGNAL(totalParallelBatt(int)), formRecomendedPVSystem, SLOT(onTotalParallelBatt(int)));
    connect(formSolarStorageSizing, SIGNAL(enablePrintButton(bool)), formRecomendedPVSystem, SLOT(enablePrint(bool)));

    connect(formInverterSizing, SIGNAL(inverterPowerRating(double)), formRecomendedPVSystem, SLOT(onInverterPowerRating(double)));
    connect(formPVArraySizing, SIGNAL(powerOfASinglePV(double)), formRecomendedPVSystem, SLOT(onPowerOfASinglePV(double)));

}

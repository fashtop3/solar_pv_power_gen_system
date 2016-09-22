#include "formrecomendedpvsystem.h"
#include "ui_formrecomendedpvsystem.h"
#include "formresourseestimation.h"
#include "formpvarraysizing.h"
#include "formsolarstoragesizing.h"
#include "forminvertersizing.h"
#include "formchargecontrollersizing.h"

FormRecomendedPVSystem::FormRecomendedPVSystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormRecomendedPVSystem)
{
    ui->setupUi(this);

    ui->printPushButton->setEnabled (false);

    updateUI();

    connect (ui->updatePushButton, SIGNAL(clicked()), this, SLOT(updateUI()));
}

FormRecomendedPVSystem::~FormRecomendedPVSystem()
{
    delete ui;
}

void FormRecomendedPVSystem::inverterFrame()
{
    ui->powerRatingLabel->setText (QString::number (FormInverterSizing::getInverterPowerRating ()));
    ui->systemVoltageLabel->setText (QString::number(FormPVArraySizing::getDcSystemVoltage()));
}

void FormRecomendedPVSystem::chargeControllerFrame()
{
    ui->regulatorVoltageLabel->setText (QString::number(FormPVArraySizing::getDcSystemVoltage()));
    ui->ratedCurrentLabel->setText (QString::number(FormChargeControllerSizing::getChargeCtrlCurrRating()));
}

void FormRecomendedPVSystem::pvArrayFrame()
{
    ui->totalNumberPVModulesLabel->setText (QString::number (FormPVArraySizing::getOverallModReq ()));
    ui->numberOfPVParallelLabel->setText (QString::number (FormPVArraySizing::getReqModInParallel ()));
    ui->numberOfPVSeriesLabel->setText (QString::number (FormPVArraySizing::getReqModInSeries ()));
//    ui->ratedPVVoltageLabel->setText ();
//    ui->ratedCurrentPVSinglePanelLabel->setText ();
//    ui->ratedPowerPVSinglePanelLabel->setText ();
}

void FormRecomendedPVSystem::solarStorageFrame()
{
    ui->totalNumberBatteriesLabel->setText (QString::number (FormSolarStorageSizing::getTotalReqBatt ()));
    ui->numberOfBatteriesInSeriesLabel->setText (QString::number (FormSolarStorageSizing::getTotalSeriesBatt ()));
    ui->numberOfBatteriesInParallelLabel->setText (QString::number (FormSolarStorageSizing::getTotalParallelBatt ()));
//    ui->ratedBatteryVoltageLabel->setText ();
//    ui->ampereCapacityLabel->setText ();
}

void FormRecomendedPVSystem::latitudeFrame()
{
//    ui->latitudeLabel->setText (QString::number (FormResourseEstimation::getLatitude()));
}

void FormRecomendedPVSystem::updateUI()
{
    inverterFrame ();
    chargeControllerFrame ();
    pvArrayFrame ();
    solarStorageFrame ();
    latitudeFrame ();

    ui->printPushButton->setEnabled (true);
}

void FormRecomendedPVSystem::print()
{
    updateUI();
    //TODO: design print to output pdf
}

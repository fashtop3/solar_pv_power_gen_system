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
}

FormRecomendedPVSystem::~FormRecomendedPVSystem()
{
    delete ui;
}

void FormRecomendedPVSystem::enablePrint(bool enable)
{
    ui->printPushButton->setEnabled(enable);
}

void FormRecomendedPVSystem::onOverallModReq(int value)
{
    ui->totalNumberPVModulesLabel->setText (QString::number (value));
}

void FormRecomendedPVSystem::onReqModInSeries(int value)
{
    ui->numberOfPVSeriesLabel->setText (QString::number (value));
}

void FormRecomendedPVSystem::onReqModInParallel(int value)
{
    ui->numberOfPVParallelLabel->setText (QString::number (value));
}

void FormRecomendedPVSystem::onDcSystemVoltage(int value)
{
    ui->regulatorVoltageLabel->setText (QString::number(value) + "V");
    ui->systemVoltageLabel->setText (QString::number(value) + "V");
}

void FormRecomendedPVSystem::onDcVoltageSinglePV(double voltage)
{
    ui->ratedPVVoltageLabel->setText (QString::number(voltage) + "V");
}

void FormRecomendedPVSystem::onDcCurrentSinglePV(double current)
{
    ui->ratedCurrentPVSinglePanelLabel->setText (QString::number(current) + "A");
}

void FormRecomendedPVSystem::onInverterPowerRating(double power)
{
    ui->powerRatingLabel->setText (QString::number (power) + "W");
}

void FormRecomendedPVSystem::onChargeCtrlCurrRating(double chargeCtrlCurr)
{
    ui->ratedCurrentLabel->setText (QString::number(chargeCtrlCurr) + "A");
}

void FormRecomendedPVSystem::onTotalReqBatt(int batteries)
{
    ui->totalNumberBatteriesLabel->setText (QString::number (batteries));
}

void FormRecomendedPVSystem::onTotalSeriesBatt(int batteries)
{
    ui->numberOfBatteriesInSeriesLabel->setText (QString::number (batteries));
}

void FormRecomendedPVSystem::onTotalParallelBatt(int batteries)
{
    ui->numberOfBatteriesInParallelLabel->setText (QString::number (batteries));
}

void FormRecomendedPVSystem::onPowerOfASinglePV(double power)
{
    ui->ratedPowerPVSinglePanelLabel->setText (QString::number (power));
}

void FormRecomendedPVSystem::print()
{
    //TODO: design print to output pdf
}

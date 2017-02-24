#include "formsolarstoragesizing.h"
#include "ui_formsolarstoragesizing.h"
#include "formloadanalysis.h"
#include "formpvarraysizing.h"
#include <QtMath>
#include <QDebug>

FormSolarStorageSizing::FormSolarStorageSizing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormSolarStorageSizing)
{
    ui->setupUi(this);
    setEnabled (false);
    ui->calculatePushButton->setEnabled (false);

    //init static var
    _unadjustedBattCap = 0;
    _adjustedBattCap = 0;
    _totalReqBatt = 0;
    _totalSeriesBatt = 0;
    _totalParallelBatt = 0;

    for(int i = 1; i<=28; i++)
        ui->daysOfAutonnomyComboBox->addItem (QString::number (i));

    for(int j=1; j<=100; j++)
        ui->maxDepthOfDischargeComboBox->addItem (QString::number (j) + "%");

    connect (ui->voltageOfAUnitBatteryVbattLineEdit, SIGNAL(textChanged(QString)),
             this, SLOT(enableCalculateButton()));
    connect (ui->chosenCapacityOfOneBatteryUnitCbLineEdit, SIGNAL(textChanged(QString)),
             this, SLOT(enableCalculateButton()));


    ui->voltageOfAUnitBatteryVbattLineEdit->setValidator (new QDoubleValidator(this));
    ui->chosenCapacityOfOneBatteryUnitCbLineEdit->setValidator (new QDoubleValidator(this));
}

FormSolarStorageSizing::~FormSolarStorageSizing()
{
    delete ui;
}

void FormSolarStorageSizing::onDcSystemVoltage(int value)
{
    systemVoltageDC = value;
}

void FormSolarStorageSizing::onRegulation(double value)
{
    _regulation = value;
}

void FormSolarStorageSizing::on_calculatePushButton_clicked()
{
    // do calculations

    _unadjustedBattCap = ((_eTotal * (ui->daysOfAutonnomyComboBox->currentIndex () + 1)) /
                          ui->voltageOfAUnitBatteryVbattLineEdit->text ().toDouble ());

    double maxDepthOfDischarge = static_cast<double> ((ui->maxDepthOfDischargeComboBox->currentIndex () + 1)) / 100;
//    double regulation = static_cast<double> (FormLoadAnalysis::getRegulation ())/100;

    _adjustedBattCap = ( _unadjustedBattCap  / (maxDepthOfDischarge * _regulation) );
    _totalReqBatt = (qCeil(static_cast<double>(_adjustedBattCap) / ui->chosenCapacityOfOneBatteryUnitCbLineEdit->text ().toDouble ()));
    _totalSeriesBatt = (qCeil (static_cast<double>(systemVoltageDC) / ui->voltageOfAUnitBatteryVbattLineEdit->text ().toDouble ()));
    _totalParallelBatt = (qCeil (static_cast<double>(_totalReqBatt ) / _totalSeriesBatt));

    setLabels (); // set values to the result frame

    emit isResolved (true);
//    emit unadjustedBattCap(_unadjustedBattCap);
//    emit adjustedBattCap(_adjustedBattCap);
    emit totalReqBatt(_totalReqBatt);
    emit totalSeriesBatt(_totalSeriesBatt);
    emit totalParallelBatt(_totalParallelBatt);
    emit enablePrintButton(true);
}

void FormSolarStorageSizing::onETotal(double eTotal)
{
    _eTotal = eTotal;
}

void FormSolarStorageSizing::setLabels()
{
    ui->unadjustedBatteryLabel->setText (QString::number (_unadjustedBattCap));
    ui->adjustedbatteryLabel->setText (QString::number(_adjustedBattCap));
    ui->totalNumberRequiredBatteryLabel->setText (QString::number (_totalReqBatt));
    ui->numberBatteriesInSeriesLabel->setText (QString::number (_totalSeriesBatt));
    ui->numberBatteriesInParallelLabel->setText (QString::number (_totalParallelBatt));
}

void FormSolarStorageSizing::enableCalculateButton()
{
    ui->calculatePushButton->setEnabled (!ui->voltageOfAUnitBatteryVbattLineEdit->text ().isEmpty () &&
                                         !ui->chosenCapacityOfOneBatteryUnitCbLineEdit->text ().isEmpty ());
}

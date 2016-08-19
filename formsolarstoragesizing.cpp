#include "formsolarstoragesizing.h"
#include "ui_formsolarstoragesizing.h"
#include "formloadanalysis.h"
#include "formpvarraysizing.h"
#include <QtMath>
#include <QDebug>

double FormSolarStorageSizing::unadjustedBattCap;
double FormSolarStorageSizing::adjustedBattCap;
int FormSolarStorageSizing::totalReqBatt;
int FormSolarStorageSizing::totalSeriesBatt;
int FormSolarStorageSizing::totalParallelBatt;

FormSolarStorageSizing::FormSolarStorageSizing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormSolarStorageSizing)
{
    ui->setupUi(this);
    setEnabled (false);
    ui->calculatePushButton->setEnabled (false);

    //init static var
    setUnadjustedBattCap (0);
    setAdjustedBattCap (0);
    setTotalReqBatt (0);
    setTotalSeriesBatt (0);
    setTotalParallelBatt (0);

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

void FormSolarStorageSizing::on_calculatePushButton_clicked()
{
    // do calculations

    setUnadjustedBattCap ((FormLoadAnalysis::getETotal () * (ui->daysOfAutonnomyComboBox->currentIndex () + 1)) /
                          ui->voltageOfAUnitBatteryVbattLineEdit->text ().toDouble ());

    double maxDepthOfDischarge = static_cast<double> ((ui->maxDepthOfDischargeComboBox->currentIndex () + 1)) / 100;
//    double regulation = static_cast<double> (FormLoadAnalysis::getRegulation ())/100;
    double regulation = FormLoadAnalysis::getRegulation ();
    setAdjustedBattCap ( getUnadjustedBattCap () / (maxDepthOfDischarge * regulation) );
    setTotalReqBatt (qCeil(static_cast<double>(getAdjustedBattCap ()) / ui->chosenCapacityOfOneBatteryUnitCbLineEdit->text ().toDouble ()));
    setTotalSeriesBatt (qCeil (static_cast<double>(FormPVArraySizing::getDcSystemVoltage ()) / ui->voltageOfAUnitBatteryVbattLineEdit->text ().toDouble ()));
    setTotalParallelBatt (qCeil (static_cast<double>(getTotalReqBatt ()) / getTotalSeriesBatt ()));

    setLabels (); // set values to the result frame

    emit isResolved (true);
}

void FormSolarStorageSizing::setLabels()
{
    ui->unadjustedBatteryLabel->setText (QString::number (getUnadjustedBattCap ()));
    ui->adjustedbatteryLabel->setText (QString::number(getAdjustedBattCap ()));
    ui->totalNumberRequiredBatteryLabel->setText (QString::number (getTotalReqBatt ()));
    ui->numberBatteriesInSeriesLabel->setText (QString::number (getTotalSeriesBatt ()));
    ui->numberBatteriesInParallelLabel->setText (QString::number (getTotalParallelBatt ()));
}

void FormSolarStorageSizing::enableCalculateButton()
{
    ui->calculatePushButton->setEnabled (!ui->voltageOfAUnitBatteryVbattLineEdit->text ().isEmpty () &&
                                         !ui->chosenCapacityOfOneBatteryUnitCbLineEdit->text ().isEmpty ());
}

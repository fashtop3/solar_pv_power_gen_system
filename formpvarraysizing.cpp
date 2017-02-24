#include "formpvarraysizing.h"
#include "ui_formpvarraysizing.h"
#include "formloadanalysis.h"
#include <QtMath>
#include <QDebug>


FormPVArraySizing::FormPVArraySizing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormPVArraySizing)
{
    ui->setupUi(this);
    setEnabled (false);

    _totalPowPvArray = 0;
    _totalRatedCurrPvArray = 0;

    for(int i=1; i<=12; i++)
        ui->minimumPeakSunHoursDayComboBox->addItem (QString::number (i));

    ui->dcCurrentOfASinglePVLineEdit->setValidator (new QDoubleValidator(this));
    ui->dcVoltageOfASinglePVLineEdit->setValidator (new QDoubleValidator(this));
    ui->powerOfASinglePVLineEdit->setValidator (new QDoubleValidator(this));
    ui->calcPushButton->setEnabled (false);
    ui->dc12vRadioButton->setChecked (true);

    connect (ui->dc12vRadioButton, SIGNAL(toggled(bool)), this, SLOT(radioButtonClicked()));
    connect (ui->dc24vRadioButton, SIGNAL(toggled(bool)), this, SLOT(radioButtonClicked()));
    connect (ui->dc48vRadioButton, SIGNAL(toggled(bool)), this, SLOT(radioButtonClicked()));

    ui->dc12vRadioButton->setChecked (true);
    radioButtonClicked ();

    connect (ui->dcCurrentOfASinglePVLineEdit, &QLineEdit::textChanged, this, &FormPVArraySizing::enableCalcPushButton);
    connect (ui->dcVoltageOfASinglePVLineEdit, &QLineEdit::textChanged, this, &FormPVArraySizing::enableCalcPushButton);
}

FormPVArraySizing::~FormPVArraySizing()
{
    delete ui;
}

void FormPVArraySizing::enableCalcPushButton() {
    ui->calcPushButton->setEnabled (!ui->dcCurrentOfASinglePVLineEdit->text ().isEmpty () &&
                                    !ui->dcVoltageOfASinglePVLineEdit->text ().isEmpty ());
}

void FormPVArraySizing::on_calcPushButton_clicked()
{
    //total rated power supplied by pv array
    _totalPowPvArray = _eTotalEnergy / (ui->minimumPeakSunHoursDayComboBox->currentIndex () + 1);
    ui->totalRatedPowerSuppliedPVArrayLabel->setText (QString::number (qCeil(_totalPowPvArray)) + "W");

    //total rated current of pv array
    _totalRatedCurrPvArray = _totalPowPvArray / _dcSystemVoltage;
    ui->totalRatedCurrentPVArrayLabel->setText (QString::number (qCeil(_totalRatedCurrPvArray)) + "A");

    //modules in parallel
    _parallelModule = qCeil(_totalRatedCurrPvArray / ui->dcCurrentOfASinglePVLineEdit->text ().toDouble ());
    _seriesModule = qCeil(_dcSystemVoltage / ui->dcVoltageOfASinglePVLineEdit->text ().toDouble ());
    _allModule = qCeil(_seriesModule * _parallelModule);

    ui->requiredNumberModuleParallellabel->setText (QString::number (_parallelModule));
    ui->requiredNumberModuleSeriesLabel->setText (QString::number (_seriesModule));
    ui->overallNumberModuleReqLabel->setText (QString::number (_allModule));

    emit isResolved(true);
    emit reqModInParallel (_parallelModule);
    emit reqModInSeries (_seriesModule);
    emit overallModReq(_allModule);
    emit dcSystemVoltage(_dcSystemVoltage);
    emit dcVoltageSinglePV(ui->dcVoltageOfASinglePVLineEdit->text ().toDouble ());
    emit dcCurrentSinglePV(ui->dcCurrentOfASinglePVLineEdit->text ().toDouble ());
    emit powerOfASinglePV(ui->powerOfASinglePVLineEdit->text ().toDouble ());
}

void FormPVArraySizing::radioButtonClicked()
{
    if(ui->dc12vRadioButton->isChecked ())
        _dcSystemVoltage = 12;
    else if(ui->dc24vRadioButton->isChecked ())
        _dcSystemVoltage = 24;
    else
        _dcSystemVoltage = 48;
}

void FormPVArraySizing::onETotalEnergy(double eTotalEnergy)
{
    _eTotalEnergy = eTotalEnergy;
}



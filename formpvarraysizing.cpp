#include "formpvarraysizing.h"
#include "ui_formpvarraysizing.h"
#include "formloadanalysis.h"
#include <QtMath>
#include <QDebug>

int    FormPVArraySizing::dcSystemVoltage;
double FormPVArraySizing::totalPowPvArray = 0;
double FormPVArraySizing::totalRatedCurrPvArray = 0;
int    FormPVArraySizing::reqModInParallel = 0;
int    FormPVArraySizing::reqModInSeries = 0;
int    FormPVArraySizing::overallModReq = 0;

FormPVArraySizing::FormPVArraySizing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormPVArraySizing)
{
    ui->setupUi(this);
    setEnabled (false);

    totalPowPvArray = 0;
    totalRatedCurrPvArray = 0;

    setReqModInParallel (0);
    setReqModInSeries (0);
    setOverallModReq (0);

    for(int i=1; i<=12; i++)
        ui->minimumPeakSunHoursDayComboBox->addItem (QString::number (i));

    ui->dcCurrentOfASinglePVLineEdit->setValidator (new QDoubleValidator(this));
    ui->dcVoltageOfASinglePVLineEdit->setValidator (new QDoubleValidator(this));
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
    FormPVArraySizing::totalPowPvArray = FormLoadAnalysis::getETotalEnergy () / (ui->minimumPeakSunHoursDayComboBox->currentIndex () + 1);
    ui->totalRatedPowerSuppliedPVArrayLabel->setText (QString::number (qCeil(FormPVArraySizing::totalPowPvArray)) + "W");

    //total rated current of pv array
    FormPVArraySizing::totalRatedCurrPvArray = FormPVArraySizing::totalPowPvArray / getDcSystemVoltage ();
    ui->totalRatedCurrentPVArrayLabel->setText (QString::number (qCeil(FormPVArraySizing::totalRatedCurrPvArray)) + "A");

    //modules in parallel
    setReqModInParallel (qCeil(FormPVArraySizing::totalRatedCurrPvArray / ui->dcCurrentOfASinglePVLineEdit->text ().toDouble ()));
    ui->requiredNumberModuleParallellabel->setText (QString::number (getReqModInParallel ()));

    //modules in series
    setReqModInSeries (qCeil(getDcSystemVoltage() / ui->dcVoltageOfASinglePVLineEdit->text ().toDouble ()));
    ui->requiredNumberModuleSeriesLabel->setText (QString::number (getReqModInSeries ()));

    //overall
    setOverallModReq (qCeil(FormPVArraySizing::reqModInSeries * FormPVArraySizing::reqModInParallel));
    ui->overallNumberModuleReqLabel->setText (QString::number (getOverallModReq ()));

    emit isResolved(true);
}

int FormPVArraySizing::getOverallModReq()
{
    return overallModReq;
}

void FormPVArraySizing::setOverallModReq(int value)
{
    overallModReq = value;
}

void FormPVArraySizing::radioButtonClicked()
{
    if(ui->dc12vRadioButton->isChecked ())
        setDcSystemVoltage (12);
    else if(ui->dc24vRadioButton->isChecked ())
        setDcSystemVoltage (24);
    else
        setDcSystemVoltage (48);
}

int FormPVArraySizing::getReqModInSeries()
{
    return reqModInSeries;
}

void FormPVArraySizing::setReqModInSeries(int value)
{
    reqModInSeries = value;
}

int FormPVArraySizing::getReqModInParallel()
{
    return reqModInParallel;
}

void FormPVArraySizing::setReqModInParallel(int value)
{
    reqModInParallel = value;
}

int FormPVArraySizing::getDcSystemVoltage()
{
    return dcSystemVoltage;
}

void FormPVArraySizing::setDcSystemVoltage(int value)
{
    dcSystemVoltage = value;
}




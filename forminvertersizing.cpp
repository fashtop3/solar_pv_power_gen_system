#include "forminvertersizing.h"
#include "ui_forminvertersizing.h"
#include <formloadanalysis.h>

//int FormInverterSizing::acSyatemVoltage;

int FormInverterSizing::acSystemVoltage;
double FormInverterSizing::inverterPowerRating;
double FormInverterSizing::inverterCurrentRating;

FormInverterSizing::FormInverterSizing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormInverterSizing)
{
    ui->setupUi(this);
    setEnabled (false);

    for(auto i = 0.01; i<1.01; i += 0.01)
        ui->overallComboBox->addItem (QString::number ((double) i));

    connect(ui->ac120vRadioButton, static_cast<void (QRadioButton::*) (bool)>
                     (&ui->ac120vRadioButton->clicked), this, &this->acRadioChanged);
    connect (ui->ac240vRadioButton, static_cast<void (QRadioButton::*) (bool)>
                     (&ui->ac240vRadioButton->clicked), this, &this->acRadioChanged);

    ui->ac120vRadioButton->setChecked (true);
    acRadioChanged ();

    setInverterPowerRating (0);
    setInverterCurrentRating (0);
}

FormInverterSizing::~FormInverterSizing()
{
    delete ui;
}

void FormInverterSizing::acRadioChanged()
{
    if(ui->ac120vRadioButton->isChecked ())
        setAcSystemVoltage (120);

    else //if(ui->ac240vRadioButton->isChecked ())
        setAcSystemVoltage (240);
}
double FormInverterSizing::getInverterCurrentRating()
{
    return inverterCurrentRating;
}

void FormInverterSizing::setInverterCurrentRating(double value)
{
    inverterCurrentRating = value;
}


int FormInverterSizing::getAcSystemVoltage()
{
    return acSystemVoltage;
}

void FormInverterSizing::setAcSystemVoltage(int value)
{
    acSystemVoltage = value;
}


void FormInverterSizing::on_calculatePushButton_clicked()
{
    setInverterPowerRating (FormLoadAnalysis::getETotalEnergy () * 1.25);
    setInverterCurrentRating (getInverterPowerRating () /
                              (getAcSystemVoltage () * ui->overallComboBox->currentText ().toDouble ()) );

    ui->inverterPowerLabel->setText (QString::number (getInverterPowerRating ()) + "W");
    ui->inverterCurrentLabel->setText (QString::number (getInverterCurrentRating ()) + "A");

    emit isResolved(true);
}

double FormInverterSizing::getInverterPowerRating()
{
    return inverterPowerRating;
}

void FormInverterSizing::setInverterPowerRating(double value)
{
    inverterPowerRating = value;
}


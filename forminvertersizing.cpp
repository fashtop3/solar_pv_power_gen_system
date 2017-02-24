#include "forminvertersizing.h"
#include "ui_forminvertersizing.h"
#include <formloadanalysis.h>

//int FormInverterSizing::acSyatemVoltage;


FormInverterSizing::FormInverterSizing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormInverterSizing)
{
    ui->setupUi(this);
    setEnabled (false);

    for(auto i = 0.01; i<1.01; i += 0.01)
        ui->overallComboBox->addItem (QString::number ((double) i));

    connect(ui->ac120vRadioButton, static_cast<void (QRadioButton::*) (bool)>
                     (&QRadioButton::clicked), this, &FormInverterSizing::acRadioChanged);
    connect (ui->ac240vRadioButton, static_cast<void (QRadioButton::*) (bool)>
                     (&QRadioButton::clicked), this, &FormInverterSizing::acRadioChanged);

    ui->ac120vRadioButton->setChecked (true);
    acRadioChanged ();

    _inverterPowerRating = 0;
    _inverterCurrentRating = 0;
}

FormInverterSizing::~FormInverterSizing()
{
    delete ui;
}

void FormInverterSizing::acRadioChanged()
{
    if(ui->ac120vRadioButton->isChecked ())
        _acSystemVoltage = 120;

    else //if(ui->ac240vRadioButton->isChecked ())
        _acSystemVoltage = 240;

    emit acSystemVoltage(_acSystemVoltage);
}

void FormInverterSizing::on_calculatePushButton_clicked()
{
    _inverterPowerRating = (_eTotalEnergy * 1.25);
    _inverterCurrentRating = (_inverterPowerRating /
                              (_acSystemVoltage * ui->overallComboBox->currentText ().toDouble ()) );

    ui->inverterPowerLabel->setText (QString::number (_inverterPowerRating) + "W");
    ui->inverterCurrentLabel->setText (QString::number (_inverterCurrentRating) + "A");

    emit isResolved(true);
    emit inverterPowerRating(_inverterPowerRating);
    emit inverterCurrentRating(_inverterCurrentRating);
}

void FormInverterSizing::onETotalEnergy(double value)
{
    _eTotalEnergy = value;
}

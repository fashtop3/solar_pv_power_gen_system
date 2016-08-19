#include "formchargecontrollersizing.h"
#include "ui_formchargecontrollersizing.h"
#include <formpvarraysizing.h>

double FormChargeControllerSizing::chargeCtrlCurrRating;

FormChargeControllerSizing::FormChargeControllerSizing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormChargeControllerSizing)
{
    ui->setupUi(this);

    setChargeCtrlCurrRating (0);
    setEnabled (false);
}

FormChargeControllerSizing::~FormChargeControllerSizing()
{
    delete ui;
}

void FormChargeControllerSizing::on_calculatePushButton_clicked()
{
    setChargeCtrlCurrRating (FormPVArraySizing::getReqModInParallel () *
                             ui->shortCircuitCurrentIscLineEdit->text ().toDouble () *
                             ui->safeFactornFsLineEdit->text ().toDouble ());

    ui->solarChargeControllerCurrentLabel->setText (QString::number (getChargeCtrlCurrRating ()) + "A");

    emit isResolved(true);
}

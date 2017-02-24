#include "formchargecontrollersizing.h"
#include "ui_formchargecontrollersizing.h"
#include <formpvarraysizing.h>

FormChargeControllerSizing::FormChargeControllerSizing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormChargeControllerSizing)
{
    ui->setupUi(this);

    _chargeCtrlCurrRating = 0;
    setEnabled (false);
}

FormChargeControllerSizing::~FormChargeControllerSizing()
{
    delete ui;
}

void FormChargeControllerSizing::onReqModInParallel(int value)
{
    _reqModInParallel = value;
}

void FormChargeControllerSizing::on_calculatePushButton_clicked()
{
    _chargeCtrlCurrRating = (_reqModInParallel *
                             ui->shortCircuitCurrentIscLineEdit->text ().toDouble () *
                             ui->safeFactornFsLineEdit->text ().toDouble ());

    ui->solarChargeControllerCurrentLabel->setText (QString::number (_chargeCtrlCurrRating) + "A");

    emit isResolved(true);
    emit chargeCtrlCurrRating(_chargeCtrlCurrRating);
}

#include "formchargecontrollersizing.h"
#include "ui_formchargecontrollersizing.h"

FormChargeControllerSizing::FormChargeControllerSizing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormChargeControllerSizing)
{
    ui->setupUi(this);
}

FormChargeControllerSizing::~FormChargeControllerSizing()
{
    delete ui;
}

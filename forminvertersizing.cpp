#include "forminvertersizing.h"
#include "ui_forminvertersizing.h"

FormInverterSizing::FormInverterSizing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormInverterSizing)
{
    ui->setupUi(this);
}

FormInverterSizing::~FormInverterSizing()
{
    delete ui;
}

#include "formsolarstoragesizing.h"
#include "ui_formsolarstoragesizing.h"

FormSolarStorageSizing::FormSolarStorageSizing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormSolarStorageSizing)
{
    ui->setupUi(this);
}

FormSolarStorageSizing::~FormSolarStorageSizing()
{
    delete ui;
}

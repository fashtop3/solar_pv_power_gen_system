#include "formpvarraysizing.h"
#include "ui_formpvarraysizing.h"

FormPVArraySizing::FormPVArraySizing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormPVArraySizing)
{
    ui->setupUi(this);
}

FormPVArraySizing::~FormPVArraySizing()
{
    delete ui;
}

#include "formrecomendedpvsystem.h"
#include "ui_formrecomendedpvsystem.h"

FormRecomendedPVSystem::FormRecomendedPVSystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormRecomendedPVSystem)
{
    ui->setupUi(this);
}

FormRecomendedPVSystem::~FormRecomendedPVSystem()
{
    delete ui;
}

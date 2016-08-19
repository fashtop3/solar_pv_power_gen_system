#include "formresourseestimation.h"
#include "ui_formresourseestimation.h"

FormResourseEstimation::FormResourseEstimation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormResourseEstimation)
{
    ui->setupUi(this);
}

FormResourseEstimation::~FormResourseEstimation()
{
    delete ui;
}

#include "formloadanalysis.h"
#include "ui_formloadanalysis.h"

FormLoadAnalysis::FormLoadAnalysis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormLoadAnalysis)
{
    ui->setupUi(this);
}

FormLoadAnalysis::~FormLoadAnalysis()
{
    delete ui;
}

#include "preferencedialog.h"
#include "ui_preferencedialog.h"

preferenceDialog::preferenceDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preferenceDialog)
{
    ui->setupUi(this);
}

preferenceDialog::~preferenceDialog()
{
    delete ui;
}

#ifndef PREFERENCEDIALOG_H
#define PREFERENCEDIALOG_H

#include "formchargecontrollersizing.h"
#include "forminvertersizing.h"
#include "formloadanalysis.h"
#include "formpvarraysizing.h"
#include "formrecomendedpvsystem.h"
#include "formresourseestimation.h"
#include "formsolarstoragesizing.h"

#include <QDialog>

namespace Ui {
class PreferenceDialog;
}

class PreferenceDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PreferenceDialog(QWidget *parent = 0);
    ~PreferenceDialog();

protected:
    void connections();
private:
    void setStackWidgetItems();

private:
    Ui::PreferenceDialog *ui;

    FormResourseEstimation *formResourseEstimation;
    FormLoadAnalysis *formLoadAnalysis;
    FormPVArraySizing *formPVArraySizing;
    FormChargeControllerSizing *formChargeControllerSizing;
    FormInverterSizing *formInverterSizing;
    FormSolarStorageSizing *formSolarStorageSizing;
    FormRecomendedPVSystem *formRecomendedPVSystem;
};

#endif // PREFERENCEDIALOG_H

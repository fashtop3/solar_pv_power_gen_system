#ifndef FORMCHARGECONTROLLERSIZING_H
#define FORMCHARGECONTROLLERSIZING_H

#include <QWidget>

namespace Ui {
class FormChargeControllerSizing;
}

class FormChargeControllerSizing : public QWidget
{
    Q_OBJECT

public:
    explicit FormChargeControllerSizing(QWidget *parent = 0);
    ~FormChargeControllerSizing();

signals:
    void isResolved(bool resolve);
    void chargeCtrlCurrRating(double chargeCtrlCurr);

public slots:
    void onReqModInParallel (int value);

private slots:
    void on_calculatePushButton_clicked();

private:
    Ui::FormChargeControllerSizing *ui;

    double _chargeCtrlCurrRating;
    int _reqModInParallel;
};

#endif // FORMCHARGECONTROLLERSIZING_H

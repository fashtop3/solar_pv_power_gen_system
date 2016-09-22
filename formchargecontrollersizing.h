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

    static double getChargeCtrlCurrRating() { return chargeCtrlCurrRating; }
    static void setChargeCtrlCurrRating(double value) { chargeCtrlCurrRating = value; }

signals:
    void isResolved(bool resolve);

private slots:
    void on_calculatePushButton_clicked();

private:
    Ui::FormChargeControllerSizing *ui;

    static double chargeCtrlCurrRating;
};

#endif // FORMCHARGECONTROLLERSIZING_H

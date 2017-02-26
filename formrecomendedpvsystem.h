#ifndef FORMRECOMENDEDPVSYSTEM_H
#define FORMRECOMENDEDPVSYSTEM_H

#include <QWidget>

namespace Ui {
class FormRecomendedPVSystem;
}

class FormRecomendedPVSystem : public QWidget
{
    Q_OBJECT

public:
    explicit FormRecomendedPVSystem(QWidget *parent = 0);
    ~FormRecomendedPVSystem();

public slots:
    void enablePrint(bool enable);
    void print();

public slots:
    void onOverallModReq(int value);
    void onReqModInSeries (int value);
    void onReqModInParallel (int value);
    void onDcSystemVoltage(int value);
    void onDcVoltageSinglePV(double voltage);
    void onDcCurrentSinglePV(double current);
    void onInverterPowerRating (double power);
    void onChargeCtrlCurrRating(double chargeCtrlCurr);
    void onTotalReqBatt(int batteries);
    void onTotalSeriesBatt(int batteries);
    void onTotalParallelBatt(int batteries);
    void onETotalEnergy(double eTotal);
    void onDaysOfAutonomy(QString days);
    void onUnitBatteryCapacity(QString unit);
//    void onRegulatorVoltage(int voltage);

    void onPowerOfASinglePV(double power);
private slots:
    void on_printPushButton_clicked();

private:
    Ui::FormRecomendedPVSystem *ui;
    double _eTotal;
    QString _days_of_autonomy;
    QString _unit_batt_voltage;

};

#endif // FORMRECOMENDEDPVSYSTEM_H

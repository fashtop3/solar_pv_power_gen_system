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
//    void onRegulatorVoltage(int voltage);

    void onPowerOfASinglePV(double power);
private:
    Ui::FormRecomendedPVSystem *ui;

};

#endif // FORMRECOMENDEDPVSYSTEM_H

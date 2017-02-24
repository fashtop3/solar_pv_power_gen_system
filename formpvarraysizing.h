#ifndef FORMPVARRAYSIZING_H
#define FORMPVARRAYSIZING_H

#include <QWidget>

namespace Ui {
class FormPVArraySizing;
}

class FormPVArraySizing : public QWidget
{
    Q_OBJECT

public:
    explicit FormPVArraySizing(QWidget *parent = 0);
    ~FormPVArraySizing();

signals:
    void isResolved(bool resolve);
    void overallModReq(int value);
    void reqModInSeries (int value);
    void reqModInParallel (int value);
    void dcSystemVoltage(int value);
    void dcVoltageSinglePV(double value);
    void dcCurrentSinglePV(double value);
    void powerOfASinglePV(double value);

private slots:
    void onETotalEnergy(double eTotalEnergy);
    void radioButtonClicked();

    void on_calcPushButton_clicked();

private:
    Ui::FormPVArraySizing *ui;

    int _seriesModule;
    int _parallelModule;
    int _allModule;
    int _dcSystemVoltage;

    double _totalPowPvArray;
    double _totalRatedCurrPvArray;
    double _eTotalEnergy;

private:
    void enableCalcPushButton();
};


#endif // FORMPVARRAYSIZING_H

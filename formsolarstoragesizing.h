#ifndef FORMSOLARSTORAGESIZING_H
#define FORMSOLARSTORAGESIZING_H

#include <QWidget>

namespace Ui {
class FormSolarStorageSizing;
}

class FormSolarStorageSizing : public QWidget
{
    Q_OBJECT

public:
    explicit FormSolarStorageSizing(QWidget *parent = 0);
    ~FormSolarStorageSizing();

signals:
    void isResolved(bool);
//    void unadjustedBattCap(double uBattCap);
//    void adjustedBattCap(double aBattCap);
    void totalReqBatt(int tReqBatt);
    void totalSeriesBatt(int tSeriesBatt);
    void totalParallelBatt(int tParallelBatt);
    void enablePrintButton(bool enable);
    void daysOfAutonomy(QString days);
    void capacityOfOneBatteryUnitCb(QString voltage);

public slots:
    void onDcSystemVoltage(int value);
    void onRegulation(double value);


private slots:
    void on_calculatePushButton_clicked();
    void onETotal(double eTotal);

    void enableCalculateButton();
private:
    Ui::FormSolarStorageSizing *ui;

    double _unadjustedBattCap;
    double _adjustedBattCap;
    int _totalReqBatt;
    int _totalSeriesBatt;
    int _totalParallelBatt;

    int systemVoltageDC;

private:
    void setLabels();

    double _regulation;
    double _eTotal;
};

#endif // FORMSOLARSTORAGESIZING_H

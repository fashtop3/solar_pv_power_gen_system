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

    static double getUnadjustedBattCap(){ return unadjustedBattCap; }
    static void setUnadjustedBattCap(double value) {  unadjustedBattCap = value; }

    static double getAdjustedBattCap() { return adjustedBattCap; }
    static void setAdjustedBattCap(double value) { adjustedBattCap = value; }

    static int getTotalReqBatt(){ return totalReqBatt; }
    static void setTotalReqBatt(int value) { totalReqBatt = value; }

    static int getTotalSeriesBatt() { return totalSeriesBatt; }
    static void setTotalSeriesBatt(int value) { totalSeriesBatt = value; }

    static int getTotalParallelBatt(){ return totalParallelBatt; }
    static void setTotalParallelBatt(int value) { totalParallelBatt = value; }

signals:
    void isResolved(bool);

private slots:
    void on_calculatePushButton_clicked();

    void enableCalculateButton();
private:
    Ui::FormSolarStorageSizing *ui;

    static double unadjustedBattCap;
    static double adjustedBattCap;
    static int totalReqBatt;
    static int totalSeriesBatt;
    static int totalParallelBatt;

private:
    void setLabels();
};

#endif // FORMSOLARSTORAGESIZING_H

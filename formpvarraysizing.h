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

    static int getDcSystemVoltage();
    static void setDcSystemVoltage(int value);

    static int getReqModInParallel();
    static void setReqModInParallel(int value);

    static int getReqModInSeries();
    static void setReqModInSeries(int value);

    static int getOverallModReq();
    static void setOverallModReq(int value);

signals:
    void isResolved(bool resolve);

private slots:
    void radioButtonClicked();

    void on_calcPushButton_clicked();

private:
    Ui::FormPVArraySizing *ui;

    static int dcSystemVoltage;

    static double totalPowPvArray;
    static double totalRatedCurrPvArray;

    static int reqModInParallel;
    static int reqModInSeries;
    static int overallModReq;

private:
    void enableCalcPushButton();
};


#endif // FORMPVARRAYSIZING_H

#ifndef FORMLOADANALYSIS_H
#define FORMLOADANALYSIS_H

#include <QWidget>

namespace Ui {
class FormLoadAnalysis;
}

class FormLoadAnalysis : public QWidget
{
    Q_OBJECT

public:
    explicit FormLoadAnalysis(QWidget *parent = 0);
    ~FormLoadAnalysis();

    static double getETotal();
    static void setETotal(double value);

    static double getETotalEnergy();
    static void setETotalEnergy(double value);

//    static int getRegulation();
//    static void setRegulation(int value);

    static QString getLoad() { return load; }
    static void setLoad(const QString &value) { load = value; }

    static double getRegulation();
    static void setRegulation(double value);

signals:
    void isResolved(bool resolve);

private slots:

    void on_addPushButton_clicked();

    void on_deletePushButton_clicked();

    void on_resetPushButton_clicked();

    void on_calcPushButton_clicked();
    void cellChanged(int row, int col);
    void enableDeleteButton(int row, int col);

    void calculateEtotal();
    void on_regulationComboBox_currentTextChanged(const QString &arg1);

private:
    Ui::FormLoadAnalysis *ui;

    enum {
        APPLIANCE_COL = 0,
        UNIT_COL,
        POWER_COL,
        USAGE_COL,
        ENEREGY_COL
    };

    static double eTotal;
    static double eTotalEnergy;
    static double regulation;
    static QString load;
};

#endif // FORMLOADANALYSIS_H

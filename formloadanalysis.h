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

signals:
    void isResolved(bool resolve);
    void regulation(double value);
    void eTotal(double value);
    void eTotalEnergy(double value);
    void load(QString value);

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

    double _eTotal;
    double _eTotalEnergy;
    double _regulation;
    QString _load;
};

#endif // FORMLOADANALYSIS_H

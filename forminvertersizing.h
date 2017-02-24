#ifndef FORMINVERTERSIZING_H
#define FORMINVERTERSIZING_H

#include <QWidget>

namespace Ui {
class FormInverterSizing;
}

class FormInverterSizing : public QWidget
{
    Q_OBJECT

public:
    explicit FormInverterSizing(QWidget *parent = 0);
    ~FormInverterSizing();

signals:
    void isResolved(bool resolved);
    void inverterPowerRating(double power);
    void inverterCurrentRating(double current);
    void acSystemVoltage(int voltage);

private slots:
    void on_calculatePushButton_clicked();
    void onETotalEnergy(double value);

    void acRadioChanged();

private:
    Ui::FormInverterSizing *ui;

    int _acSystemVoltage;
    double _inverterPowerRating;
    double _inverterCurrentRating;

    double _eTotalEnergy;
};

#endif // FORMINVERTERSIZING_H

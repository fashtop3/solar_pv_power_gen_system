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

    static int getAcSystemVoltage();
    static void setAcSystemVoltage(int value);

    static double getInverterPowerRating();
    static void setInverterPowerRating(double value);

    static double getInverterCurrentRating();
    static void setInverterCurrentRating(double value);

signals:
    void isResolved(bool resolved);

private slots:
    void on_calculatePushButton_clicked();

    void acRadioChanged();

private:
    Ui::FormInverterSizing *ui;

    static int acSystemVoltage;
    static double inverterPowerRating;
    static double inverterCurrentRating;
};

#endif // FORMINVERTERSIZING_H

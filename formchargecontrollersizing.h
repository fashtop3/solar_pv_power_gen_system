#ifndef FORMCHARGECONTROLLERSIZING_H
#define FORMCHARGECONTROLLERSIZING_H

#include <QWidget>

namespace Ui {
class FormChargeControllerSizing;
}

class FormChargeControllerSizing : public QWidget
{
    Q_OBJECT

public:
    explicit FormChargeControllerSizing(QWidget *parent = 0);
    ~FormChargeControllerSizing();

private:
    Ui::FormChargeControllerSizing *ui;
};

#endif // FORMCHARGECONTROLLERSIZING_H

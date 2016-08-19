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

private:
    Ui::FormInverterSizing *ui;
};

#endif // FORMINVERTERSIZING_H

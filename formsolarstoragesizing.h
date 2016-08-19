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

private:
    Ui::FormSolarStorageSizing *ui;
};

#endif // FORMSOLARSTORAGESIZING_H

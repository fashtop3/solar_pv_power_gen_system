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

private:
    Ui::FormPVArraySizing *ui;
};

#endif // FORMPVARRAYSIZING_H

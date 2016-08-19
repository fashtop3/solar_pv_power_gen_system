#ifndef FORMRECOMENDEDPVSYSTEM_H
#define FORMRECOMENDEDPVSYSTEM_H

#include <QWidget>

namespace Ui {
class FormRecomendedPVSystem;
}

class FormRecomendedPVSystem : public QWidget
{
    Q_OBJECT

public:
    explicit FormRecomendedPVSystem(QWidget *parent = 0);
    ~FormRecomendedPVSystem();

private:
    Ui::FormRecomendedPVSystem *ui;
};

#endif // FORMRECOMENDEDPVSYSTEM_H

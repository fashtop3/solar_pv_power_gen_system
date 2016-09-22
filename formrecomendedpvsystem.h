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

public slots:
    void inverterFrame();
    void chargeControllerFrame();
    void pvArrayFrame();
    void solarStorageFrame();
    void latitudeFrame();

    void print();
    void updateUI();

private:
    Ui::FormRecomendedPVSystem *ui;

};

#endif // FORMRECOMENDEDPVSYSTEM_H

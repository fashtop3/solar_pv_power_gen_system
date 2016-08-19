#ifndef FORMRESOURSEESTIMATION_H
#define FORMRESOURSEESTIMATION_H

#include <QWidget>

namespace Ui {
class FormResourseEstimation;
}

class FormResourseEstimation : public QWidget
{
    Q_OBJECT

public:
    explicit FormResourseEstimation(QWidget *parent = 0);
    ~FormResourseEstimation();

private:
    Ui::FormResourseEstimation *ui;
};

#endif // FORMRESOURSEESTIMATION_H

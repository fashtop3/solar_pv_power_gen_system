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

    static double &getLatitude();
    static void setLatitude(double value);

signals:
    void isResolved(bool resolve);

private slots:
    void enableEstimatePushButton(QString str);
    void on_estimatePushButton_clicked();

    void on_latitudeLineEdit_textChanged(const QString &arg1);

private:
    QString getEstimate(int n, float angle);

private:
    Ui::FormResourseEstimation *ui;

    static double latitude;

};

#endif // FORMRESOURSEESTIMATION_H

#include "formresourseestimation.h"
#include "ui_formresourseestimation.h"
#include <QtMath>
#include <QDebug>

double FormResourseEstimation::latitude;

FormResourseEstimation::FormResourseEstimation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormResourseEstimation)
{
    ui->setupUi(this);

    setLatitude (0);

    connect(ui->latitudeLineEdit, SIGNAL(textChanged(QString)), this, SLOT(enableEstimatePushButton(QString)));
    ui->estimatePushButton->setEnabled (false);
    ui->latitudeLineEdit->setValidator ((new QDoubleValidator(this)));

}

FormResourseEstimation::~FormResourseEstimation()
{
    delete ui;
}

void FormResourseEstimation::enableEstimatePushButton(QString str)
{
    ui->estimatePushButton->setEnabled (!str.isEmpty ());
}

void FormResourseEstimation::on_estimatePushButton_clicked()
{
    ui->janLabel->setText (getEstimate(17, -20.9));
    ui->febLabel->setText (getEstimate (47, -13.0));
    ui->marchLabel->setText (getEstimate (75, -2.4));
    ui->aprilLabel->setText (getEstimate (105, 9.4));
    ui->mayLabel->setText (getEstimate (135, 18.8));
    ui->juneLabel->setText (getEstimate (162, 23.1));
    ui->julyLabel->setText (getEstimate (198, 21.2));
    ui->augLabel->setText (getEstimate (228, 13.5));
    ui->septLabel->setText (getEstimate (258, 2.2));
    ui->octLabel->setText (getEstimate (288, -9.6));
    ui->novLabel->setText (getEstimate (318, 18.9));
    ui->decLabel->setText (getEstimate (344, -23.0));
}

QString FormResourseEstimation::getEstimate(int n, float angle)
{
    double latitude = ui->latitudeLineEdit->text ().toDouble ();
//    qDebug() << "latitude " << latitude;

    double hour_angle = qAcos(-qTan (latitude) * qTan(angle));
//    qDebug() << "hour angle " << hour_angle;

    double solar_constant = (24*3600)/3.142;
//    qDebug() << "Solar const " << solar_constant;

    double n_const = (1 + 0.033 * qCos((360*n)/365) );
//    qDebug() << "n const " << n_const;

    double hour_angle_const = (qCos(latitude)*qCos(angle)*qCos(hour_angle)) + ((3.142)*hour_angle*qSin(latitude)*qSin(angle))/180;
//    qDebug() << "hour Angle const " << hour_angle_const;

    double monthly = solar_constant * n_const * hour_angle_const;
//    qDebug() << "monthly " << monthly;

    emit isResolved(true);
    return QString::number(monthly);
}
double &FormResourseEstimation::getLatitude()
{
    return latitude;
}

void FormResourseEstimation::setLatitude(double value)
{
    latitude = value;
}


void FormResourseEstimation::on_latitudeLineEdit_textChanged(const QString &arg1)
{
    setLatitude(arg1.toDouble ());
}

#include "mainwindow.h"
#include <QApplication>
#include <QtMath>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

//    double lat_result = -qTan (qDegreesToRadians(float(43)));
//    double angle_result = qTan(qDegreesToRadians(float(9.4)));

//    double arc_calc = (lat_result * angle_result);

//    double hour_angle = qRadiansToDegrees(qAcos((arc_calc)));


//    double solar_constant = (24*3600*1367)/3.142;

//    ////////////
//    /// \brief solar_constant
//    /// Left side calculations
//    ////////////

//    double n_const = (1 + 0.033 * qCos( qDegreesToRadians(float((360*105)/365))) );


//    /////////
//    /// \brief hour_angle_const
//    /// Right side calculations
//    //////

//    double r1 = qCos(qDegreesToRadians(float(43))) ;
//    double r2 = qCos(qDegreesToRadians(float(9.4)));
//    double r3 = qSin(qDegreesToRadians(float(hour_angle)));

//    double r4 = qSin(qDegreesToRadians(float(43)));
//    double r5 = qSin(qDegreesToRadians(float(9.4)));

//    double hour_angle_const = ( r1*r2*r3 ) + ( ( (3.142)*hour_angle*r4*r5)/180 );

//    double monthly = solar_constant * n_const * hour_angle_const;



//    qDebug() << lat_result << angle_result << hour_angle;

    w.show();

    return a.exec();
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->viewRecommendedPushButton->setEnabled (false);

    QPalette *palette = new QPalette();
    palette->setBrush(QPalette::Background,*(new QBrush(*(new QPixmap(":/resources/images/solar_background.jpg")))));
    setPalette(*palette);

    preferenceDialog = 0;

//    setWindowFlags(Qt::FramelessWindowHint);

    setFixedSize (QSize(708, 504));
    setWindowTitle ("PV Power generation system");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_newReportPushButton_clicked()
{
    preferenceDialog = new PreferenceDialog(this);
    ui->viewRecommendedPushButton->setEnabled (true );
    preferenceDialog->exec ();
}

void MainWindow::on_viewRecommendedPushButton_clicked()
{
    if(preferenceDialog) {
        preferenceDialog->exec ();
    }
}

void MainWindow::on_printPushButton_clicked()
{
    if(preferenceDialog) {
       preferenceDialog->exec ();
    }
}

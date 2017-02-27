#include "formrecomendedpvsystem.h"
#include "ui_formrecomendedpvsystem.h"
#include "formresourseestimation.h"
#include "formpvarraysizing.h"
#include "formsolarstoragesizing.h"
#include "forminvertersizing.h"
#include "formchargecontrollersizing.h"
#include <QPrinter>
#include <QTextDocument>
#include <QFileInfo>
#include <QFileDialog>
#include <QMessageBox>

FormRecomendedPVSystem::FormRecomendedPVSystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormRecomendedPVSystem)
{
    ui->setupUi(this);

    ui->printPushButton->setEnabled (false);
}

FormRecomendedPVSystem::~FormRecomendedPVSystem()
{
    delete ui;
}

void FormRecomendedPVSystem::enablePrint(bool enable)
{
    ui->printPushButton->setEnabled(enable);
}

void FormRecomendedPVSystem::onOverallModReq(int value)
{
    ui->totalNumberPVModulesLabel->setText (QString::number (value));
}

void FormRecomendedPVSystem::onReqModInSeries(int value)
{
    ui->numberOfPVSeriesLabel->setText (QString::number (value));
}

void FormRecomendedPVSystem::onReqModInParallel(int value)
{
    ui->numberOfPVParallelLabel->setText (QString::number (value));
}

void FormRecomendedPVSystem::onDcSystemVoltage(int value)
{
    ui->regulatorVoltageLabel->setText (QString::number(value) + "V");
    ui->systemVoltageLabel->setText (QString::number(value) + "V");
}

void FormRecomendedPVSystem::onDcVoltageSinglePV(double voltage)
{
    ui->ratedPVVoltageLabel->setText (QString::number(voltage) + "V");
}

void FormRecomendedPVSystem::onDcCurrentSinglePV(double current)
{
    ui->ratedCurrentPVSinglePanelLabel->setText (QString::number(current) + "A");
}

void FormRecomendedPVSystem::onInverterPowerRating(double power)
{
    ui->powerRatingLabel->setText (QString::number (power) + "W");
}

void FormRecomendedPVSystem::onChargeCtrlCurrRating(double chargeCtrlCurr)
{
    ui->ratedCurrentLabel->setText (QString::number(chargeCtrlCurr) + "A");
}

void FormRecomendedPVSystem::onTotalReqBatt(int batteries)
{
    ui->totalNumberBatteriesLabel->setText (QString::number (batteries));
}

void FormRecomendedPVSystem::onTotalSeriesBatt(int batteries)
{
    ui->numberOfBatteriesInSeriesLabel->setText (QString::number (batteries));
}

void FormRecomendedPVSystem::onTotalParallelBatt(int batteries)
{
    ui->numberOfBatteriesInParallelLabel->setText (QString::number (batteries));
}

void FormRecomendedPVSystem::onETotalEnergy(double eTotal)
{
    _eTotal = eTotal;
}

void FormRecomendedPVSystem::onDaysOfAutonomy(QString days)
{
    _days_of_autonomy = days;
}

void FormRecomendedPVSystem::onCapacityOfOneBatteryUnitCb(QString unit)
{
    _battery_unit_cb = unit;
}

void FormRecomendedPVSystem::onPowerOfASinglePV(double power)
{
    ui->ratedPowerPVSinglePanelLabel->setText (QString::number (power));
}

void FormRecomendedPVSystem::print()
{
    //TODO: design print to output pdf
}

void FormRecomendedPVSystem::on_printPushButton_clicked()
{
    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
    if (fileName.isEmpty()) return;
    if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(fileName);
    printer.setPageMargins(QMarginsF(70, 15, 15, 15));

    QTextDocument doc;
    QString header = "<img width=60 height=60 src=\":/resources/images/hanged.jpg\" /><h3 style=\"margin-top:10px;\" align='center'>PV REPORT POWER GENERATION SYSTEM</h3>";

    QString requirements = QString("<div style=\"margin-left:20px; font-size:medium;\">"
                                   "<h4><u>Requirements</u></h4>"
                                   "<table border='0' cellspacing='0' cellpadding='3'>"
                                   "<tr><td align='left'>Total Load: </th><td>%1</td></tr>"
                                   "<tr><td align='left'>Days of Autonomy: </th><td>%2</td></tr>"
                                   "<tr><td align='left'>Unit Battery Capacity: </th><td></td>%3</tr>"
                                   "<tr><td align='left'>System Voltage: </th><td></td>%4</tr>"
                                   "</table>"
                                   "</div>")
                                   .arg(QString::number(_eTotal)+"WH/Day")
                                   .arg(_days_of_autonomy).arg(_battery_unit_cb + "Ah").arg(ui->systemVoltageLabel->text());

    QString inverter = QString("<h4><u>Inverter</u></h4>"
                               "<table border='0' cellspacing='0' cellpadding='3'>"
                               "<tr><td align='left'>Power Rating: </th><td>%1</td></tr>"
                               "<tr><td align='left'>System Voltage: </th><td>%2</td></tr>"
                               "</table>").arg(ui->powerRatingLabel->text()).arg(ui->systemVoltageLabel->text());

    QString chargecontroller = QString("<h4><u>Charge Controller</u></h4>"
                               "<table border='0' cellspacing='0' cellpadding='3'>"
                               "<tr><td align='left'>Regulator Voltage: </th><td>%1</td></tr>"
                               "<tr><td align='left'>Rated Current: </th><td>%2</td></tr>"
                               "</table>").arg(ui->regulatorVoltageLabel->text()).arg(ui->ratedCurrentLabel->text());

    QString pvarray = QString("<h4><u>PV Array</u></h4>"
                               "<table border='0' cellspacing='0' cellpadding='3'>"
                               "<tr><td align='left'>Total number of modules: </th><td>%1</td></tr>"
                               "<tr><td align='left'>Modules in parallel: </th><td>%2</td></tr>"
                               "<tr><td align='left'>Modules in series: </th><td>%3</td></tr>"
                               "<tr><td align='left'>Rated voltage: </th><td>%4</td></tr>"
                               "<tr><td align='left'>Rated current of single panel: </th><td>%5</td></tr>"
                               "<tr><td align='left'>Rated power of single panel: </th><td>%6</td></tr>"
                               "</table>").arg(ui->totalNumberPVModulesLabel->text())
                                          .arg(ui->numberOfPVParallelLabel->text())
                                          .arg(ui->numberOfPVSeriesLabel->text())
                                          .arg(ui->ratedPVVoltageLabel->text())
                                          .arg(ui->ratedCurrentPVSinglePanelLabel->text())
                                          .arg(ui->ratedPowerPVSinglePanelLabel->text()+"W");

    QString solarstorage = QString("<h4><u>Solar Storage</u></h4>"
                               "<table border='0' cellspacing='0' cellpadding='3'>"
                               "<tr><td align='left'>Total number of batteries: </th><td>%1</td></tr>"
                               "<tr><td align='left'>Batteries in series: </th><td>%2</td></tr>"
                               "<tr><td align='left'>Batteries in parallel: </th><td>%3</td></tr>"
                               "</table>").arg(ui->totalNumberBatteriesLabel->text())
                                          .arg(ui->numberOfBatteriesInSeriesLabel->text())
                                          .arg(ui->numberOfBatteriesInParallelLabel->text());


    QString details = QString("<br><br><div style=\"margin-left:20px; font-size:medium;\">"
                              "<table border='0' style=\"font-size:15px;\" width=\"100%\" cellspacing='5' cellpadding='3'>"
                              "<tr><td>%1</td><td>%2</td></tr>"
                              "<tr><td>%3</td><td>%4</td></tr>"
                              "</table>"
                              "</div>").arg(inverter).arg(chargecontroller).arg(pvarray).arg(solarstorage);


    doc.setHtml("<html>"+header + requirements + details + "</html>");
    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
    doc.print(&printer);

    QMessageBox::information(this, "Success", "Report successfully generated.", QMessageBox::Ok);
}

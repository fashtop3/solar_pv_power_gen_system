#include "formloadanalysis.h"
#include "loadanalysisdelegate.h"
#include "ui_formloadanalysis.h"
#include <QDebug>
#include <QLineEdit>

double FormLoadAnalysis::eTotal = 0.0;
double FormLoadAnalysis::eTotalEnergy = 0.0;
double FormLoadAnalysis::regulation;
QString FormLoadAnalysis::load;

FormLoadAnalysis::FormLoadAnalysis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormLoadAnalysis)
{
    ui->setupUi(this);

    setEnabled (false);

    setETotal (0);
    setETotalEnergy (0);
    setRegulation (0);

    ui->deletePushButton->setDisabled(true);
    ui->calcPushButton->setEnabled (false);

    connect(ui->acRadioButton, &QRadioButton::toggled, [=](bool checked) {
        if(checked)
            setLoad("AC");
    });

    connect(ui->dcRadioButton, &QRadioButton::toggled, [=](bool checked) {
        if(checked)
            setLoad ("DC");
    });

    ui->acRadioButton->setChecked (true);

    for(int i=1; i<=100; i++)
        ui->regulationComboBox->addItem (QString::number (i));

//    ui->regulationComboBox->setCurrentIndex (0);

    ui->appTableWidget->setCornerButtonEnabled (false);
    ui->appTableWidget->setSelectionBehavior (QAbstractItemView::SelectRows);
//    ui->appTableWidget->setSelectionMode (QAbstractItemView::SingleSelection);

    ui->appTableWidget->setItemDelegate (new LoadAnalysisDelegate);
    ui->appTableWidget->resizeColumnsToContents ();

    connect (ui->appTableWidget, &QTableWidget::cellChanged, this, &FormLoadAnalysis::cellChanged);
    connect(ui->appTableWidget, &QTableWidget::cellClicked,
                ui->appTableWidget, &QTableWidget::resizeColumnsToContents);
}

FormLoadAnalysis::~FormLoadAnalysis()
{
    delete ui;
}

void FormLoadAnalysis::on_addPushButton_clicked()
{
    ui->appTableWidget->setRowCount (ui->appTableWidget->rowCount () + 1);
    int row = ui->appTableWidget-> rowCount () - 1;

    ui->deletePushButton->setEnabled (true);
    ui->calcPushButton->setEnabled (true);

    QTableWidgetItem *item = new QTableWidgetItem;
    item->setFlags (item->flags() & ~Qt::ItemIsEditable);
    ui->appTableWidget->setItem (row, 4, item);
}

void FormLoadAnalysis::on_deletePushButton_clicked()
{
    ui->appTableWidget->removeRow (ui->appTableWidget->currentRow ());
    ui->deletePushButton->setDisabled (ui->appTableWidget->rowCount () == 0);
    ui->calcPushButton->setDisabled (ui->appTableWidget->rowCount () == 0);
}

void FormLoadAnalysis::on_resetPushButton_clicked()
{
    ui->appTableWidget->setRowCount (0);
    ui->deletePushButton->setDisabled (true);
    ui->calcPushButton->setDisabled (true);
}

void FormLoadAnalysis::on_calcPushButton_clicked()
{
    calculateEtotal();
    emit isResolved(true);
}

void FormLoadAnalysis::cellChanged(int row, int col)
{
    QTableWidgetItem *unit = ui->appTableWidget->item (row, 1);
    QTableWidgetItem *power = ui->appTableWidget->item (row, 2);
    QTableWidgetItem *usage = ui->appTableWidget->item (row, 3);
    QTableWidgetItem *cell = ui->appTableWidget->item (row, 4);

    if(unit && power && usage) {
        int energy = unit->text ().toInt ()*power->text ().toInt ()*usage->text ().toInt ();

        if(!cell) {
           cell = new QTableWidgetItem();
           ui->appTableWidget->setItem (row, ENEREGY_COL, cell);
        }

        cell->setText (QString::number (energy)+" WH/Day");
        cell->setTextAlignment (Qt::AlignHCenter | Qt::AlignCenter);
    }
}

void FormLoadAnalysis::enableDeleteButton(int row, int col)
{
    ui->deletePushButton->setDisabled (row == -1);
}
double FormLoadAnalysis::getETotal()
{
    return eTotal;
}

void FormLoadAnalysis::setETotal(double value)
{
    eTotal = value;
}

void FormLoadAnalysis::calculateEtotal() {

    int rows = ui->appTableWidget->rowCount ();
    double sum = 0;

    if(rows > 0) {
        for (int i=0; i < rows; i++) {
            QTableWidgetItem *item = ui->appTableWidget->item(i, ENEREGY_COL);
            sum += item->text ().split (' ').first ().toDouble ();
        }
    }

    //set values for eTotal var and label
    setETotal (sum);
    ui->eTotalLabel->setText (QString::number (sum));

qDebug() << getRegulation ();
    //set eTotalEnergy for ac
//    double regulation = static_cast<double> (ui->regulationComboBox->currentIndex () + 1) / 100;
    double totalEnergyReg = sum / getRegulation ();
    ui->eTotalEnergyLabel->setText (QString::number (totalEnergyReg) + " WH/Day");
    setETotalEnergy (totalEnergyReg);

    emit isResolved (true);
}

double FormLoadAnalysis::getETotalEnergy()
{
    return eTotalEnergy;
}

void FormLoadAnalysis::setETotalEnergy(double value)
{
    eTotalEnergy = value;
}
void FormLoadAnalysis::on_regulationComboBox_currentTextChanged(const QString &arg1)
{
    setRegulation (arg1.toDouble ());
}
double FormLoadAnalysis::getRegulation()
{
    return regulation;
}

void FormLoadAnalysis::setRegulation(double value)
{
    regulation = static_cast<double> (value) / 100;
}


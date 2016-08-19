#include "loadanalysisdelegate.h"

#include <QComboBox>

LoadAnalysisDelegate::LoadAnalysisDelegate(QObject *parent)
{

}

LoadAnalysisDelegate::~LoadAnalysisDelegate()
{

}

void LoadAnalysisDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (index.column() == UNIT_COLUMN ||
        index.column() == POWER_COLUMN ||
        index.column() == USAGE_COLUMN)
    {
        int value = index.model()->data(index, Qt::DisplayRole).toInt();

        QStyleOptionViewItem myOption = option;
        myOption.displayAlignment = Qt::AlignVCenter | Qt::AlignCenter;

        if(index.column() == POWER_COLUMN) {
            QString text = QString("%1 Watt").arg (value);
            drawDisplay(painter, myOption, myOption.rect, text);
        }else if(index.column() == USAGE_COLUMN) {
            QString text = QString("%1 Hrs").arg (value);
            drawDisplay(painter, myOption, myOption.rect, text);
        } else{
            drawDisplay(painter, myOption, myOption.rect, QString::number (value));
        }
        drawFocus(painter, myOption, myOption.rect);
    } else{
        QItemDelegate::paint(painter, option, index);
    }
}

QWidget *LoadAnalysisDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (index.column() == UNIT_COLUMN ||
        index.column() == POWER_COLUMN ||
        index.column() == USAGE_COLUMN)
    {
        QComboBox *unitCombo = new QComboBox(parent);

        for(int i = 1; i<101; i++)
            unitCombo->addItem (QString::number (i));

        connect(unitCombo, SIGNAL(currentIndexChanged(int)),
                this, SLOT(commitAndCloseEditor()));
        return unitCombo;

    } else {
        return QItemDelegate::createEditor(parent, option, index);
    }
}

void LoadAnalysisDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QComboBox *unitCombo = qobject_cast<QComboBox *>(editor);
    int unit = index.model()->data(index, Qt::DisplayRole).toInt();

    if (index.column() == UNIT_COLUMN) {


        if(unit)
            unitCombo->setCurrentText (QString::number(unit));


    } else if(index.column() == POWER_COLUMN){

        for(int i = 1; i<1001; i++)
            unitCombo->addItem (QString::number (i));

        if(unit)
            unitCombo->setCurrentText (QString::number(unit));

    } else if(index.column() == USAGE_COLUMN){

        for(int i = 1; i<73; i++)
            unitCombo->addItem (QString::number (i));

        if(unit)
            unitCombo->setCurrentText (QString::number(unit));
    } else {
        QItemDelegate::setEditorData(editor, index);
    }

}

void LoadAnalysisDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    if (index.column() == UNIT_COLUMN ||
        index.column() == POWER_COLUMN ||
        index.column() == USAGE_COLUMN) {
        QComboBox *unitCombo = qobject_cast<QComboBox *>(editor);
        int unit = unitCombo->currentText ().toInt ();
        model->setData(index, unit);
    } else {
        QItemDelegate::setModelData(editor, model, index);
    }
}

void LoadAnalysisDelegate::commitAndCloseEditor()
{
    QComboBox *editor = qobject_cast<QComboBox *>(sender());
    emit commitData(editor);
    emit closeEditor(editor);
}


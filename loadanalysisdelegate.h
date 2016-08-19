#ifndef LOADANALYSISDELEGATE_H
#define LOADANALYSISDELEGATE_H

#include <QItemDelegate>



class LoadAnalysisDelegate : public QItemDelegate
{
    Q_OBJECT

public:
    LoadAnalysisDelegate(QObject *parent = 0);
    ~LoadAnalysisDelegate();

    void paint(QPainter *painter, const QStyleOptionViewItem &option,
               const QModelIndex &index) const;
    QWidget *createEditor(QWidget *parent,
                          const QStyleOptionViewItem &option,
                          const QModelIndex &index) const;
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const;

public slots:
    void commitAndCloseEditor();

private:
    enum {
        UNIT_COLUMN = 1,
        POWER_COLUMN,
        USAGE_COLUMN,
    };

};

#endif // LOADANALYSISDELEGATE_H

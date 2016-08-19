#ifndef FORMLOADANALYSIS_H
#define FORMLOADANALYSIS_H

#include <QWidget>

namespace Ui {
class FormLoadAnalysis;
}

class FormLoadAnalysis : public QWidget
{
    Q_OBJECT

public:
    explicit FormLoadAnalysis(QWidget *parent = 0);
    ~FormLoadAnalysis();

private:
    Ui::FormLoadAnalysis *ui;
};

#endif // FORMLOADANALYSIS_H

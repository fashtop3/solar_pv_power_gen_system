#ifndef PREFERENCEDIALOG_H
#define PREFERENCEDIALOG_H

#include <QDialog>

namespace Ui {
class preferenceDialog;
}

class preferenceDialog : public QDialog
{
    Q_OBJECT

public:
    explicit preferenceDialog(QWidget *parent = 0);
    ~preferenceDialog();

private:
    Ui::preferenceDialog *ui;
};

#endif // PREFERENCEDIALOG_H

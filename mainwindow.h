#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "preferencedialog.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_newReportPushButton_clicked();

    void on_viewRecommendedPushButton_clicked();

    void on_printPushButton_clicked();

private:
    Ui::MainWindow *ui;
    PreferenceDialog *preferenceDialog;
};

#endif // MAINWINDOW_H

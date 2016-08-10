#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

#include "optionswindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    Ui::MainWindow *ui;

private slots:
    void on_quitButton_clicked();

    void on_optionsButton_clicked();

    void on_loadButton_clicked();

    void on_saveButton_clicked();

private:

};

#endif // MAINWINDOW_H

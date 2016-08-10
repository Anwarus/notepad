#ifndef OPTIONSWINDOW_H
#define OPTIONSWINDOW_H

#include <QDialog>
#include <QMainWindow>
#include <QColorDialog>
#include <QColor>

#include <QObject>
#include <QWidget>
#include <QFont>
#include <QFontDialog>
#include "mainwindow.h"
#include "ui_mainwindow.h"

namespace Ui {
class OptionsWindow;
}

class OptionsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit OptionsWindow(QWidget *parent = 0);
    ~OptionsWindow();

private slots:
    void on_highlightedTextButton_clicked();

    void on_numberingSectionButton_clicked();

    void on_backgroundButton_clicked();

    void on_fontButton_clicked();

    void on_okButton_clicked();

private:
    QWidget* par;
    Ui::OptionsWindow *ui;
};

#endif // OPTIONSWINDOW_H

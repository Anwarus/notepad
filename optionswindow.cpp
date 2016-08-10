#include "optionswindow.h"
#include "ui_optionswindow.h"

OptionsWindow::OptionsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OptionsWindow)
{
    par = parent;

    ui->setupUi(this);
}

OptionsWindow::~OptionsWindow()
{
    delete ui;
}

void OptionsWindow::on_highlightedTextButton_clicked()
{
    MainWindow* p = qobject_cast<MainWindow*>(par);

    QColor c = QColorDialog().getColor();

    ui->highlightedTextButton->setStyleSheet("background-color: "+c.name());
    p->ui->plainTextEdit->setHighlightedLineColor(c);
}

void OptionsWindow::on_numberingSectionButton_clicked()
{
    MainWindow* p = qobject_cast<MainWindow*>(par);

    QColor c = QColorDialog().getColor();
    ui->numberingSectionButton->setStyleSheet("background-color: "+c.name());
    p->ui->plainTextEdit->setNumberingSectionColor(c);
}

void OptionsWindow::on_backgroundButton_clicked()
{
    MainWindow* p = qobject_cast<MainWindow*>(par);

    QColor c = QColorDialog().getColor();
    ui->backgroundButton->setStyleSheet("background-color: "+c.name());
    p->ui->plainTextEdit->setStyleSheet("background-color: "+c.name());
}

void OptionsWindow::on_fontButton_clicked()
{
    MainWindow* p = qobject_cast<MainWindow*>(par);

    QFont font = QFontDialog().getFont(0, nullptr);
    p->ui->plainTextEdit->setFont(font);
}

void OptionsWindow::on_okButton_clicked()
{
    this->close();
}

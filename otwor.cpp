#include "otwor.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "ui_mainwindow.h"
otwor::otwor()
{

}
void MainWindow::sprawdzanie_otworu_H()
{
    // SPRAWDZANIE LITERY H
    if (ui->comboBox->currentText()=="H7" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,021\n+0");
    }
    else if (ui->comboBox->currentText()=="H8" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,028\n+0");
    }
}


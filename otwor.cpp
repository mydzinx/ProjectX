#include "otwor.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "ui_mainwindow.h"
#include "walek.h"
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
        ui->label_2->setText("+0,033\n+0");
    }
    else if (ui->comboBox->currentText()=="H4" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,010\n+0");
    }
    else if (ui->comboBox->currentText()=="H5" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,011\n+0");
    }
    else if (ui->comboBox->currentText()=="H6" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,013\n+0");
    }
    else if (ui->comboBox->currentText()=="H9" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,052\n+0");
    }
    else if (ui->comboBox->currentText()=="H10" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,084\n+0");
    }
    else if (ui->comboBox->currentText()=="H11" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,13\n+0");
    }
    else if (ui->comboBox->currentText()=="H12" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,21\n+0");
    }
    else if (ui->comboBox->currentText()=="H13" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,33\n+0");
    }
    else if (ui->comboBox->currentText()=="H15" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,84\n+0");
    }
    //KONIEC SPRAWDZANIA LITERY H
}
void MainWindow::sprawdzanie_otworu_A()
{
    // SPRAWDZANIE LITERY A
    if (ui->comboBox->currentText()=="A11" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,43\n+0");
    }
    //KONIEC SPRAWDZANIA LITERY A
}
void MainWindow::sprawdzanie_otworu_B()
{
    // SPRAWDZANIE LITERY B
    if (ui->comboBox->currentText()=="B11" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,29\n+0");
    }
    //KONIEC SPRAWDZANIA LITERY B
}
void MainWindow::sprawdzanie_otworu_C()
{
    // SPRAWDZANIE LITERY C
    if (ui->comboBox->currentText()=="C8" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,143\n+0,11");
    }
    else if (ui->comboBox->currentText()=="C9" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,162\n+0,11");
    }
    else if (ui->comboBox->currentText()=="C11" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,24\n+0,11");
    }
    else if (ui->comboBox->currentText()=="CD8" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,064\n+0,046");
    }
    //KONIEC SPRAWDZANIA LITERY C
}
void MainWindow::sprawdzanie_otworu_D()
{
    // SPRAWDZANIE LITERY D
    if (ui->comboBox->currentText()=="D8" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,098\n+0,065");
    }
    else if (ui->comboBox->currentText()=="D9" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,117\n+0,065");
    }
    else if (ui->comboBox->currentText()=="D11" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,195\n+0,065");
    }
    else if (ui->comboBox->currentText()=="D10" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,149\n+0,065");
    }
    //KONIEC SPRAWDZANIA LITERY D
}
void MainWindow::sprawdzanie_otworu_E()
{
    // SPRAWDZANIE LITERY E
    if (ui->comboBox->currentText()=="E7" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,061\n+0,04");
    }
    else if (ui->comboBox->currentText()=="E8" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,073\n+0,04");
    }
    else if (ui->comboBox->currentText()=="E9" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,092\n+0,04");
    }
    //KONIEC SPRAWDZANIA LITERY E
}
void MainWindow::sprawdzanie_otworu_F()
{
    // SPRAWDZANIE LITERY F
    if (ui->comboBox->currentText()=="F7" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,041\n+0,02");
    }
    //KONIEC SPRAWDZANIA LITERY F
}
void MainWindow::sprawdzanie_otworu_G()
{
    // SPRAWDZANIE LITERY G
    if (ui->comboBox->currentText()=="G5" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,016\n+0,007");
    }
    else if (ui->comboBox->currentText()=="G6" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,02\n+0,007");
    }
    else if (ui->comboBox->currentText()=="G7" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,028\n+0,007");
    }
    //KONIEC SPRAWDZANIA LITERY G
}
void MainWindow::sprawdzanie_otworu_J()
{
    // SPRAWDZANIE LITERY J
    if (ui->comboBox->currentText()=="JS5" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,0045\n-0,0045");
    }
    else if (ui->comboBox->currentText()=="JS6" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,0065\n-0,0065");
    }
    else if (ui->comboBox->currentText()=="JS7" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,0105\n-0,0105");
    }
    else if (ui->comboBox->currentText()=="JS9" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,026\n-0,026");
    }
    //KONIEC SPRAWDZANIA LITERY JS
    else if (ui->comboBox->currentText()=="J6" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,008\n-0,005");
    }
    else if (ui->comboBox->currentText()=="J7" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,012\n-0,00");
    }
    else if (ui->comboBox->currentText()=="J8" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,02\n-0,013");
    }
    //KONIEC SPRAWDZANIA LITERY J

}
void MainWindow::sprawdzanie_otworu_K()
{
    // SPRAWDZANIE LITERY K
    if (ui->comboBox->currentText()=="K6" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,002\n-0,011");
    }
    else if (ui->comboBox->currentText()=="K7" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("+0,006\n-0,015");
    }
    //KONIEC SPRAWDZANIA LITERY K
}
void MainWindow::sprawdzanie_otworu_M()
{
    // SPRAWDZANIE LITERY M
    if (ui->comboBox->currentText()=="M6" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("-0,004\n-0,017");
    }
    else if (ui->comboBox->currentText()=="M7" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("0,0\n-0,021");
    }
    //KONIEC SPRAWDZANIA LITERY M
}
void MainWindow::sprawdzanie_otworu_N()
{
    // SPRAWDZANIE LITERY N
    if (ui->comboBox->currentText()=="N6" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("-0,011\n-0,024");
    }
    else if (ui->comboBox->currentText()=="N7" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("-0,007\n-0,028");
    }
    else if (ui->comboBox->currentText()=="N8" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("-0,003\n-0,036");
    }
    else if (ui->comboBox->currentText()=="N9" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("0,0\n-0,052");
    }
    //KONIEC SPRAWDZANIA LITERY N
}
void MainWindow::sprawdzanie_otworu_P()
{
    // SPRAWDZANIE LITERY P
    if (ui->comboBox->currentText()=="P6" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("-0,018\n-0,031");
    }
    else if (ui->comboBox->currentText()=="P7" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("-0,014\n-0,035");
    }
    else if (ui->comboBox->currentText()=="P8" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("-0,022\n-0,055");
    }
    else if (ui->comboBox->currentText()=="P9" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("-0,022\n-0,074");
    }
    //KONIEC SPRAWDZANIA LITERY P
}
void MainWindow::sprawdzanie_otworu_R()
{
    // SPRAWDZANIE LITERY R
    if (ui->comboBox->currentText()=="R6" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("-0,024\n-0,037");
    }
    else if (ui->comboBox->currentText()=="R7" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("-0,02\n-0,041");
    }
    //KONIEC SPRAWDZANIA LITERY R
}
void MainWindow::sprawdzanie_otworu_S()
{
    // SPRAWDZANIE LITERY S
    if (ui->comboBox->currentText()=="S8" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("-0,035\n-0,068");
    }
    else if (ui->comboBox->currentText()=="S7" && ui->spinBox->value()<=20)
    {
        ui->label->setText(ui->spinBox->text());
        ui->label_2->setText("-0,027\n-0,048");
    }
    //KONIEC SPRAWDZANIA LITERY S
}




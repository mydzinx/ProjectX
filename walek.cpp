#include "walek.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "otwor.h"
walek::walek()
{

}
void MainWindow::sprawdzanie_walka_h()
{
    if (ui->comboBox_3->currentText()=="h7" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0\n-0,018");
    }
    else if (ui->comboBox_3->currentText()=="h3" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0\n-0,002");
    }
    else if (ui->comboBox_3->currentText()=="h4" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,010\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h5" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,011\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h6" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,013\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h7" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,021\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h8" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,033\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h9" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,052\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h10" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,084\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h11" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox->text());
        ui->label_3->setText("+0,13\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h12" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,21\n+0");
    }
    else if (ui->comboBox_3->currentText()=="h13" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,33\n+0");
    }
    //KONIEC SPRAWDZANIA LITERY H
}
void MainWindow::sprawdzanie_walka_c()
{
    // SPRAWDZANIE LITERY C
    if (ui->comboBox_3->currentText()=="c11" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,24\n+0,11");
    }
    //KONIEC SPRAWDZANIA LITERY C
}
void MainWindow::sprawdzanie_walka_d()
{
    // SPRAWDZANIE LITERY D
    if (ui->comboBox_3->currentText()=="d8" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,098\n+0,065");
    }
    else if (ui->comboBox_3->currentText()=="d9" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,117\n+0,065");
    }
    else if (ui->comboBox_3->currentText()=="d10" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,149\n+0,065");
    }
    else if (ui->comboBox_3->currentText()=="d11" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,195\n+0,065");
    }
    //KONIEC SPRAWDZANIA LITERY D
}
void MainWindow::sprawdzanie_walka_e()
{
    // SPRAWDZANIE LITERY E
    if (ui->comboBox_3->currentText()=="e7" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,061\n+0,04");
    }
    else if (ui->comboBox_3->currentText()=="e8" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,073\n+0,04");
    }
    else if (ui->comboBox_3->currentText()=="e9" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,092\n+0,04");
    }
    //KONIEC SPRAWDZANIA LITERY E
}
void MainWindow::sprawdzanie_walka_f()
{
    // SPRAWDZANIE LITERY F
    if (ui->comboBox_3->currentText()=="f6" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,061\n+0,02");
    }
    else if (ui->comboBox_3->currentText()=="f7" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,041\n+0,02");
    }
    else if (ui->comboBox_3->currentText()=="f8" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,053\n+0,02");
    }
    //KONIEC SPRAWDZANIA LITERY F
}
void MainWindow::sprawdzanie_walka_g()
{
    // SPRAWDZANIE LITERY G
    if (ui->comboBox_3->currentText()=="g5" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,016\n+0,007");
    }
    else if (ui->comboBox_3->currentText()=="g6" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,02\n+0,007");
    }
    else if (ui->comboBox_3->currentText()=="g7" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,028\n+0,007");
    }
    //KONIEC SPRAWDZANIA LITERY G
}
void MainWindow::sprawdzanie_walka_j()
{
    // SPRAWDZANIE LITERY J
    if (ui->comboBox_3->currentText()=="j6" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,008\n-0,005");
    }
    else if (ui->comboBox_3->currentText()=="js4" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,02\n+0,007");
    }
    else if (ui->comboBox_3->currentText()=="js12" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,105\n-0,105");
    }
    else if (ui->comboBox_3->currentText()=="js16" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,002\n-0,002");
    }
    //KONIEC SPRAWDZANIA LITERY J
}
void MainWindow::sprawdzanie_walka_k()
{
    // SPRAWDZANIE LITERY K
    if (ui->comboBox_3->currentText()=="k5" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,001\n-0,009");
    }
    else if (ui->comboBox_3->currentText()=="k6" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,002\n-0,015");
    }
    else if (ui->comboBox_3->currentText()=="k8" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,01\n-0,023");
    }
    else if (ui->comboBox_3->currentText()=="k10" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,016\n-0,039");
    }
    else if (ui->comboBox_3->currentText()=="k11" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+?\n-?");
    }
    //KONIEC SPRAWDZANIA LITERY K
}
void MainWindow::sprawdzanie_walka_m()
{
    // SPRAWDZANIE LITERY M
    if (ui->comboBox_3->currentText()=="m5" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("-0,002\n-0,006");
    }
    else if (ui->comboBox_3->currentText()=="m6" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("-0,004\n-0,017");
    }
    else if (ui->comboBox_3->currentText()=="m7" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,0\n-0,021");
    }
    //KONIEC SPRAWDZANIA LITERY M
}
void MainWindow::sprawdzanie_walka_n()
{
    // SPRAWDZANIE LITERY N
    if (ui->comboBox_3->currentText()=="n5" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("-0,015\n-0,020");
    }
    else if (ui->comboBox_3->currentText()=="n6" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("-0,011\n-0,024");
    }
    else if (ui->comboBox_3->currentText()=="n7" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,007\n-0,028");
    }
    //KONIEC SPRAWDZANIA LITERY M
}
void MainWindow::sprawdzanie_walka_p()
{
    // SPRAWDZANIE LITERY P
    if (ui->comboBox_3->currentText()=="p5" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("-0,018\n-0,031");
    }
    else if (ui->comboBox_3->currentText()=="p6" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("-0,018\n-0,031");
    }
    else if (ui->comboBox_3->currentText()=="p7" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,014\n-0,035");
    }
    else if (ui->comboBox_3->currentText()=="p8" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("+0,022\n-0,055");
    }
    //KONIEC SPRAWDZANIA LITERY P
}
void MainWindow::sprawdzanie_walka_r()
{
    // SPRAWDZANIE LITERY R
    if (ui->comboBox_3->currentText()=="r6" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("-0,024\n-0,037");
    }
    else if (ui->comboBox_3->currentText()=="r7" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("-0,02\n-0,041");
    }
    //KONIEC SPRAWDZANIA LITERY R
}
void MainWindow::sprawdzanie_walka_s()
{
    // SPRAWDZANIE LITERY S
    if (ui->comboBox_3->currentText()=="s6" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("-0,031\n-0,044");
    }
    else if (ui->comboBox_3->currentText()=="s7" && ui->spinBox_2->value()<=20)
    {
        ui->label_4->setText(ui->spinBox_2->text());
        ui->label_3->setText("-0,027\n-0,048");
    }
    //KONIEC SPRAWDZANIA LITERY S
}





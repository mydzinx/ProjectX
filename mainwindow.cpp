#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "otwor.h"
#include "walek.h"


//VER 0.1.1


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
sprawdzanie_otworu_H(); //czyta z pliku otwor - tolerancje
sprawdzanie_otworu_A();
sprawdzanie_otworu_B();
sprawdzanie_otworu_C();
sprawdzanie_otworu_D();
sprawdzanie_otworu_E();
sprawdzanie_otworu_F();
sprawdzanie_otworu_G();
sprawdzanie_otworu_J();
sprawdzanie_otworu_K();
sprawdzanie_otworu_M();
sprawdzanie_otworu_N();
sprawdzanie_otworu_P();
sprawdzanie_otworu_R();
sprawdzanie_otworu_S();
}


//zakladka 3
void MainWindow::on_pushButton_2_clicked()
{
    przelicz_calemm(); // czyta z pliku przeliczenia voida
}

void MainWindow::on_pushButton_4_clicked()
{
   sprawdzanie_walka_h();
   sprawdzanie_walka_c();
   sprawdzanie_walka_d();
   sprawdzanie_walka_e();
   sprawdzanie_walka_f();
   sprawdzanie_walka_g();
   sprawdzanie_walka_j();
   sprawdzanie_walka_k();
   sprawdzanie_walka_m();
   sprawdzanie_walka_n();
   sprawdzanie_walka_p();
   sprawdzanie_walka_r();
   sprawdzanie_walka_s();

}

void MainWindow::on_lineEdit_editingFinished()
{

}

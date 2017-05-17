#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "otwor.h"


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
}


//zakladka 3
void MainWindow::on_pushButton_2_clicked()
{
    przelicz_calemm(); // czyta z pliku przeliczenia voida
}

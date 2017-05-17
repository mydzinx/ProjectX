#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "otwor.h"

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
sprawdzanie_otworu_H();
}


//zakladka 3
void MainWindow::on_pushButton_2_clicked()
{
    przelicz_calemm();
}

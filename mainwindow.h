#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "otwor.h"
#include "walek.h"
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void sprawdzanie_otworu_H();//zakladka 1
    void sprawdzanie_otworu_A();//zakladka 1
    void sprawdzanie_otworu_B();
    void sprawdzanie_otworu_C();
    void sprawdzanie_otworu_D();
    void sprawdzanie_otworu_E();
    void sprawdzanie_otworu_F();
    void sprawdzanie_otworu_G();
    void sprawdzanie_otworu_J();
    void sprawdzanie_otworu_K();
    void sprawdzanie_otworu_M();
    void sprawdzanie_otworu_N();
    void sprawdzanie_otworu_P();
    void sprawdzanie_otworu_R();
    void sprawdzanie_otworu_S();
    void sprawdzanie_walka_h();
    void sprawdzanie_otworu_h();
    void przelicz_calemm(); //zakladka 3

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_lineEdit_editingFinished();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

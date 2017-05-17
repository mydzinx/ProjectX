#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "otwor.h"
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
    void przelicz_calemm(); //zakladka 3

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Motocicleta.h"
#include "Autoturism.h"
#include "Camion.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    Ui::MainWindow *ui;

    Transport cb;
    Motocicleta moto;
    Autoturism tit;
    Camion track;
};

#endif // MAINWINDOW_H

#include "mainwindow.h"
#include <QApplication>
#include<QDebug>
#include "Motocicleta.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Motocicleta moto;
    moto.setProp(2, 'a', 300.0 , 800 , "negru", "cruiser");
    moto.afisareProp();
    qDebug() <<"Model:" << moto.getModel();


    return a.exec();
}






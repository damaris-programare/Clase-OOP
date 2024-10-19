#include "Autoturism.h"
#include <QDebug>


Autoturism::Autoturism(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare,  QString marca)
{
    setProp(nrRoti, motorTip, motorCapacitate, greutate, culoare,  marca);
}

void Autoturism::afisareProp(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare,  QString marca)
{
    Tansport::afisare();
    qDebug << "Marca: " << marca;
}

int Autoturism::setProp(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare, QString marca)
{
    this->nrRoti = nrRoti;
    this->motorTip = motorTip;
    this->motorCapacitate = motorCapacitate;
    this->greutate = greutate;
    this->culoare = culoare;
    this->marca = marca;
}

int Autoturism::getNrRoti()
{
    return nrRoti;
}
int Autoturism::getMotorTip()
{
    return motorTip;
}
int Autoturism::getMotorCapacitate()
{
    return motorCapacitate;
}
int Autoturism::getGreutate()
{
    return greutate;
}
int Autoturism::getCuloare()
{
    return culoare;
}
int Autoturism::getMarca()
{
    return marca;
}


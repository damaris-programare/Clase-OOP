#include "Camion.h"
#include <QDebug>


Camion::Camion(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare, int metriPlatforma)
{
    setProp(nrRoti, motorTip, motorCapacitate, greutate, culoare,  metriPlatforma);
}

void Camion::afisareProp(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare, int metriPlatforma)
{
    Transport::afisare();
    qDebug < " Metri_Platforma: " << metriPlatforma;
}

int Camion::setProp(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare, int metriPlatforma)
{
    this->nrRoti = nrRoti;
    this->motorTip = motorTip;
    this->motorCapacitate = motorCapacitate;
    this->greutate = greutate;
    this->culoare = culoare;
    this->metriPlatforma = metriPlatforma;
}

int Camion::getNrRoti()
{
    return nrRoti;
}
int Camion::getMotorTip()
{
    return motorTip;
}
int Camion::getMotorCapacitate()
{
    return motorCapacitate;
}
int Camion::getGreutate()
{
    return greutate;
}
int Camion::getCuloare()
{
    return culoare;
}
int Camion::getMetriPlatforma()
{
    return metriPlatforma;
}


#include "Transport.h"
#include <iostream>
#include <QDebug>


Transport::Transport(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare)
{
    setProp(nrRoti, motorTip, motorCapacitate, greutate, culoare);
}

void Transport::afisareProp()
{
    qDebug() << "Nr roti: " << nrRoti << "," <<"Tip motor: "<<motorTip<<","<<"CapacitateMotor: "<<motorCapacitate<<","<<"Greutate: "<<greutate<<","<<"Culoare: "<<culoare;
}

void Transport::setProp(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare)
{
    this->nrRoti = nrRoti;
    this->motorTip = motorTip;
    this->motorCapacitate = motorCapacitate;
    this->greutate = greutate;
    this->culoare = culoare;
}

int Transport::getNrRoti()
{
    return nrRoti;
}
int Transport::getMotorTip()
{
    return motorTip;
}
int Transport::getMotorCapacitate()
{
    return motorCapacitate;
}
int Transport::getGreutate()
{
    return greutate;
}
int Transport::getCuloare()
{
    return culoare;
}

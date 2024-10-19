#include "Motocicleta.h"
#include "Transport.h"
#include <iostream>
#include <QDebug>
#include <QString>


Motocicleta::Motocicleta():Transport()
{

}

Motocicleta::Motocicleta(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare, QString model)
{
    setProp(nrRoti, motorTip, motorCapacitate, greutate,culoare,  model);
}

void Motocicleta::afisareProp()
{
    Transport::afisareProp();
    qDebug() << "Model: " << model;
}

void Motocicleta::setProp(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare, QString model)
{
    this->nrRoti = nrRoti;
    this->motorTip = motorTip;
    this->motorCapacitate = motorCapacitate;
    this->greutate = greutate;
    this->culoare = culoare;
    this->model = model;
}

int Motocicleta::getNrRoti()
{
    return nrRoti;
}
int Motocicleta::getMotorTip()
{
    return motorTip;
}
int Motocicleta::getMotorCapacitate()
{
    return motorCapacitate;
}
int Motocicleta::getGreutate()
{
    return greutate;
}
int Motocicleta::getCuloare()
{
    return culoare;
}
int Motocicleta::getModel()
{
    return model;
}

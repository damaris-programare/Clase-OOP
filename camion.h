#ifndef CAMION_H
#define CAMION_H

#include "Transport.h"
#include <QString>


class Camion: public Transport
{
public:
    Camion(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare, int metriPlatforma);
    void afisareProp(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare, int metriPlatforma);
    int setProp(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare, int metriPlatforma);
    int getNrRoti();
    int getMotorTip();
    int getMotorCapacitate();
    int getGreutate();
    int getCuloare();
    int getMetriPlatforma();

protected:
    int metriPlatforma;
};

#endif // CAMION_H

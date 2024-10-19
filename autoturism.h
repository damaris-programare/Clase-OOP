#ifndef AUTOTURISM_H
#define AUTOTURISM_H

#include "Transport.h"
#include <QString>


class Autoturism: public Transport
{
public:
    Autoturism(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare,  QString marca);
    void afisareProp(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare, QString marca);
    int setProp(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare,  QString marca);
    int getNrRoti();
    int getMotorTip();
    int getMotorCapacitate();
    int getGreutate();
    int getCuloare();
    int getMarca();

protected:
  QString marca;
};

#endif // AUTOTURISM_H

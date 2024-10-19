#ifndef MOTOCICLETA_H
#define MOTOCICLETA_H

#include "Transport.h"
#include <QString>

class Motocicleta: public Transport
{
public:
    Motocicleta();
    Motocicleta(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare, QString model);
    void afisareProp();
    void setProp(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare, QString model);
    int getNrRoti();
    int getMotorTip();
    int getMotorCapacitate();
    int getGreutate();
    int getCuloare();
    int getModel();

protected:
    QString model;
};

#endif // MOTOCICLETA_H

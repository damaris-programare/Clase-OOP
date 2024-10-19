#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <QString>

class Transport
{
public:
    Transport(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare);
    void afisareProp();
    void setProp(int nrRoti, char motorTip, float motorCapacitate, int greutate, QString culoare);
    int getNrRoti();
    int getMotorTip();
    int getMotorCapacitate();
    int getGreutate();
    int getCuloare();


protected:
    int nrRoti;
    char motorTip;
    float motorCapacitate;
    int greutate;
    QString culoare;
};

#endif // TRANSPORT_H

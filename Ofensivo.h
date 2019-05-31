#ifndef OFENSIVO_H
#define OFENSIVO_H

#include "Poder.h"

class Ofensivo:public Poder{
    private:
        int rango, fuerza;
    public:
        Ofensivo();
        Ofensivo(int, int,string, int);

        int getRango();
        void setRango(int);

        int getFuerza();
        void setFuerza(int);

        //virtual string toString();
};
#endif
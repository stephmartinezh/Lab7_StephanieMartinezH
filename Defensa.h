#ifndef DEFENSA_H
#define DEFENSA_H

#include "Poder.h"

class Defensa:public Poder{
    private:
        int resistencia, duracion;
    public:
        Defensa();
        Defensa(int, int,string, int);

        int getResistencia();
        void setResistencia(int);

        int getDuracion();
        void setDuracion(int);

        //virtual string toString();
};
#endif
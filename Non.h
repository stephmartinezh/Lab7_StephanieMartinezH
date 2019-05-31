#ifndef NON_H
#define NON_H

#include "Persona.h"

class Non:public Persona{
    private:
        string trabajo;
        int fuerza, velocidad;
    public:
        Non();
        Non(string, int, int,string, string, int, char);

        string getTrabajo();
        void setTrabajo(string);

        int getFuerza();
        void setFuerza(int);

        int getVelocidad();
        void setVelocidad(int);

        virtual string toString();
};
#endif
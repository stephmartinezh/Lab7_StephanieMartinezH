#ifndef WATER_H
#define WATER_H

#include "Persona.h"

class Water:public Persona{
    private:
        string tribu, arma;
    public:
        Water();
        Water(string, string,string, string, int, char);

        string getTribu();
        void setTribu(string);

        string getArma();
        void setArma(string);

        virtual string toString();
};
#endif
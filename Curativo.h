#ifndef CURATIVO_H
#define CURATIVO_H

#include "Poder.h"

class Curativo:public Poder{
    private:
        string tipo;
    public:
        Curativo();
        Curativo(string,string, int);

        string getTipo();
        void setTipo(string);

        //virtual string toString();
};
#endif
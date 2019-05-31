#ifndef INVOCACION_H
#define INVOCACION_H

#include "Poder.h"

class Invocacion:public Poder{
    private:
        string nombre, especie, habilidad, tipo;
    public:
        Invocacion();
        Invocacion(string, string, string, string,string, int);

        string getNombre();
        void setNombre(string);

        string getEspecie();
        void setEspecie(string);

        string getHabilidad();
        void setHabilidad(string);

        string getTipo();
        void setTipo(string);

        //virtual string toString();
};
#endif
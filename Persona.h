#ifndef PERSONA_H
#define PERSONA_H

#include "Poder.h"

#include <string>
using std::string;

#include <vector>
using std::vector;

class Persona{
    protected:
        string origen, nombre;
        int edad;
        char sexo;
        vector<Poder*> poder;
    public:
        Persona();
        Persona(string, string, int, char);
        string getOrigen();
        void setOrigen(string);

        string getNombre();
        void setNombre(string);

        int getEdad();
        void setEdad(int);        

        char getSexo();
        void setSexo(char);

        vector<Poder*> getPoder();

        virtual string toString() = 0;
};
#endif
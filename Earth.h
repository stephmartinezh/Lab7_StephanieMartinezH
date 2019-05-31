#ifndef EARTH_H
#define EARTH_H

#include "Persona.h"

class Earth:public Persona{
    private:
        int coles;
        string graduacion;
    public:
        Earth();
        Earth(int, string,string, string, int, char);

        int getColes();
        void setColes(int);

        string getGraduacion();
        void setGraduacion(string);

        virtual string toString();
};
#endif
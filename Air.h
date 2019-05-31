#ifndef AIR_H
#define AIR_H

#include "Persona.h"

class Air:public Persona{
    private:
        int pelo;
        string color;
    public:
        Air();
        Air(int, string,string, string, int, char);

        int getPelo();
        void setPelo(int);

        string getColor();
        void setColor(string);

        virtual string toString();
};
#endif
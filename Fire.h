#ifndef FIRE_H
#define FIRE_H

#include "Persona.h"

class Fire:public Persona{
    private:
        int cicatriz, victorias;
    public:
        Fire();
        Fire(int, int,string, string, int, char);

        int getCicatriz();
        void setCicatriz(int);

        int getVictorias();
        void setVictorias(int);

        virtual string toString();
};
#endif
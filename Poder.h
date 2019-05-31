#ifndef PODER_H
#define PODER_H

#include <string>
using std::string;

class Poder{
    protected:
        string nombre;
        int nivel;
    public:
        Poder();
        Poder(string, int);

        string getNombre();
        void setNombre(string);

        int getNivel();
        void setNivel(int);

        //virtual string toString();
}; 
#endif
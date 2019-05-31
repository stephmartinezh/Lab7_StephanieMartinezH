#include "Fire.h"

Fire::Fire(){

}

Fire::Fire(int Cicatriz, int Victorias, string Origen, string Nombre, int Edad, edad Sexo):Persona(Origen, Nombre, Edad, Sexo){
    cicatriz = Cicatriz;
    victorias = Victorias;
}

int Fire::getCicatriz(){
    return cicatriz;
}

void Fire::setCicatriz(int c){
    cicatriz = c;
}

int Fire::getVictorias(){
    return victorias;
}

void Fire::setVictorias(int v){
    victorias = v;
}

string Fire::toString(){
    string cadena = "";
    cadena += "Maestro con ";
    cadena += cicatriz;
    cadena += " cicatrices y con ";
    cadena += victorias;
    cadena += " victoras";
    return cadena;
}
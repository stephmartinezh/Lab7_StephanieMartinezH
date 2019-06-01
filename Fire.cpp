#include "Fire.h"

Fire::Fire(){

}

Fire::Fire(int Cicatriz, int Victorias, string Origen, string Nombre, int Edad, char Sexo):Persona(Origen, Nombre, Edad, Sexo){
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
    cadena += "Maestro del fuego con ";
    cadena += cicatriz;
    cadena += " cicatrices, con ";
    cadena += victorias;
    cadena += " victoras";
    cadena += ". Su nombre es ";
    cadena += getNombre();
    cadena += ", viene de ";
    cadena += getOrigen();
    cadena += ", tiene ";
    cadena += getEdad();
    cadena += " años y es ";
    cadena += getSexo();
    return cadena;
}
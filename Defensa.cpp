#include "Defensa.h"

Defensa::Defensa(){

}
Defensa::Defensa(int r, int d, string n, int p):Poder(n, p){
    resistencia = r;
    duracion = d;
}

int Defensa::getResistencia(){
    return resistencia;
}
       
void Defensa::setResistencia(int r){
    resistencia = r;
}

int Defensa::getDuracion(){
    return duracion;
}

void Defensa::setDuracion(int d){
    duracion = d;
}

/*string Defensa::toString(){
    string cadena = "";
    cadena += "Duración: ";
    cadena += duracion;
    cadena += " Resistencia: ";
    cadena += resistencia;
    return cadena;
}*/
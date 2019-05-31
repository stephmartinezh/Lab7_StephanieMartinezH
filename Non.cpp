#include "Non.h"

Non::Non(){

}

Non::Non(string t, int f, int v,string Origen, string Nombre, int Edad, edad Sexo):Persona(Origen, Nombre, Edad, Sexo){
    trabajo = t;
    fuerza = f;
    velocidad = v;
}

string Non::getTrabajo(){
    return trabajo;
}

void Non::setTrabajo(string t){
    trabajo = t;
}

int Non::getFuerza(){
    return fuerza;
}
        
void Non::setFuerza(int f){
    fuerza = f;
}

int Non::getVelocidad(){
    return velocidad;
}

void Non::setVelocidad(int v){
    velocidad = v;
}

string Non::toString(){
    string cadena = "";
    cadena += "Trabajo: ";
    cadena += trabajo;
    cadena += " Fuerza: ";
    cadena += fuerza;
    cadena += " Velocidad: ";
    cadena += velocidad;
    return cadena;
}
#include "Non.h"

Non::Non(){

}

Non::Non(string t, int f, int v,string Origen, string Nombre, int Edad, char Sexo):Persona(Origen, Nombre, Edad, Sexo){
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
    cadena += "Persona normal que trabaja de  ";
    cadena += trabajo;
    cadena += " , su fuerza es de ";
    cadena += fuerza;
    cadena += ", su velocidad es de ";
    cadena += velocidad;
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
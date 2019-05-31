#include "Ofensivo.h"

Ofensivo::Ofensivo(){

}

Ofensivo::Ofensivo(int r, int f, string n, int p):Poder(n, p){
    rango = r;
    fuerza = f;
}

int Ofensivo::getRango(){
    return rango;
}

void Ofensivo::setRango(int r){
    rango = r;
}        

int Ofensivo::getFuerza(){
    return fuerza;
}

void Ofensivo::setFuerza(int f){
    fuerza = f;
}        

/*string Ofensivo::toString(){
    string cadena = "";
    cadena += "Rango: ";
    cadena += rango;
    cadena += " Fuerza: ";
    cadena += fuerza;
    return cadena;
}*/
#include "Invocacion.h"

Invocacion::Invocacion(){

}
        
Invocacion::Invocacion(string n, string e, string h, string t, string n, int p):Poder(n, p){
    nombre = n;
    especie = e;
    habilidad = h;
    tipo = t;
}

string Invocacion::getNombre(){
    return nombre;
}
        
void Invocacion::setNombre(string n){
    nombre = n;
}

string Invocacion::getEspecie(){
    return especie;
}
        
void Invocacion::setEspecie(string e){
    especie = e;
}

string Invocacion::getHabilidad(){
    return habilidad;
}
        
void Invocacion::setHabilidad(string h){
    habilidad = h;
}

string Invocacion::getTipo(){
    return tipo;
}
        
void Invocacion::setTipo(string t){
    tipo = t;
}

/*string Invocacion::toString(){
    string cadena = "";
    cadena += "Nombre: ";
    cadena += nombre;
    cadena += " Especie: ";
    cadena += especie;
    cadena += " Habilidad: ";
    cadena += habilidad;
    cadena += " Tipo: ";
    cadena += tipo;
    return cadena;
}*/
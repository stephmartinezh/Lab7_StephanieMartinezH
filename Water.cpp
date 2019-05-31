#include "Water.h"

Water::Water(){

}

Water::Water(string Tribu, string Arma,string Origen, string Nombre, int Edad, edad Sexo):Persona(Origen, Nombre, Edad, Sexo){
    tribu = Tribu;
    arma = Arma;
}

string Water::getTribu(){
    return tribu;
}

void Water::setTribu(string t){
    tribu = t;
}

string Water::getArma(){
    return arma;
}

void Water::setArma(string a){
    arma = a;
}

string Water::toString(){
    string cadena = "";
    cadena += "Persona de la tribu: ";
    cadena += tribu;
    cadena += " con arma: ";
    cadena += arma;
    return cadena;
}
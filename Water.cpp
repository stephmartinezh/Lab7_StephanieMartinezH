#include "Water.h"

Water::Water(){

}

Water::Water(string Tribu, string Arma,string Origen, string Nombre, int Edad, char Sexo):Persona(Origen, Nombre, Edad, Sexo){
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
    cadena += "Maestro del agua que viene de la tribu del ";
    cadena += tribu;
    cadena += ", su arma es ";
    cadena += arma;
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
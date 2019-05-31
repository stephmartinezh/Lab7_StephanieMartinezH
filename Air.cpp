#include "Air.h"

Air::Air(){

}

Air::Air(int Pelo, string Color, string Origen, string Nombre, int Edad, edad Sexo):Persona(Origen, Nombre, Edad, Sexo){
    pelo = Pelo;
    color = Color;
}

int Air::getPelo(){
    return pelo;
}

void Air::setPelo(int Pelo){
    pelo = Pelo;
}

string Air::getColor(){
    return color;
}

void Air::setColor(string Color){
    color = Color;
}

string Air::toString(){
    string cadena = "";
    cadena += "Persona con";
    cadena += pelo;
    cadena += " y el color de las flechas es: ";
    cadena += color;
    return cadena;
}
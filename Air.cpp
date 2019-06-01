#include "Air.h"

Air::Air(){

}

Air::Air(int Pelo, string Color, string Origen, string Nombre, int Edad, char Sexo):Persona(Origen, Nombre, Edad, Sexo){
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
    cadena += "Maestro del aire con ";
    cadena += pelo;
    cadena += " pelos y el color de las flechas ";
    cadena += color;
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
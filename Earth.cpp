#include "Earth.h"

Earth::Earth(){

}

Earth::Earth(int Coles, string Grad,string Origen, string Nombre, int Edad, edad Sexo):Persona(Origen, Nombre, Edad, Sexo){
    coles = Coles;
    graduacion = Grad;
}

int Earth::getColes(){
    return coles;
}

void Earth::setColes(int Coles){
    coles = Coles;
}

string Earth::getGraduacion(){
    return graduacion;
}

void Earth::setGraduacion(string g){
    graduacion = g;
}

string Earth::toString(){
    string cadena = "";
    cadena += "Coles: ";
    cadena += coles;
    cadena += " Graduación de ojos: ";
    cadena += graduacion;
    return cadena;
}
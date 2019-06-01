#include "Earth.h"

Earth::Earth(){

}

Earth::Earth(int Coles, string Grad,string Origen, string Nombre, int Edad, char Sexo):Persona(Origen, Nombre, Edad, Sexo){
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
    cadena += "Maestro de la tierra con ";
    cadena += coles;
    cadena += " coles, su graduación de ojos es ";
    cadena += graduacion;
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
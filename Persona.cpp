#include "Persona.h"

Persona::Persona(){

}

Persona::Persona(string Origen, string Nombre, int Edad, char Sexo){
    origen = Origen;
    nombre = Nombre;
    edad = Edad;
    sexo = Sexo;
}

string Persona::getOrigen(){
    return origen;
}

void Persona::setOrigen(string Origen){
    origen = Origen;
}

string Persona::getNombre(){
    return nombre;
}

void Persona::setNombre(string Nombre){
    nombre = Nombre;
}

int Persona::getEdad(){
    return edad;
}

void Persona::setEdad(int Edad){
    edad = Edad;
}

char Persona::getSexo(){
    return sexo;
}

void Persona::setSexo(char Sexo){
    sexo = Sexo;
}

vector<Poder*> Persona::getPoder(){
    return poder;
}
/*string Persona::toString(){
    return "Nombre: "<<getNombre()<<" Nación de origen: "<<getOrigen()<<" Edad: "<<getEdad()<<" Sexo: "<<getSexo();
}*/
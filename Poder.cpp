#include "Poder.h"

Poder::Poder(){

}
Poder::Poder(string n, int p){
    nombre = n;
    nivel = p;
}

string Poder::getNombre(){
    return nombre;
}
void Poder::setNombre(string n){
    nombre = n;
}

int Poder::getNivel(){
    return nivel;
}

void Poder::setNivel(int n){
    nivel = n;
}
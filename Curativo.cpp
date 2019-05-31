#include "Curativo.h"

Curativo::Curativo(){

}

Curativo::Curativo(string t, string n, int p):Poder(n, p){
    tipo = t;
}

string Curativo::getTipo(){
    return tipo;
}
        
void Curativo::setTipo(string t){
    tipo = t;
}

/*string Curativo::toString(){
    string cadena = "";
    cadena += "Tipo: ";
    cadena += tipo;
    return cadena;
}*/
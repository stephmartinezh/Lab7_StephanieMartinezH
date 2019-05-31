#include "Persona.h"
#include "Air.h"
#include "Fire.h"
#include "Water.h"
#include "Earth.h"
#include "Non.h"
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensa.h"
#include "Curativo.h"
#include "Invocacion.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;

int menu();

void agregar(vector<Persona*>);

int main(){
    int opcion;
    vector<Persona*> persona;
    do{
        opcion = menu();
        while(opcion <1 || opcion > 4){
            cout<<"El número que ha ingresado no es válido"<<endl;
            opcion = 0;
            opcion = menu();
        }
        if(opcion == 1){
            cout<<"-----------------------------------"<<endl;
            agregar(persona);
            cout<<"-----------------------------------"<<endl;

        }
        if(opcion == 2){
            cout<<"-----------------------------------"<<endl;

            cout<<"-----------------------------------"<<endl;
        }
    }while(opcion != 4);
    for (int i = 0; i < persona.size(); i++)
    {
        delete persona[i];
    }
    persona.clear();
    return 0;
}

int menu(){
    cout<<"     Menu"<<endl
        <<"1.- Agregar"<<endl
        <<"2.- Eliminar"<<endl
        <<"3.- Listar"<<endl
        <<"4.- Salir"<<endl;
    cout<<"     Ingrese una opción: ";
    int opcion;
    cin>> opcion;
    return opcion;
}

void agregar(vector<Persona*> persona){
    string origen, nombre;
    int edad, cont = 0, cond = 0;
    char sexo;
    cout<<"Ingrese la nación de origen: ";
    cin>>origen;
    cout<<"Ingrese el nombre de la persona: ";
    cin>>nombre;
    cout<<"Ingrese la edad: ";
    cin>>edad;
    cout<<"Ingrese una 'm' si es masculino o una 'f' si es femenino: ";
    char letra;
    cin>>letra;
    if(letra == 'm' || 'M'){
        sexo = 'm';
    }else{
        sexo = 'f';
    }
    cout<<"1.- Air Bender"<<endl<<"2.- Fire Bender"<<endl<<"3.- Water Bender"<<endl<<"4.- Earth Bender"<<endl<<"5.- Non Bender"<<endl;
    cout<<"     Ingrese una opción: ";
    int opcion;
    cin>>opcion;
    cout<<endl;
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
    if(opcion == 1){
        int pelo;
        string color;
        cout<<"Ingrese la cantidad de pelo: ";
        cin>>pelo;
        cout<<"Ingrese el color de las flechas: ";
        cin>>color;
        persona.push_back(new Air(pelo,color,origen,nombre,edad,sexo));
    }
    if(opcion == 2){
        cout<<"Ingrese el número de cicatrices: ";
        int numero;
        cin>>numero;
        cout<<"Ingrese el número de victorias: ";
        int victorias;
        cin>>victorias;
        persona.push_back(new Fire(numero,victorias,origen,nombre,edad,sexo));
    }
    if(opcion == 3){
        cout<<"Ingrese 1 si es de la tribu del norte o 2 si es de la tribu del sur: ";
        int o;
        cin>>o;
        string tribu;
        if(o == 1){
            tribu = "norte";
        }else{
            tribu = "sur";
        }
        cout<<"Ingrese el arma: ";
        string arma;
        cin>>arma;
        persona.push_back(new Water(tribu,arma,origen,nombre,edad,sexo));
    }
    if(opcion == 4){
        cout<<"Ingrese el número de coles: ";
        int coles;
        cin>>coles;
        cout<<"Ingrese la graduación de los ojos: ";
        string grad;
        cin>>grad;
        persona.push_back(new Earth(coles,grad,origen,nombre,edad,sexo));
    }
    if(opcion == 5){
        cout<<"Ingrese el trabajo: ";
        string trabajo;
        cin>>trabajo;
        cout<<"Ingrese la fuerza: ";
        int fuerza, velocidad;
        cin>>fuerza;
        cout<<"Ingrese la velocidad: ";
        cin>>velocidad;
        cond = 1;
        persona.push_back(new Non(trabajo, fuerza, velocidad, origen, nombre, edad, sexo));
    }
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;

    if(cond == 0){
        cout<<"Ingrese el nombre del poder especial: ";
        string nombrePoder;
        cin>>nombrePoder;
        cout<<"Ingrese el nivel del poder especial: ";
        int nivel;
        cin>>nivel;
        cout<<endl;
        cout<<"1.- Poder ofensivo"<<endl<<"2.- Poder defensivo"<<endl<<"3.- Poder curativo"<<endl<<"4.- Poder de invocación"<<endl;
        cout<<"     Ingrese una opción: ";
        int opcion2;
        cin>>opcion2;
        cout<<"-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-"<<endl;
        if(opcion2 == 1){
            cout<<"Ingrese el rango: ";
            int rango;
            cin>>rango;
            cout<<"Ingrese la fuerza: ";
            int fuerza;
            cin>>fuerza;
            persona[cont]->getPoder().push_back(new Ofensivo(rango,fuerza,nombre,nivel));
        }
        if(opcion2 == 2){
            cout<<"Ingrese la resistencia: ";
            int resistencia;
            cin>>resistencia;
            cout<<"Ingrese la duración: ";
            int duracion;
            cin>>duracion;
            persona[cont]->getPoder().push_back(new Defensa(resistencia,duracion,nombre,nivel));
        }
        if(opcion2 == 3){
            cout<<"Ingrese el tipo de curación: ";
            string tipo;
            cin>>tipo;
            persona[cont]->getPoder().push_back(new Curativo(tipo,nombre,nivel));
        }
        if(opcion2 == 4){
            cout<<"Ingrese el nombre: ";
            string nombre;
            cin>>nombre;
            cout<<"Ingrese la especie: ";
            string especie;
            cin>>especie;
            cout<<"Ingrese la habilidad: ";
            string habilidad;
            cin>>habilidad;
            cout<<"Ingrese el tipo: ";
            string tipo;
            cin>>tipo;
            persona[cont]->getPoder().push_back(new Invocacion(nombre,especie,habilidad,tipo,nombre,nivel));
        }
    cout<<"-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-"<<endl;
    }
    cout<<"Se ha agregado exitosamente"<<endl;
    cont++;
}
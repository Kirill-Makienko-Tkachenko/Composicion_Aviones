/*
Kirill Makienko Tkachenko
24/11/22
Composiciones de clases
*/

#include<iostream>
#include<string>
#pragma once
#include"LineaAerea.h"
using namespace std;


class Aeropuerto {
// Declarar parametros

    string nombre, ciudad;
    int capacidad, slots, cantidadLineaA; 
    LineaAerea lineasAereas[I]; // No se puede poner cantidad de Lineas aereas para aqui, se necesita una constante
public:
// Constructores y destructores
    Aeropuerto();
    ~Aeropuerto();
    Aeropuerto(string, string, int, int, int, LineaAerea[]);

// getter    
    string getNombre();
    string getCiudad();
    int getCapacidad();
    int getSlots();
    int getCantidadLineaA();

// setter
    void setNombre(string);
    void setCiudad(string);
    void setCapacidad(int);
    void setSlots(int);
    void setCantidadLineaA(int);
    void imprimeAeropuerto();
};

Aeropuerto::Aeropuerto(){
    nombre = "";
    ciudad = "";
    capacidad = 0;
    slots = 0;
    cantidadLineaA = 0;
}
Aeropuerto::~Aeropuerto(){}

Aeropuerto::Aeropuerto(string nombre, string ciudad, int capacidad, int slots, int cantidadLineaA, LineaAerea lineasAereas[]){
    this -> nombre = nombre;
    this -> ciudad = ciudad;
    this -> capacidad = capacidad;
    this -> slots = slots;
    this -> cantidadLineaA = cantidadLineaA;
}

// Definir getters

string Aeropuerto::getNombre(){
    return nombre;
}
string Aeropuerto::getCiudad(){
    return ciudad;
}
int Aeropuerto::getCapacidad(){
    return capacidad;
}
int Aeropuerto::getSlots(){
    return slots;
}
int Aeropuerto::getCantidadLineaA(){
    return cantidadLineaA;
}

// Definir setters

void Aeropuerto::setNombre(string nom){
    nom = nombre;
}
void Aeropuerto::setCiudad(string cd){
    cd = ciudad;
}
void Aeropuerto::setCapacidad(int cap){
    cap = capacidad;
}
void Aeropuerto::setSlots(int slots){
    this -> slots = slots;
}
void Aeropuerto::setCantidadLineaA(int cant){
    if(cant < 0 && cant > I){
        cout << "Cantidad incopatible de lineas aereas\n";
    }
    else{
        cant = cantidadLineaA;
    }
}
void Aeropuerto::imprimeAeropuerto(){
    cout << nombre << " " << ciudad  << " " << capacidad << " " << slots << " " << cantidadLineaA;
}
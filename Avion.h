/*
Kirill Makienko Tkachenko
17/11/22
Composiciones de clases
*/

#include<iostream>
#include<string>
#pragma once
#include"Modelo.h"
using namespace std;

class Avion {
// Declarar parametros
    string matricula, nombre;
    Modelo modelo;

    public:
// Contructores y destructores
    Avion();
    Avion(string, string, Modelo);
    ~Avion();
//getter
    string getMatricula();
    string getNombre();
    Modelo getModelo(); //getter de clase modelo, de la clase que yo hice llama modelo, con esta voy a obtener informacion de la clase modelo
    float getCambiaHoras();// getter para obtener informacion de horasVuelo de modelo.h
//setter
    void setMatricula(string);
    void setNombre(string);
    void setModelo(Modelo); //setter de clase modelo, de la clase quye yo hice llamada modelo, con esta voy a poder modificar la clase modelo desde avion, A1.setModelo.setHorasVuelo
    void setCambiaHoras(float);// Con este setter estoy llamando una funcion para cambiar las horas de modelo, que puedo llamar desde el main
    void imprimeAvion();
};
// Cosntructores

Avion::Avion(){
    matricula = "A987654321";
    nombre = "";
}
Avion::Avion(string matricula,string nombre, Modelo modelo){
    this -> matricula = matricula;
    this -> nombre = nombre;
    this -> modelo = modelo;
}
Avion::~Avion(){}

// Definir getters

string Avion::getMatricula(){
    return matricula;
}
string Avion::getNombre(){
    return nombre;
}
Modelo Avion::getModelo(){
    return modelo;
}
float Avion::getCambiaHoras(){
    return modelo.getHorasVuelo();
}



//setter

void Avion::setMatricula(string matricula){
    this -> matricula = matricula;
}
void Avion::setModelo(Modelo modelo){
    this -> modelo = modelo; // Antes estaba como this -> matricula = matricula; no se si esta bien pero quiero pregutnarle a la maestra
}

void Avion::setCambiaHoras(float H){
    modelo.setHorasVuelo(H);
}

void Avion::setNombre(string H){
    nombre = H;    
}


void Avion::imprimeAvion(){
    cout << nombre << " " << matricula << " ";
    modelo.imprimeModelo();
}
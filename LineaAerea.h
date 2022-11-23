/*
Kirill Makienko Tkachenko
22/11/22
Composiciones de clases
*/

#include<iostream>
#include<string>
#pragma once
#include"Avion.h"
using namespace std;

class LineaAerea{
// Vamos a declarar los parametros del objeto
    string identificador, nombre, pais;
    int flotilla;
    Avion avion; //Falta importar este tipo de dato como array

    public:
// Contructores y destructores
    LineaAerea(); // Constructor
    LineaAerea(string,string,string,int, Avion);
    ~LineaAerea();
//getter
    string getIdentificador();
    string getNombre();
    string getPais();
    string getNMatricula(); //Obtener matricula de avion.h
    int getFlotilla();
//setter
    void setIdentificador(string);
    void setNombre(string);
    void setPais(string);
    void setFlotilla(int);
    void imprimeLineaAerea();
    

};
// Constructores

LineaAerea::LineaAerea(){
    identificador = "";
    nombre = "";
    pais = "";
    flotilla = 0;
}
LineaAerea::LineaAerea(string identificador, string nombre, string pais, int flotilla, Avion avion){
    this -> identificador = identificador;
    this -> nombre = nombre;
    this -> pais = pais;
    this -> flotilla = flotilla;
}
LineaAerea::~LineaAerea(){}
// Definir getters

string LineaAerea::getIdentificador(){
    return identificador;
}
string LineaAerea::getNombre(){
    return nombre;
}
string LineaAerea::getPais(){
    return pais;
}
int LineaAerea::getFlotilla(){
    return flotilla;
}
string LineaAerea::getNMatricula(){
    return avion.getMatricula();
}

// Definir setter

void LineaAerea::setIdentificador(string identificador){
    this -> identificador = identificador;
}
void LineaAerea::setNombre(string nombre){
    this -> nombre = nombre;
}
void LineaAerea::setPais(string pais){
    this -> pais = pais;
}
void LineaAerea::setFlotilla(int flotilla){
    this -> flotilla = flotilla;
}
void LineaAerea::imprimeLineaAerea(){
    cout << identificador << " " << nombre << " " << pais << "";
    avion.imprimeAvion();
}
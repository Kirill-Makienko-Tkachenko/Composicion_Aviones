/*
Kirill Makienko Tkachenko
17/11/22
Composiciones de clases
*/

#include<iostream>
#include<string>
#pragma once
using namespace std;

class Modelo{
// Vamos a declarar los parametros del objeto
    string identificador;
    int numPasajeros, numTripulantes;
    float velodicadMax, horasVuelo;
    char categoriaDestino;

    public:
// Definir 2 construtores, uno generico y otro donde se pueden definir parametros
    Modelo(); // Constructor
    Modelo(string, int, int, float, float, char); // Constructor definido
    ~Modelo(); // Destructor
//getter
    string getIdentificador();
    int getNumPasajeros();
    int getNumTripulantes();
    float getVelodicadMax();
    float getHorasVuelo();
    char getCategoriaDestino();
//setter
    void setIdentificador(string);
    void setNumPasajeros(int);
    void setNumTripulantes(int);
    void setVelodicadMax(float);
    void setHorasVuelo(float);
    void setCategoriaDestino(char);
    void imprimeModelo();
};

// Definir constructores
Modelo::Modelo(){
    identificador = "";
    numPasajeros = 0;
    numTripulantes = 0;
    velodicadMax = 0;
    horasVuelo = 0;
    categoriaDestino = 'A';

}
Modelo::Modelo(string identificador, int numPasajeros, int numTripulantes, float velocidadMax, float horasVuelo, char categoriaDestino){
    this -> identificador = identificador;
    this -> numPasajeros = numPasajeros;
    this -> numTripulantes = numTripulantes;
    this -> velodicadMax = velocidadMax;
    this -> horasVuelo = horasVuelo;
    this -> categoriaDestino = categoriaDestino;
}
Modelo::~Modelo(){}

// Definir funciones getter

string Modelo::getIdentificador(){
    return identificador;
}
int Modelo::getNumPasajeros(){
    return numPasajeros;
}
int Modelo::getNumTripulantes(){
    return numTripulantes;
}
float Modelo::getVelodicadMax(){
    return velodicadMax;
}
float Modelo::getHorasVuelo(){
    return horasVuelo;
}
char Modelo::getCategoriaDestino(){
    return categoriaDestino;
}

// Definir los setters

void Modelo::setIdentificador(string identificador) {
    this -> identificador = identificador;
}
void Modelo::setNumPasajeros(int numPasajeros) {
    this -> numPasajeros = numPasajeros;
}
void Modelo::setNumTripulantes(int numTripulantes) {
    this -> numTripulantes = numTripulantes;
}
void Modelo::setVelodicadMax(float velocidadMax) {
    this -> velodicadMax = velocidadMax;
}
void Modelo::setHorasVuelo(float horasVuelo) {
    this -> horasVuelo = horasVuelo;
}
void Modelo::setCategoriaDestino(char categoriaDestino) {
    this -> categoriaDestino = categoriaDestino;
}
void Modelo::imprimeModelo() {
    cout << identificador << " " << numPasajeros << " " << numTripulantes << " " << velodicadMax << " " << horasVuelo << " " << categoriaDestino<<endl;
}
/*
Kirill Makienko Tkachenko
22/11/22
Composiciones de clases
*/

/*
Notas miscelaneas

-para importar un tipo de archivo de texto lo debo de declarar como ifstream, por ejemplo, ifstream MiArchivo;
-\t tabulador

*/

#include<iostream>
#include<string>

#include"Avion.h"
#ifndef LINEAAEREA_H
#define LINEAAEREA_H // Estos 2 comandos son iguales a pragma once, nomas que este si universal
using namespace std;


const int I = 5;
class LineaAerea{
// Vamos a declarar los parametros del objeto
    string identificador, nombre, pais;
    int flotilla;
    Avion avion[I]; //Falta importar este tipo de dato como array

    public:
// Contructores y destructores
    LineaAerea(); // Constructor
    LineaAerea(string,string,string,int, Avion[]);
    ~LineaAerea();
//getter
    string getIdentificador();
    string getNombre();
    string getPais();
    string getNMatricula(int); //Obtener matricula de avion.h
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
    //for(int i = 0; i<I; i++){ // Escencialmente este for es para que no solo llame al constructor por omision de la clase Avion, y que este ponga el nombre de la aerolinea como nombre de avion
    //    avion[i].setNombre(nombre); 
    //} // Este loop no sirve, no tengo idea de porque ni tengo el tiempo de averiguarlo
}
LineaAerea::LineaAerea(string identificador, string nombre, string pais, int flotilla, Avion avion[I]){
    this -> identificador = identificador;
    this -> nombre = nombre;
    this -> pais = pais;
    this -> flotilla = flotilla;
    for(int i = 0; i<I; i++){ // Voy a intentar abrir una interaccion con el usuario para saber como se hace
        this -> avion[i].setNombre(nombre);
    } // Este loop no sirve, no tengo idea de porque
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

string LineaAerea::getNMatricula(int H){
    return avion[H].getMatricula();
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
   for(int i = 0; i<I; i++){ // Voy a intentar abrir una interaccion con el usuario para saber como se hace
        avion[i].imprimeAvion();
    }
}








#endif // Para cerrar el ifndef
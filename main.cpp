/*
Kirill Makienko Tkachenko
17/11/22
Composiciones de clases
*/



#include<iostream>
#pragma once
#include"Modelo.h" // Esto es para que si llamo una funcion, solo se compile una vez en vez de todas las veces que la voy a llamar
#include"Avion.h"
using namespace std;

int main(){

    Modelo M1;
    Modelo M2("A123456789", 100, 3, 800, 2500, 'B');

    Avion A1("0123456","Avion 1", M2); // Estoy pasando el atributo de M2 que tiene otros atributos para tener modelos personalizados de aviones

    cout << A1.getCambiaHoras() << endl;


    A1.imprimeAvion();

    A1.setCambiaHoras(8000);

    A1.imprimeAvion();

    //M2.imprimeModelo();

    //M1.setHorasVuelo(2000);
    //M1.imprimeModelo();

    
    return 0;
}
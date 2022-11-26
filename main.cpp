/*
Kirill Makienko Tkachenko
17/11/22
Composiciones de clases
*/



#include<iostream>
#pragma once
#include"Modelo.h" // Esto es para que si llamo una funcion, solo se compile una vez en vez de todas las veces que la voy a llamar
#include"Avion.h"
#include"LineaAerea.h"
#include"Aeropuerto.h"
using namespace std;

int main(){
// Probamos Modelo

    Modelo M1, M2("123654789", 60, 5, 850, 1500, 'A');
                 //Identificador, Num pasajeros, Num tripulantes, vel max, horas vuelo, Cat destino
    M1.imprimeModelo();
    M2.imprimeModelo();
    M1.setHorasVuelo(500);
    M1.imprimeModelo();
    cout << "\n";

// Probamos Avion 

    Avion A1, A2("A01424301","Boeing 737", M2), A3[5];
    A1.imprimeAvion();
    A2.imprimeAvion();
    A1.setCambiaHoras(800);
    A1.imprimeAvion();
    cout << "\n";

// Probamos Linea Aerea

    LineaAerea LA1, LA2("MEX", "Aeromexico", "Mexico", 5, A3), LA3[5]; // No sirve lo de llamar el array
    LA1.imprimeLineaAerea();
    LA2.imprimeLineaAerea();
    LA1.setNombre("Volaris");
    LA1.imprimeLineaAerea();
    //Como se rompio el for loop no puedo cambiar ningun atributo de aviones, por lo que va a llamar aviones por defecto

// Probamos Aeropuerto

    Aeropuerto AE1, AE2("Aeropuerto Benito Juarez", "CDMX", 100000,40,20, LA3); //No sirve lo de llamar el array
    AE1.setCapacidad(5000);
    AE1.imprimeAeropuerto();
    AE2.imprimeAeropuerto();

    return 0;
}













/*
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
*/
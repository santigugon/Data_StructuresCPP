#include <iostream>
#include "checkIn.h"

using namespace std;

CheckIn::CheckIn() {
    // Constructor default
    numMaletas = 0;
    pesoLimiteKg = 0;
    horasDeAntelacion = 0;
}

CheckIn::CheckIn(int maletas, int pesoLimite, int antelacion) {
    // Constructor sobrecargado
    numMaletas = maletas;
    pesoLimiteKg = pesoLimite;
    horasDeAntelacion = antelacion;
}

int CheckIn::getNumMaletas() const {
    return numMaletas;
}

int CheckIn::getPesoLimiteKg() const {
    return pesoLimiteKg;
}

int CheckIn::getHorasDeAntelacion() const {
    return horasDeAntelacion;
}


bool CheckIn::getCompletado() const {
    return completado;
}

void CheckIn::setCompletado(bool vCompletado) {
    completado = vCompletado;
}

void CheckIn::setNumMaletas(int maletas) {
    numMaletas = maletas;
}

void CheckIn::setPesoLimiteKg(int pesoLimite) {
    pesoLimiteKg = pesoLimite;
}

void CheckIn::setHorasDeAntelacion(int antelacion) {
    horasDeAntelacion = antelacion;
}

void CheckIn::imprimirInformacion()  {
    cout << "Número de maletas permitidas: " << numMaletas << endl;
    cout << "Peso límite de las maletas: " << pesoLimiteKg << " kg" << endl;
    cout << "Horas de antelación requeridas: " << horasDeAntelacion << " horas" << endl;
}

void CheckIn::validarAntelacion() const {
    int horasDeAntelacion;
     cout<<endl;
    cout<<"Cuantas horas faltan para el vuelo?"<<endl;
    cin>>horasDeAntelacion;
    cout<<endl;
try{
    if (horasDeAntelacion <= 1)
        throw "No se ha llegado con la antelacion suficiente,lo siento";

    cout<<"Todo en orden puedes ir a tu sala a abordar";

    } catch(const char* msg) {
        cerr<< msg<<endl;
    }
}

#include <iostream>
#include "tarjetaembarque.h"

using namespace std;

TarjetaEmbarque::TarjetaEmbarque() {
    pasajero = nullptr;
    vuelo = nullptr;
    aerolinea = "";
    puertaEmbarque = "";
    numBarras = "";
}

TarjetaEmbarque::TarjetaEmbarque(Pasajero* p, Vuelo* v, const string& aerolinea, const string& puerta, const string& barras) {
    pasajero = p;
    vuelo = v;
    this->aerolinea = aerolinea;
    puertaEmbarque = puerta;
    numBarras = barras;
}

Pasajero TarjetaEmbarque::getPasajero() const {

    Pasajero pasajero2= *pasajero;
    return pasajero2;
}

Vuelo* TarjetaEmbarque::getVuelo() const {
    return vuelo;
}

string TarjetaEmbarque::getAerolinea() const {
    return aerolinea;
}

string TarjetaEmbarque::getPuertaEmbarque() const {
    return puertaEmbarque;
}

string TarjetaEmbarque::getNumBarras() const {
    return numBarras;
}

void TarjetaEmbarque::setPasajero(Pasajero* p) {
    pasajero = p;
}

void TarjetaEmbarque::setVuelo(Vuelo* v) {
    vuelo = v;
}

void TarjetaEmbarque::setAerolinea(const string& aerolinea) {
    this->aerolinea = aerolinea;
}

void TarjetaEmbarque::setPuertaEmbarque(const string& puerta) {
    puertaEmbarque = puerta;
}

void TarjetaEmbarque::setNumBarras(const string& barras) {
    numBarras = barras;
}

void TarjetaEmbarque::imprimirInformacion() {
    cout << "Tarjeta de Embarque" << endl;
    cout << "-------------------" << endl;
    cout << "Nombre: " << pasajero->getNombre() << endl;
    cout << "Vuelo: " << vuelo->getNumeroVuelo() << endl;
    cout << "Aerolínea: " << aerolinea << endl;
    cout << "Puerta de Embarque: " << puertaEmbarque << endl;
    cout << "Codigo de Barras: " << numBarras << endl;
    cout << "-------------------" << endl;
}

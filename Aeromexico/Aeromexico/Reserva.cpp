#include <iostream>
#include<string>
#include "Reserva.h"

using namespace std;

Reserva::Reserva(){
   IDReserva="A00Undefined";
    vuelo=new Vuelo(); //
    pasajero=new Pasajero();
    fechaReserva="00/00/0000";
    estatus="N/A";
}
Reserva::Reserva(string valId, Vuelo *valVuelo, Pasajero* valPasajero, string valFechaReserva, string valEstatus){
   IDReserva=valId;
    vuelo=valVuelo; //
    pasajero=valPasajero;
    fechaReserva=valFechaReserva;
    estatus=valEstatus;
}

// Getters
string Reserva::getIDReserva() const {
    return IDReserva;
}

Vuelo* Reserva::getVueloApu() const {
    return vuelo;
}
Vuelo Reserva::getVuelo() const {
    Vuelo vueloNormal=*vuelo;
    return vueloNormal;
}

Pasajero* Reserva::getPasajeroApu() const {
    return pasajero;
}
Pasajero Reserva::getPasajero() const {
    Pasajero pasajero2= *pasajero;
    return pasajero2;
}

string Reserva::getFechaReserva() const {
    return fechaReserva;
}

string Reserva::getEstatus() const {
    return estatus;
}

// Setters
void Reserva::setIDReserva(const string& ID) {
    IDReserva = ID;
}

void Reserva::setVuelo(Vuelo* v) {
    vuelo = v;
}

void Reserva::setPasajero(Pasajero* p) {
    pasajero = p;
}

void Reserva::setFechaReserva(const string& fecha) {
    fechaReserva = fecha;
}

void Reserva::setEstatus(const string& est) {
    estatus = est;
}

void Reserva::reservarVuelo(Vuelo* vuelo) {
 if (vuelo->obtenerAsientosDisponibles() > 0) {
 vuelo->reservarAsiento();
 this->vuelo = vuelo;
 } else {
 throw runtime_error("No hay asientos disponibles en el vuelo seleccionado.");
 }
 }

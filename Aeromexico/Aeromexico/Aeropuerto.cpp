#include <iostream>
#include<string>
#include "Aeropuerto.h"

using namespace std;
//Constructores
Aeropuerto::Aeropuerto(){
  codigoAeropuerto="000A";
  nombre="N/E";
  ciudad="N/E";
  pais="N/E";

}
Aeropuerto::Aeropuerto(string valCodigoAeropuerto, string valNombre, string valCiudad, string valPais){
  codigoAeropuerto=valCodigoAeropuerto;
  nombre=valNombre;
  ciudad=valCiudad;
  pais=valPais;

}

// Getters
string Aeropuerto::getCodigoAeropuerto() const {
    return codigoAeropuerto;
}

string Aeropuerto::getNombre() const {
    return nombre;
}

string Aeropuerto::getCiudad() const {
    return ciudad;
}

string Aeropuerto::getPais() const {
    return pais;
}

// Setters
void Aeropuerto::setCodigoAeropuerto(const string& codigo) {
    codigoAeropuerto = codigo;
}

void Aeropuerto::setNombre(const string& nombre) {
    this->nombre = nombre;
}

void Aeropuerto::setCiudad(const string& ciudad) {
    this->ciudad = ciudad;
}

void Aeropuerto::setPais(const string& pais) {
    this->pais = pais;
}

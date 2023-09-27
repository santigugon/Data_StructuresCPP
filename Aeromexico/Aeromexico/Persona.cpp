#include <iostream>
#include<string>
#include "Persona.h"

using namespace std;

Persona::Persona(){
  nombre="N/A";
  direccion="N/A";
  fechaNacimiento="N/A";
}
Persona::Persona(string valNombre, string valDireccion, string valFechaNacimiento){
  nombre=valNombre;
  direccion=valDireccion;
  fechaNacimiento=valFechaNacimiento;
}
// Getters
string Persona::getNombre() const {
    return nombre;
}

string Persona::getDireccion() const {
    return direccion;
}

string Persona::getFechaNacimiento() const {
    return fechaNacimiento;
}

// Setters
void Persona::setNombre(const string& nombre) {
    this->nombre = nombre;
}

void Persona::setDireccion(const string& direccion) {
    this->direccion = direccion;
}

void Persona::setFechaNacimiento(const string& fechaNacimiento) {
    this->fechaNacimiento = fechaNacimiento;
}

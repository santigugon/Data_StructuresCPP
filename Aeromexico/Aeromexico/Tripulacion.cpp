#include <iostream>
#include <string>
#include "Tripulacion.h"

using namespace std;

Tripulacion::Tripulacion(){
ID="0000";
puesto="Dr. undefined";
}

Tripulacion::Tripulacion(string valNombre, string valDireccion, string valFechaNacimiento, string valId, string valPuesto):Persona(valNombre,valDireccion,valFechaNacimiento){
ID=valId;
puesto=valPuesto;
}


// Getters
string Tripulacion::getID() const {
    return ID;
}

string Tripulacion::getPuesto() const {
    return puesto;
}

// Setters
void Tripulacion::setID(const string& ID) {
    this->ID = ID;
}

void Tripulacion::setPuesto(const string& puesto) {
    this->puesto = puesto;
}

void Tripulacion::imprimirInformacion (){
cout<<"Tripulacion: "<<this->getNombre()<<" fecha de nacimiento: "<<this->getFechaNacimiento()<<" direccion: "<<this->getDireccion()<<" id: "<<this->getID()<<" y email: "<< this->getPuesto()<<endl;

}

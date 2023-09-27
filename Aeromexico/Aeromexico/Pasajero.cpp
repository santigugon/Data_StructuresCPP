#include <iostream>
#include<string>
#include "Pasajero.h"
using namespace std;
// Getters

Pasajero::Pasajero(){
ID="0000";
email="undefined@gmail.com";
}

Pasajero::Pasajero(string valNombre, string valDireccion, string valFechaNacimiento, string valId, string valEmail):Persona(valNombre,valDireccion,valFechaNacimiento){
ID=valId;
email=valEmail;
}
string Pasajero::getID() const {
    return ID;
}

string Pasajero::getEmail() const {
    return email;
}

// Setters
void Pasajero::setID(const string& ID) {
    this->ID = ID;
}

void Pasajero::setEmail(const string& email) {
    this->email = email;
}
void Pasajero::imprimirInformacion(){

cout<<"El pasajero con nombre: "<<this->getNombre()<<" fecha de nacimiento: "<<this->getFechaNacimiento()<<" direccion: "<<this->getDireccion()<<" id: "<<this->getID()<<" y email: "<< this->getEmail()<<endl;
}
void Pasajero::generarResumen() const {
        cout << "Resumen del pasajero:" << endl;
        cout << "ID: " << ID << endl;
        cout << "Email: " << email << endl;
        cout << "Nombre: " << this->getNombre() << endl;
        cout << "Dirección: " << this->getDireccion() << endl;
        cout << "Fecha de nacimiento: " << this->getFechaNacimiento() << endl;
    }

void Pasajero::realizarcheckin() {
    // Implementación del método realizarcheckin
    // ...
}

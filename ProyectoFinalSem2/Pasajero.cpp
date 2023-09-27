#include <iostream>
#include<string>
#include "Pasajero.h"
#include "Reserva.h"
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
cout<<endl;
cout<<"El pasajero con nombre: "<<this->getNombre()<<endl<<"Fecha de nacimiento: "<<this->getFechaNacimiento()<<endl<<"Direccion: "<<this->getDireccion()<<endl<<"Id: "<<this->getID()<<endl<<"Email: "<< this->getEmail()<<endl;
}
void Pasajero::generarResumen() const {
        cout << "Resumen del pasajero:" << endl;
        cout << "ID: " << ID << endl;
        cout << "Email: " << email << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Dirección: " << direccion << endl;
        cout << "Fecha de nacimiento: " << fechaNacimiento << endl;
    }

void Pasajero::reservarVuelo(){
    string IDReserva;
    string fechaReserva;
 string estatus;
   string numeroVuelo;

 string origen;
 string destino;
 string horaSalida;
 string horaLlegada;
 int asientos;
 int numPasajeros;


    cout << "Ingrese el ID: ";
    cin >> IDReserva;

    // Solicitar al usuario otros datos y guardar en las variables correspondientes
    // Ejemplo:
    cout << "Ingrese el número de vuelo: ";
    cin >> numeroVuelo;

    cout << "Ingrese el origen: ";
    cin >> origen;

    cout << "Ingrese el destino: ";
    cin >> destino;

    cout << "Ingrese la hora de salida: ";
    cin >> horaSalida;

    cout << "Ingrese la hora de llegada: ";
    cin >> horaLlegada;

    cout << "Ingrese la cantidad de asientos disponibles: ";
    cin >> asientos;

    cout << "Ingrese el número de pasajeros: ";
    cin >> numPasajeros;

 Vuelo* vuelo= new Vuelo(numeroVuelo,origen,destino,horaSalida,horaLlegada,asientos,numPasajeros);


    cout << "Ingrese el id de la Reserva: ";
    cin >> IDReserva;

    cout << "Ingrese la fecha de reserva: ";
    cin >> fechaReserva;

Pasajero* pasajero= new Pasajero(this->nombre,this->direccion,this->fechaNacimiento,this->ID,this->email);
    Reserva* reserva= new Reserva(IDReserva, vuelo,pasajero,fechaReserva,"Confirmada");


}

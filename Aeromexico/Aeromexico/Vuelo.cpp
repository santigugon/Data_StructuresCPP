
#include<string>
#include <iostream>
#include "Vuelo.h"

Vuelo::Vuelo(){

  numeroVuelo="0A";
  origen="N/E";
  destino="N/E";
  horaSalida="00:00";
  horaLlegada="00:00";
  asientos=0;
  numPasajeros=0;
}
Vuelo::Vuelo(string nVuelo, string valOrigen, string valDestino, string valHoraSalida, string valHoraLlegada, int nAsientos, int nPasajeros ){

  numeroVuelo=nVuelo;
  origen=valOrigen;
  destino=valDestino;
  horaSalida=valHoraSalida;
  horaLlegada=valHoraLlegada;
  asientos=nAsientos;
  numPasajeros=nPasajeros;
}


 string Vuelo::getNumeroVuelo() const {
        return numeroVuelo;
    }

    void Vuelo::setNumeroVuelo(const string& numero) {
        numeroVuelo = numero;
    }

    // Getter y Setter para el origen del vuelo
    string Vuelo::getOrigen() const {
        return origen;
    }

    void Vuelo::setOrigen(const string& aeropuertoOrigen) {
        origen = aeropuertoOrigen;
    }

    // Getter y Setter para el destino del vuelo
    string Vuelo::getDestino() const {
        return destino;
    }

    void Vuelo::setDestino(const string& aeropuertoDestino) {
        destino = aeropuertoDestino;
    }

    // Getter y Setter para la hora de salida del vuelo
    string Vuelo::getHoraSalida() const {
        return horaSalida;
    }

    void Vuelo::setHoraSalida(const string& hora) {
        horaSalida = hora;
    }

    // Getter y Setter para la hora de llegada del vuelo
    string Vuelo::getHoraLlegada() const {
        return horaLlegada;
    }

    void Vuelo::setHoraLlegada(const string& hora) {
        horaLlegada = hora;
    }

    // Getter y Setter para la cantidad de asientos disponibles en el vuelo
    int Vuelo::getAsientos() const {
        return asientos;
    }

    void Vuelo::setAsientos(int cantidad) {
        asientos = cantidad;
    }

    void Vuelo::setNumPasajeros(int nPasajeros){
    numPasajeros=nPasajeros;
    }
    int Vuelo::getNumPasajeros()const{
    return numPasajeros;
    }

     void Vuelo::generarResumen() const {
        cout << "Resumen del vuelo:" << endl;
        cout << "Numero de vuelo: " << numeroVuelo << endl;
        cout << "Origen: " << origen << endl;
        cout << "Destino: " << destino << endl;
        cout << "Hora de salida: " << horaSalida << endl;
        cout << "Hora de llegada: " << horaLlegada << endl;
        cout << "Asientos totales: " << asientos << endl;
        cout << "Número de pasajeros: " << numPasajeros << endl;
    }



    void Vuelo::reservarAsiento(){
      if (asientos-numPasajeros > 0) {
    numPasajeros=numPasajeros+1;
    } else {
    throw runtime_error("No hay asientos disponibles en este vuelo.");
    }
    };

    void Vuelo::cancelarReserva(){
    numPasajeros=numPasajeros-1;


    };

    int Vuelo::obtenerAsientosDisponibles()const{
    return asientos-numPasajeros;
    };

    bool Vuelo::validarVuelo()const{
    if (!origen.empty()&&
        !destino.empty()&&
        !horaSalida.empty()&&
        !horaLlegada.empty()&&
        asientos>0&&
        origen!="N/E"&&
        destino!="N/E"&&
        horaSalida!="00:00"&&
        horaLlegada!="00:00") {
    return true;
    }else{
    return false;
    }
    };

#include "Cliente.h"

 Cliente::Cliente(){
    numReservas=0;
    numPuntos=0;
    fechaPrimerCompra="00/00/0000";}

    Cliente::Cliente(string valNombre, string valDireccion, string valFechaNacimiento,int nReservas, int nPuntos, string valFechaPrimerCompra):Persona(valNombre, valDireccion, valFechaNacimiento){
    numReservas=nReservas;
    numPuntos=nPuntos;
    fechaPrimerCompra=valFechaPrimerCompra;
    }

 int Cliente::getNumReservas() const {
        return numReservas;
    }

    void Cliente::setNumReservas(int numReservas) {
        this->numReservas = numReservas;
    }

    int Cliente::getNumPuntos() const {
        return numPuntos;
    }

    void Cliente::setNumPuntos(int numPuntos) {
        this->numPuntos = numPuntos;
    }

    std::string Cliente::getFechaPrimerCompra() const {
        return fechaPrimerCompra;
    }

    void Cliente::setFechaPrimerCompra(const std::string& fechaPrimerCompra) {
        this->fechaPrimerCompra = fechaPrimerCompra;
    }

        void Cliente::imprimirInformacion()  {

        cout << "Número de Reservas: " << numReservas << endl;
        cout << "Número de Puntos: " << numPuntos << endl;
        cout << "Fecha de Primera Compra: " << fechaPrimerCompra << endl;
    }

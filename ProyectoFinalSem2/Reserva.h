#include <iostream>
#include<string>
#include "Vuelo.h"
#include "Pasajero.h"

using namespace std;

#ifndef RESERVA_H_INCLUDED
#define RESERVA_H_INCLUDED

class Reserva{
private:
    string IDReserva;
     Vuelo * vuelo; // Esto es una relación de asociación. Cada reserva está asociada a un vuelo
     Pasajero * pasajero; // Cada reserva está asociada a un pasajero
     string fechaReserva;
     string estatus;
public:
    Reserva();
    ~Reserva();
    Reserva(string, Vuelo*, Pasajero*, string, string);
    string getIDReserva() const;
    Vuelo* getVueloApu() const;
    Pasajero* getPasajeroApu() const;
    Vuelo getVuelo() const;
    Pasajero getPasajero() const;
    string getFechaReserva() const;
    string getEstatus() const;

    // Setters
    void setIDReserva(const string& ID);
    void setVuelo(Vuelo* v);
    void setPasajero(Pasajero* p);
    void setFechaReserva(const string& fecha);
    void setEstatus(const string& est);
    void reservarVuelo(Vuelo* v);

    //void imprimirInformacion()override;
    void cancelarReserva();
};


#endif // RESERVA_H_INCLUDED

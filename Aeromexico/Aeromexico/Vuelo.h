#include <iostream>
#include<string>
#ifndef VUELO_H_INCLUDED
#define VUELO_H_INCLUDED
//  Clase Padre
using namespace std;

class Vuelo {
 string numeroVuelo;
 string origen;
 string destino;
 string horaSalida;
 string horaLlegada;
 int asientos;
 int numPasajeros;
public:

    Vuelo();
    Vuelo(string,string, string, string, string,int,int);
    // Métodos públicos para establecer y obtener la información de vuelo
  // Getters
    string getNumeroVuelo() const;
    string getOrigen() const;
    string getDestino() const;
    string getHoraSalida() const;
    string getHoraLlegada() const;
    int getAsientos() const;
    int getNumPasajeros() const;

    // Setters
    void setNumeroVuelo(const string& numero);
    void setOrigen(const string& origen);
    void setDestino(const string& destino);
    void setHoraSalida(const string& horaSalida);
    void setHoraLlegada(const string& horaLlegada);
    void setAsientos(int asientos);
    void setNumPasajeros(int);
    void generarResumen()const;


//Metodos aparte

    void reservarAsiento();
    void cancelarReserva();
    int obtenerAsientosDisponibles()const;
    bool validarVuelo()const;

 // También podrían existir métodos para gestionar la disponibilidad de asientos

 int disponibilidadAsientos();
};

#endif // VUELO_H_INCLUDED

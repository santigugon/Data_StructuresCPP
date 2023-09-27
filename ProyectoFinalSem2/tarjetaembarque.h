
#include "Pasajero.h"
#include "Reserva.h"
#include "Vuelo.h"
#include "Imprimible.h"

#ifndef TARJETAEMBARQUE_H_INCLUDED
#define TARJETAEMBARQUE_H_INCLUDED

class TarjetaEmbarque:public Imprimible{
private:
    Pasajero* pasajero;
    Vuelo* vuelo;
    string aerolinea;
    string puertaEmbarque;
    string numBarras;
public:
 TarjetaEmbarque();
    TarjetaEmbarque(Pasajero* p, Vuelo* v, const string& aerolinea, const string& puerta, const string& barras);

    // Getters
    Pasajero getPasajero() const;
    Vuelo* getVuelo() const;
    string getAerolinea() const;
    string getPuertaEmbarque() const;
    string getNumBarras() const;

    // Setters
    void setPasajero(Pasajero* p);
    void setVuelo(Vuelo* v);
    void setAerolinea(const string& aerolinea);
    void setPuertaEmbarque(const string& puerta);
    void setNumBarras(const string& barras);

    void imprimirInformacion() override;



};

#endif // TARJETAEMBARQUE_H_INCLUDED

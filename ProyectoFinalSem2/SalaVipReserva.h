#ifndef SALAVIPRESERVA_H_INCLUDED
#define SALAVIPRESERVA_H_INCLUDED
#include "SalaVip.h"
#include "Pasajero.h"
#include <string>
#include <vector>

class SalaVipReserva{
private:
    string codigoSala, idPasajero, fechaReserva;
public:
    SalaVipReserva();
    SalaVipReserva(const string&, const string&, const string&);

    string getCodigoSala() const;
    string getIdPasajero() const;
    string getFechaReserva() const;
    const string& getIDPasajero() const;
    const Pasajero& getPasajero(const vector<Pasajero>& pasajeros) const;
};


#endif // SALAVIPRESERVA_H_INCLUDED

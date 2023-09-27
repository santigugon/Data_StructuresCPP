#include "SalaVipReserva.h"

SalaVipReserva::SalaVipReserva(){
codigoSala="none";
idPasajero = "none";
fechaReserva = "00/00/0000";
}

SalaVipReserva::SalaVipReserva(const string& codSala, const string& idP, const string& fecha){
codigoSala=codSala;
idPasajero = idP;
fechaReserva = fecha;
}

string SalaVipReserva::getCodigoSala() const {
    return codigoSala;
}

string SalaVipReserva::getIdPasajero() const {
    return idPasajero;
}

string SalaVipReserva::getFechaReserva() const {
    return fechaReserva;
}

const Pasajero& SalaVipReserva::getPasajero(const vector<Pasajero>& pasajeros) const {
    for (const auto& pasajero : pasajeros) {
        if (pasajero.getID() == idPasajero) {
            return pasajero;
        }
    }
    return pasajeros[0];
}

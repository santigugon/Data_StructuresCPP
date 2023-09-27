#include "Imprimible.h"

#ifndef CHECKIN_H_INCLUDED
#define CHECKIN_H_INCLUDED

class CheckIn:public Imprimible{
private:
    int numMaletas;
    int pesoLimiteKg;
    int horasDeAntelacion;
    bool completado;



public:
    CheckIn();
    CheckIn(int maletas, int pesoLimite, int antelacion);

    // Getters
    int getNumMaletas() const;
    int getPesoLimiteKg() const;
    int getHorasDeAntelacion() const;
    bool getCompletado()const;

    // Setters
    void setNumMaletas(int maletas);
    void setPesoLimiteKg(int pesoLimite);
    void setHorasDeAntelacion(int antelacion);
    void setCompletado(bool completado);

    // Métodos adicionales
    void imprimirInformacion() override;
    void validarAntelacion() const;


};

#endif // CHECKIN_H_INCLUDED

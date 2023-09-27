#include "Imprimible.h"
#ifndef CALIDADDEVUELO_H_INCLUDED
#define CALIDADDEVUELO_H_INCLUDED

#include <string>

class CalidadDeVuelo:public Imprimible {
private:
    double porcentajePuntualidad;
    double numEstrellas;
   double temperaturaPromedio;
    bool alimentacion;

public:
    CalidadDeVuelo();
    CalidadDeVuelo(double puntualidad, double estrellas, double temperatura, bool tieneAlimentacion);

    // Getters
    double getPorcentajePuntualidad() const;
    double getNumEstrellas() const;
    double getTemperaturaPromedio() const;
    bool getAlimentacion() const;

    // Setters
    void setPorcentajePuntualidad(double puntualidad);
    void setNumEstrellas(double estrellas);
    void setTemperaturaPromedio(const double temperatura);
    void setAlimentacion(bool tieneAlimentacion);


    //Metodos Adicionales

    void darCalificacionMaxima();
    void ingresarTemperaturaEnCelsius();
    void imprimirInformacion ()override;


};

#endif // CALIDADDEVUELO_H_INCLUDED


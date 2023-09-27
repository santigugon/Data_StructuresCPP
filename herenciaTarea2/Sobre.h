#ifndef SOBRE_H_INCLUDED
#define SOBRE_H_INCLUDED

#include "envio.h"

class Sobre : public Envio {
private:
    double largo;
    double ancho;
    double cargo_adicional;

public:
    Sobre(string remitente_nombre, string remitente_direccion, string remitente_ciudad,
          string remitente_estado, int remitente_codigo_postal, string destinatario_nombre,
          string destinatario_direccion, string destinatario_ciudad, string destinatario_estado,
          int destinatario_codigo_postal, double costo_estandar,
          double largo, double ancho, double cargo_adicional);

    // Getters
    double getLargo();
    double getAncho();
    double getCargoAdicional();

    // Setters
    void setLargo(double largo);
    void setAncho(double ancho);
    void setCargoAdicional(double cargo_adicional);


    double calculaCosto() const;
};

#endif // SOBRE_H_INCLUDED

#ifndef PAQUETE_H_INCLUDED
#define PAQUETE_H_INCLUDED

#include "envio.h"

class Paquete : public Envio {
private:
    double largo;
    double ancho;
    double profundidad;
    double peso;
    double costo_por_kg;

public:
    Paquete(string remitente_nombre, string remitente_direccion, string remitente_ciudad,
            string remitente_estado, int remitente_codigo_postal, string destinatario_nombre,
            string destinatario_direccion, string destinatario_ciudad, string destinatario_estado,
            int destinatario_codigo_postal, double costo_estandar,
            double largo, double ancho, double profundidad, double peso, double costo_por_kg);
  // Getters
    double getLargo();
    double getAncho();
    double getProfundidad();
    double getPeso();
    double getCostoPorKg();

    // Setters
    void setLargo(double largo);
    void setAncho(double ancho);
    void setProfundidad(double profundidad);
    void setPeso(double peso);
    void setCostoPorKg(double costo_por_kg);


    double calculaCosto() const;
};

#endif // PAQUETE_H_INCLUDED

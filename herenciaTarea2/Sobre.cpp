#include "sobre.h"

Sobre::Sobre(string remitente_nombre, string remitente_direccion, string remitente_ciudad,
             string remitente_estado, int remitente_codigo_postal, string destinatario_nombre,
             string destinatario_direccion, string destinatario_ciudad, string destinatario_estado,
             int destinatario_codigo_postal, double costo_estandar,
             double largo, double ancho, double cargo_adicional)
    : Envio(remitente_nombre, remitente_direccion, remitente_ciudad, remitente_estado, remitente_codigo_postal,
            destinatario_nombre, destinatario_direccion, destinatario_ciudad, destinatario_estado,
            destinatario_codigo_postal, costo_estandar),
      largo(largo), ancho(ancho), cargo_adicional(cargo_adicional) {
}


double Sobre::getLargo() {
    return largo;
}

double Sobre::getAncho() {
    return ancho;
}

double Sobre::getCargoAdicional() {
    return cargo_adicional;
}

void Sobre::setLargo(double largo) {
    this->largo = largo;
}

void Sobre::setAncho(double ancho) {
    this->ancho = ancho;
}

void Sobre::setCargoAdicional(double cargo_adicional) {
    this->cargo_adicional = cargo_adicional;
}


double Sobre::calculaCosto() const {
    double costo_envio = Envio::calculaCosto();
    if (largo > 25 || ancho > 30) {
        costo_envio += cargo_adicional;
    }
    return costo_envio;
}

#include "paquete.h"
#include "Envio.h"

Paquete::Paquete(string remitente_nombre, string remitente_direccion, string remitente_ciudad,
                 string remitente_estado, int remitente_codigo_postal, string destinatario_nombre,
                 string destinatario_direccion, string destinatario_ciudad, string destinatario_estado,
                 int destinatario_codigo_postal, double costo_estandar,
                 double largo, double ancho, double profundidad, double peso, double costo_por_kg)
    : Envio(remitente_nombre, remitente_direccion, remitente_ciudad, remitente_estado, remitente_codigo_postal,
            destinatario_nombre, destinatario_direccion, destinatario_ciudad, destinatario_estado,
            destinatario_codigo_postal, costo_estandar),
      largo(largo), ancho(ancho), profundidad(profundidad), peso(peso), costo_por_kg(costo_por_kg) {
}

double Paquete::getLargo() {
    return largo;
}

double Paquete::getAncho() {
    return ancho;
}

double Paquete::getProfundidad() {
    return profundidad;
}

double Paquete::getPeso() {
    return peso;
}

double Paquete::getCostoPorKg() {
    return costo_por_kg;
}

void Paquete::setLargo(double largo) {
    this->largo = largo;
}

void Paquete::setAncho(double ancho) {
    this->ancho = ancho;
}

void Paquete::setProfundidad(double profundidad) {
    this->profundidad = profundidad;
}

void Paquete::setPeso(double peso) {
    this->peso = peso;
}

void Paquete::setCostoPorKg(double costo_por_kg) {
    this->costo_por_kg = costo_por_kg;
}


double Paquete::calculaCosto() const {
    double costo_envio = Envio::calculaCosto();
    double costo_adicional = peso * costo_por_kg;
    return costo_envio + costo_adicional;
}

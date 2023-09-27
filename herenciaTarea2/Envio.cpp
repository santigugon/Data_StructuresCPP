#include "envio.h"

Envio::Envio(string valremitente_nombre, string valremitente_direccion, string valremitente_ciudad,
             string valremitente_estado, int valremitente_codigo_postal, string valdestinatario_nombre,
             string valdestinatario_direccion, string valdestinatario_ciudad, string valdestinatario_estado,
             int valdestinatario_codigo_postal, double valcosto_estandar)
{
    this->remitente_nombre = valremitente_nombre;
    this->remitente_direccion = valremitente_direccion;
    this->remitente_ciudad = valremitente_ciudad;
    this->remitente_estado = valremitente_estado;
    this->remitente_codigo_postal = valremitente_codigo_postal;

    this->destinatario_nombre = valdestinatario_nombre;
    this->destinatario_direccion = valdestinatario_direccion;
    this->destinatario_ciudad = valdestinatario_ciudad;
    this->destinatario_estado = valdestinatario_estado;
    this->destinatario_codigo_postal = valdestinatario_codigo_postal;

    this->costo_estandar = valcosto_estandar;
}

string Envio::getRemitenteNombre() {
    return remitente_nombre;
}

string Envio::getRemitenteDireccion() {
    return remitente_direccion;
}

string Envio::getRemitenteCiudad() {
    return remitente_ciudad;
}

string Envio::getRemitenteEstado() {
    return remitente_estado;
}

int Envio::getRemitenteCodigoPostal() {
    return remitente_codigo_postal;
}

string Envio::getDestinatarioNombre() {
    return destinatario_nombre;
}

string Envio::getDestinatarioDireccion() {
    return destinatario_direccion;
}

string Envio::getDestinatarioCiudad() {
    return destinatario_ciudad;
}

string Envio::getDestinatarioEstado() {
    return destinatario_estado;
}

int Envio::getDestinatarioCodigoPostal() {
    return destinatario_codigo_postal;
}

void Envio::setRemitenteNombre(string remitente_nombre) {
    this->remitente_nombre = remitente_nombre;
}

void Envio::setRemitenteDireccion(string remitente_direccion) {
    this->remitente_direccion = remitente_direccion;
}

void Envio::setRemitenteCiudad(string remitente_ciudad) {
    this->remitente_ciudad = remitente_ciudad;
}

void Envio::setRemitenteEstado(string remitente_estado) {
    this->remitente_estado = remitente_estado;
}

void Envio::setRemitenteCodigoPostal(int remitente_codigo_postal) {
    this->remitente_codigo_postal = remitente_codigo_postal;
}

void Envio::setDestinatarioNombre(string destinatario_nombre) {
    this->destinatario_nombre = destinatario_nombre;
}

void Envio::setDestinatarioDireccion(string destinatario_direccion) {
    this->destinatario_direccion = destinatario_direccion;
}

void Envio::setDestinatarioCiudad(string destinatario_ciudad) {
    this->destinatario_ciudad = destinatario_ciudad;
}

void Envio::setDestinatarioEstado(string destinatario_estado) {
    this->destinatario_estado = destinatario_estado;
}

void Envio::setDestinatarioCodigoPostal(int destinatario_codigo_postal) {
    this->destinatario_codigo_postal = destinatario_codigo_postal;
}

double Envio::calculaCosto() const {
    return costo_estandar;
}

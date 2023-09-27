#include "Auto.h"

Auto::Auto(const std::string& marca, const std::string& modelo, int anio)
    : marca(marca), modelo(modelo), anio(anio) {}

std::string Auto::getMarca() const {
    return marca;
}

std::string Auto::getModelo() const {
    return modelo;
}

int Auto::getAnio() const {
    return anio;
}

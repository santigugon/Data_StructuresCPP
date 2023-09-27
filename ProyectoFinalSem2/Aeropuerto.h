#include <iostream>
#include<string>
#include "Imprimible.h"
using namespace std;

#ifndef AEROPUERTO_H_INCLUDED
#define AEROPUERTO_H_INCLUDED

class Aeropuerto: public Imprimible {
 string codigoAeropuerto;
 string nombre;
 string ciudad;
 string pais;
public:
 // M�todos p�blicos para establecer y obtener la informaci�n del aeropuerto
    Aeropuerto();
    Aeropuerto(string,string,string,string);

 // Getters
    string getCodigoAeropuerto() const;
    string getNombre() const;
    string getCiudad() const;
    string getPais() const;

    // Setters
    void setCodigoAeropuerto(const string& codigo);
    void setNombre(const string& nombre);
    void setCiudad(const string& ciudad);
    void setPais(const string& pais);


    void imprimirInformacion()override;
};

#endif // AEROPUERTO_H_INCLUDED

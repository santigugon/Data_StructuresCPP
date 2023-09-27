#include <iostream>
#include<string>
using namespace std;

#ifndef AEROPUERTO_H_INCLUDED
#define AEROPUERTO_H_INCLUDED

class Aeropuerto {
 string codigoAeropuerto;
 string nombre;
 string ciudad;
 string pais;
public:
 // Métodos públicos para establecer y obtener la información del aeropuerto
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

};

#endif // AEROPUERTO_H_INCLUDED

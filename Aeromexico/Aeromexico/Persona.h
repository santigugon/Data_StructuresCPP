#include <iostream>
#include<string>
using namespace std;

#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class Persona {
protected:
 string nombre;
 string direccion;
 string fechaNacimiento;
public:
    Persona();
    Persona(string, string, string);

 // M�todos p�blicos para establecer y obtener la informaci�n de la persona
 // Getters
    string getNombre() const;
    string getDireccion() const;
    string getFechaNacimiento() const;

    // Setters
    void setNombre(const string& nombre);
    void setDireccion(const string& direccion);
    void setFechaNacimiento(const string& fechaNacimiento);

    virtual void imprimirInformacion() = 0; // M�todo virtual puro
};

#endif // PERSONA_H_INCLUDED

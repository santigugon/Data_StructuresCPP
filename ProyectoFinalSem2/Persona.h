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

 // Métodos públicos para establecer y obtener la información de la persona
 // Getters
    string getNombre() const;
    string getDireccion() const;
    string getFechaNacimiento() const;

    // Setters
    void setNombre(const string& nombre);
    void setDireccion(const string& direccion);
    void setFechaNacimiento(const string& fechaNacimiento);

    virtual void imprimirInformacion() = 0; // Método virtual puro
};

#endif // PERSONA_H_INCLUDED

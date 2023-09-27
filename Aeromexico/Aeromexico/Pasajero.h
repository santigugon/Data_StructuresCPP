#include <iostream>
#include<string>
#include "Persona.h"
using namespace std;

#ifndef PASAJERO_H_INCLUDED
#define PASAJERO_H_INCLUDED
class Pasajero: public Persona {
private:
    string ID;
    string email;

public:
    Pasajero();
    Pasajero(string, string, string, string, string);

    // Getters
    string getID() const;
    string getEmail() const;

    // Setters
    void setID(const string& ID);
    void setEmail(const string& email);

    void imprimirInformacion() override ;
    void generarResumen()const;
    void realizarcheckin();
};


#endif // PASAJERO_H_INCLUDED


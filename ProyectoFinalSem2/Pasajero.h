
#include "Persona.h"
#include "Imprimible.h"

#include "Vuelo.h"
#include <iostream>
#include<string>
using namespace std;


#ifndef PASAJERO_H_INCLUDED
#define PASAJERO_H_INCLUDED


class Pasajero: public Persona, public Imprimible {
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
    void reservarVuelo();
};


#endif // PASAJERO_H_INCLUDED

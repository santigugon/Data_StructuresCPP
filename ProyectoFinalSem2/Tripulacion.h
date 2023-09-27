#include <iostream>
#include<string>
using namespace std;

#include "Persona.h"
#ifndef TRIPULACION_H_INCLUDED
#define TRIPULACION_H_INCLUDED



using namespace std;

class Tripulacion : public Persona {
private:
    string ID;
    string puesto;

public:
    Tripulacion();
    Tripulacion(string, string, string, string, string);
    // Getters
    string getID() const;
    string getPuesto() const;

    // Setters
    void setID(const string& ID);
    void setPuesto(const string& puesto);
    void imprimirInformacion() override ;

};

#endif // TRIPULACION_H_INCLUDED

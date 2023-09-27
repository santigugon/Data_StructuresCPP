#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include "Persona.h"
#include <string>

using namespace std;



class Empleado: public Persona{

private:
    int nArchivo;
    string fechaIngreso;
public:
    Empleado();
    Empleado(int, string,string,string, int,string);

    int getNArchivo();
    string getFechaIngreso();

};



#endif // EMPLEADO_H_INCLUDED

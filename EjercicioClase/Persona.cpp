#include "Persona.h"
#include <string>

using namespace std;



Persona::Persona(){
id=0;
apellido="Na";
nombre="Na";
fechaNacimiento="00/00/0000";
}


Persona::Persona(int valId, string valApellido, string valNombre, string valFechaNacimiento){
id=valId;
apellido=valApellido;
nombre=valNombre;
fechaNacimiento=valFechaNacimiento;
}

int Persona::getId(){
return id;
}

string Persona::getNombre(){
return nombre;
}
string Persona::getApellido(){
return apellido;
}

string Persona::getFechaNacimiento(){
return fechaNacimiento;
}

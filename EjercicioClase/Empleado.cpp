#include "Empleado.h"
#include <string>
#include "Persona.h"
#include"Empleado.h"
using namespace std;



Empleado::Empleado(){
nArchivo=0;
fechaIngreso="NA";

}


Empleado::Empleado(int valId, string valApellido, string valNombre, string valFechaNacimiento, int valNArchivo, string valFechaIngreso):Persona( valId,  valApellido,  valNombre,  valFechaNacimiento){
nArchivo=valNArchivo;
fechaIngreso=valFechaIngreso;

}

//int Empleado::getNArchivo{

//return nArchivo;
//}

int Empleado::getNArchivo(){
return nArchivo;
}
string Empleado::getFechaIngreso(){

return fechaIngreso;
}

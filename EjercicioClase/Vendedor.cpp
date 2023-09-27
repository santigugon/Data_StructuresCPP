#include "Vendedor.h"


Vendedor::Vendedor(){
rubro="NA";
provincia="NA";
sucursal="NA";
}


Vendedor::Vendedor(int valId, string valApellido, string valNombre, string valFechaNacimiento, int valNArchivo, string valFechaIngreso, string valSucursal, string valProvincia, string valRubro):Empleado( valId,  valApellido,  valNombre,  valFechaNacimiento,  valNArchivo,  valFechaIngreso){
rubro=valRubro;
provincia=valProvincia;
sucursal=valSucursal;

}
string Vendedor::getSucursal(){
return sucursal;
}

string Vendedor::getRubro(){
return rubro;
}

string Vendedor::getProvincia(){
return provincia;
}

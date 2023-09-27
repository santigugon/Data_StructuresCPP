#include <iostream>
#include "Empleado.h"
#include "Vendedor.h"
#include "Persona.h"

#include <string>

using namespace std;





int main()
{

    Vendedor vendedor1(10,"Gtz","Santi","07/06/2003",58,"18/05/2022","Plaza Mayor","Leon","Vendedor");
    std::cout <<"El "<<vendedor1.getRubro()<<" con nombre "<<vendedor1.getNombre()<<" "<<vendedor1.getApellido()<<" y fecha de nacimiento "<<vendedor1.getFechaNacimiento()<<" que ingreso en la fecha de "<<vendedor1.getFechaIngreso()<<" a la sucursal "<<vendedor1.getSucursal()<<" en la provincia "<<vendedor1.getProvincia()<<" cuyo id es "<<vendedor1.getId()<<" y cuyo n de Archivo es "<<vendedor1.getNArchivo() <<endl;
    return 0;
}

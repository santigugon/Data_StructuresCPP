#ifndef VENDEDOR_H_INCLUDED
#define VENDEDOR_H_INCLUDED
#include "Empleado.h"
#include <string>

using namespace std;


class Vendedor: public Empleado{
private:
    string sucursal;
    string provincia;
    string rubro;
public:

Vendedor();
Vendedor(int, string, string, string,int, string, string,string, string);

string getSucursal();
string getProvincia();
string getRubro();


};


#endif // VENDEDOR_H_INCLUDED

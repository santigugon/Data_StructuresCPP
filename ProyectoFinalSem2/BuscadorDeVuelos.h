#include "Vuelo.h"
#ifndef BUSCADORDEVUELOS_H_INCLUDED
#define BUSCADORDEVUELOS_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class BuscadorDeVuelos
{

public:
    BuscadorDeVuelos();
    void buscarVuelos(const vector<Vuelo>& vuelos);

};

#endif // BUSCADORDEVUELOS_H_INCLUDED

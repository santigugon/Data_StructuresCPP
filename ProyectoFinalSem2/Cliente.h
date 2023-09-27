#include <iostream>
#include<string>
#include "Persona.h"
using namespace std;



#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED



class Cliente: virtual public Persona{
protected:
    int numReservas;
    int numPuntos;
    string fechaPrimerCompra;
public:
    Cliente();
    Cliente(string,string, string,int, int, string);

   int getNumReservas()const;
    void setNumReservas(int numReservas);

    int getNumPuntos()const;
    void setNumPuntos(int numPuntos);

    string getFechaPrimerCompra()const;
    void setFechaPrimerCompra(const string& fechaPrimerCompra);
    void imprimirInformacion() override;
};

#endif // CLIENTE_H_INCLUDED

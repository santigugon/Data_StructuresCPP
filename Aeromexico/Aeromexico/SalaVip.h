#ifndef SALAVIP_H_INCLUDED
#define SALAVIP_H_INCLUDED
#include <string>

using namespace std;

class SalaVip{
private:
    string codigo;
    int capacidad;
public:
    SalaVip();
    SalaVip(const string&, int);

    string getCodigo() const;
    int getCapacidad() const;
};


#endif // SALAVIP_H_INCLUDED

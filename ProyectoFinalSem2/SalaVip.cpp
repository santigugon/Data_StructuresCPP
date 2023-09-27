#include "SalaVip.h"

SalaVip::SalaVip(){
codigo="none";
capacidad=00;
}

SalaVip::SalaVip(const string& cod, int cap){
codigo=cod;
capacidad=cap;
}

string SalaVip::getCodigo() const {
    return codigo;
}

int SalaVip::getCapacidad() const {
    return capacidad;
}

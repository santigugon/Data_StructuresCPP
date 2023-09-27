#include <iostream>
#include <cmath>
#include "Fraccion.h"
#include <string>

Fraccion::Fraccion(){
    numerador=0;
    denominador=1;
}

Fraccion::Fraccion(int valNum, int valDen){
    numerador=valNum;
    denominador=valDen;
    simplificarFuncion();

}

void Fraccion::imprimirFraccion(){

    simplificarFuncion();
    if(numerador%denominador==0){
   std::cout<<numerador/denominador<<std::endl;
    };
    std::cout<<numerador<<"/"<<denominador<<std::endl;

 }

 void Fraccion::simplificarFuncion(){
    bool contador=true;
    while(contador){
     for (int i = 2; i < 10; i++){
    if(denominador%i==0 && numerador%i==0){
        denominador=denominador/i;
        numerador=numerador/i;
        i=2;

    };

     }
     contador=false;
     }
 };

 void Fraccion::imprimirDecimal(){
     decimal=float(numerador)/float(denominador);
     std::cout<<"El formato decimal es "<<decimal<<std::endl;
 }


void Fraccion::imprimirFraccionEntero(){
    int entero=numerador/denominador;
    if(entero!=0){
    std::cout<<entero<<" "<<numerador-entero*denominador<<"/"<<denominador<<std::endl;
    }else{
    this->imprimirFraccion();
    }
 }
int Fraccion::getNumerador(){
    return numerador;
}
int Fraccion::getDenominador(){
    return denominador;
}

void Fraccion::imprimirConEspacios(int nEspacios){
std::string espacios(nEspacios, '_'); // Crear una cadena de caracteres "_" con la longitud especificada por el parámetro
    std::cout << espacios << this->numerador << "/" << espacios << this->denominador << std::endl;

};


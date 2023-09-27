#include <iostream>
#include <cmath>
#include "Fraccion.h"


Fraccion::Fraccion(int valNum, int valDen){
numerador=valNum;
denominador=valDen;
}

 int Fraccion::imprimirFraccion(){

    simplificarFuncion();
    std::cout<<numerador<<"/"<<denominador<<endl;

 }

 int Fraccion::simplificarFuncion(){

 for (int i = 1; i < 10; i++){
if(denominador%i && numerador%i){
    denominador=denominador/i;
    numerador=numerador/i;
}

 }
 }

};


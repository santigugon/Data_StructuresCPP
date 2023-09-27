#include <iostream>
#include "Polygon.h"
#include "Shape.h"

Polygon::Polygon(){

lado=0;

}

Polygon::Polygon(int valX, int valY, int valL):Shape( valX,  valY){

lado=valL;

}


string Polygon::draw(){
return "soy un poligono";
}
int Polygon::getLado(){
return lado;
}


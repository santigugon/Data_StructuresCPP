#include "Polygon.h"
#include "Shape.h"

Polygon::Polygon(){

}
Polygon::Polygon(int valX){
}

Polygon::Polygon(int valX, int valNumLados){
Shape::setValueX(valX);
numLados=valNumLados;
}

int Polygon::getNumLados(){
return numLados;
}

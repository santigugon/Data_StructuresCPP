#include <iostream>
#include <string>

#include "Shape.h"

Shape::Shape(){
    y=0;
    x=0;
}

Shape::Shape(int valX, int valY){
    x=valX;
    y=valY;
}

string Shape::draw(){
    return "soy una figura";
}

int Shape::getValueX(){
    return x;
}

int Shape::getValueY(){
    return y;
}

void Shape::setValueX(int valX){
x=valX;
}

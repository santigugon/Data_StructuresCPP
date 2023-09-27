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

double Shape::area(){
return 0;
}

int Shape::getValueX(){
    return x;
}

int Shape::getValurY(){
    return y;
}

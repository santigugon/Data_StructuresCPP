
#include "iostream"
#include "Circle.h"

Circle::Circle(){
    r = 0;
}

Circle::Circle(int valX, int valY, int valR):Shape(valX, valY){
    r = valR;
}


string Circle::draw(){
return "soy un circulo";
}

int Circle::getValueR(){
    return r;
}

double Circle::area(){
return r*r*3.1416;
}


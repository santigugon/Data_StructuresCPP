#include "Circle.h"

Circle::Circle()
{
    r=0;
}

string Circle::draw(){
    return "soy un circulo";
}
int Circle::getValueR()
{
    return r;
}

Circle::Circle(int valX, int valY, int valR):Shape(valX, valY)
{
    r=valR;
}

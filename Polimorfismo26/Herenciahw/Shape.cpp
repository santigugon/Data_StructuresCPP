#include "Shape.h"

Shape::Shape()
{
    x=0;
    y=0;
}

Shape::Shape(int valX, int valY)
{
    x=valX;
    y=valY;
}

string Shape::draw()
{
    return "soy una figura";
}

int Shape::getValueX()
{
    return x;
}

int Shape::getValueY()
{
    return y;
}

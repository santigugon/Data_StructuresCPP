#include "Polygon.h"

Polygon::Polygon()
{
    w=0;
}
string Polygon::draw()
{
    return "Soy un polygon";
}

Polygon::Polygon(int valX, int valY, int valW):Shape(valX, valY)
{
    w=valW;
}

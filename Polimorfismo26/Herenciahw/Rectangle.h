#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Shape.h"

class Rectangle:public Shape
{
private:
    int alto;
    int ancho;

public:
    Rectangle();
    Rectangle(int,int,int,int);

    int getLargo();
    int getAncho();
    string draw();
};


#endif // RECTANGLE_H_INCLUDED

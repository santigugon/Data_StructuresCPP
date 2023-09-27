#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Shape.h"

class Rectangle:public Shape{
private:
int ancho;
int largo;


public:
    Rectangle();
    Rectangle(int,int);
    Rectangle(int,int,int,int);

    int getLargo();
    int getAncho();
};





#endif // RECTANGLE_H_INCLUDED

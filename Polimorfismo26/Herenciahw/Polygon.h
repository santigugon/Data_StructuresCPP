#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED

#include "Shape.h"

class Polygon:public Shape
{
private:
    int w;

public:
    Polygon();
    Polygon(int,int,int);
    string draw();
};

#endif // POLYGON_H_INCLUDED

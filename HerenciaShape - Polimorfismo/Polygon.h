#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED
#include "Shape.h"

class Polygon: public Shape{

private:
    int lado;
public:
    Polygon();
    Polygon(int, int ,int);

    string draw();

    int getLado();
};

int getLado();

#endif // POLYGON_H_INCLUDED

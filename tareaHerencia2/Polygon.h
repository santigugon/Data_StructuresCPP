#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED

#include "Shape.h"
class Polygon:public Shape{
private:
int numLados;

public:
    Polygon();
    Polygon(int);
    Polygon(int, int);
int getNumLados();
void setNumLados(int);

};



#endif // POLYGON_H_INCLUDED

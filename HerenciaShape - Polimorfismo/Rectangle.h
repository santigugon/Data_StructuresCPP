#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Shape.h"

class Rectangle : public Shape{

    private:
        int alto;
        int ancho;

    public:
        Rectangle();
        Rectangle(int, int, int, int);
        string draw();

        int getAlto();
        int getAncho();

        double area();





};


#endif // RECTANGLE_H_INCLUDED

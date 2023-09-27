#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED


#include "Shape.h"

class Circle: public Shape {
    private:
        int r;

    public:
        Circle();
        Circle(int, int, int);

        string draw();
        double area();

        int getValueR();
};




#endif // CIRCLE_H_INCLUDED

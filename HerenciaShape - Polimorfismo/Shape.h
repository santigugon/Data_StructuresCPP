#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Shape{

    private:
        int x;
        int y;

    public:
        Shape();
        Shape(int, int);
        virtual string draw();
        virtual double area();//=0;


        int getValueX();
        int getValurY();


};


#endif // SHAPE_H_INCLUDED

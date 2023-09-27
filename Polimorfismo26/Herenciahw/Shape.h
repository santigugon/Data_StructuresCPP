#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include <iostream>

using namespace std;

class Shape{
private:
    int x;
    int y;

public:
    Shape();
    Shape(int, int);
    virtual string draw();

    int getValueX();
    int getValueY();


};



#endif // SHAPE_H_INCLUDED

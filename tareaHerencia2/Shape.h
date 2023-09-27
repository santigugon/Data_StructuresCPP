#ifndef SAHPE_H_INCLUDED
#define SAHPE_H_INCLUDED


#include "iostream"

using namespace std;

class Shape{
private:
    int x;
    int y;
public:
    Shape();
    Shape(int, int);
    string draw();

   int getValueX();
   int getValueY();
void setValueX(int);
};


#endif // SHAPE_H_INCLUDED

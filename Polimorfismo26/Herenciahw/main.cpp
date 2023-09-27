#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Polygon.h"


using namespace std;

int main()
{

    Shape *Shapes[13];
    Shapes[0] = new Circle();
    Shapes[1] = new Rectangle();
    Shapes[2] = new Rectangle(1,2,5,6);
    Shapes[3] = new Circle(4,2,1);
    Shapes[4] = new Rectangle();

    Shapes[5] = new Polygon(5,2,3);
    Shapes[6] = new Rectangle(4,2,2,1);
    Shapes[7] = new Rectangle(1,1,1,1);
    Shapes[8] = new Polygon(2,2,2);
    Shapes[9] = new Rectangle(3,2,3,3);
    Shapes[10] = new Polygon(2,1,5);
    Shapes[11] = new Rectangle(2,4,7,1);
    Shapes[12] = new Polygon(5,5,5);


    for (int i=0; i<13; i++)
    {
        Shape *current = Shapes[i];
        cout << current->draw() << "\n";
    }
    return 0;
    }






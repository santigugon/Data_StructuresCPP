#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Polygon.h"

using namespace std;

int main()
{

   Shape *shapes[9];
    shapes[0]= new Circle();
    shapes[1]= new Rectangle();
    shapes[2]= new Rectangle(1,2,5,6);
    shapes[3]= new Circle(4,2,1);
    shapes[4]= new Rectangle();
    shapes[5]= new Polygon(2,8,1);
    shapes[6]= new Polygon(4,8,7);
    shapes[7]= new Polygon(7,4,7);
    shapes[8]= new Polygon();

//cout<<"PRUEBA"<<endl;
  //Rectangle cuadrito(0,0,4,3);
   // cout<<cuadrito.draw()<<" el area es de "<< cuadrito.area()<<endl;

    for (int i = 0; i < 9; i++){
    Shape *current = shapes[i];
    cout<< current -> draw ()<<"\n";
    cout<< current <<endl;
    cout<< shapes[i] << endl;



    }


    return 0;
}

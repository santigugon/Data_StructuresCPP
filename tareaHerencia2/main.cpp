#include <iostream>
#include "Shape.cpp"
#include "Circle.cpp"
#include "Rectangle.h"
#include "Polygon.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
     Shape figura1(1,2);

    cout << figura1.draw() << " con valor x de: " << figura1.getValueX() << ", valor y de: " << figura1.getValueY() << endl;


    //instancia a circle
    Circle circulo1(2,3,7);
    cout << circulo1.draw() << " con valor x de: " << circulo1.getValueX() << ", valor y de: " << circulo1.getValueY() <<  " con valor r de: " << circulo1.getValueR() <<endl;

    //instancia Rectangulo

    Rectangle rectangulo1(2,4,7,6);
    cout << rectangulo1.draw() << " con valor x de: " << rectangulo1.getValueX() << ", valor y de: " << rectangulo1.getValueY()<< " con valor  de largo de: " << rectangulo1.getLargo() << ", valor de ancho de: " << rectangulo1.getAncho() <<endl;

    Polygon polygono(1,4);
    cout << polygono.draw() << " con valor x de: " << polygono.getValueX() << " y con un numero de lados de: " << polygono.getNumLados()  <<endl;

    return 0;
}

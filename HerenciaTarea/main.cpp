#include <iostream>

using namespace std;

int main()
{
    Shape figura1(1,2);

    cout << figura1.draw() << " con valor x de: " << figura1.getValueX() << ", valor y de: " << figura1.getValurY() << endl;


    //instancia a circle
    Circle circulo1(2,3,6);
    cout << circulo1.draw() << " con valor x de: " << circulo1.getValueX() << ", valor y de: " << circulo1.getValurY() <<  " con valor r de: " << circulo1.getValueR() <<endl;


return 0;
}

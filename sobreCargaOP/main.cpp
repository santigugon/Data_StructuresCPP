#include <iostream>
#include "RECT.h"
#include "Polar.h"

using namespace std;

int main()
{
    Rect r1(3,8);
    Rect r2(4,5);
    Rect r3;

    r3=r2-r1;

    Polar p1(5,45);
    Polar p2(8,34);
    Polar p3;

    p3=p1*p2;
    cout<<"Las coordenas polares 1:( "<<p1.getR()<<", "<<p1.getTheta()<<") y para la segunda figura: ("<<p2.getR()<<", "<<p2.getTheta()<<") su producto es ("<<p3.getR()<<","<<p3.getTheta()<<")"<<endl;

    p3=p1/p2;
    cout<<"Las coordenas polares 1:( "<<p1.getR()<<", "<<p1.getTheta()<<") y para la segunda figura: ("<<p2.getR()<<", "<<p2.getTheta()<<") su division es ("<<p3.getR()<<","<<p3.getTheta()<<")"<<endl;
    Rect rp;
    rp=r1+p1;

    cout<<"COORDENADAS DE LA SUMA POLAR Y RECTANGULAR "<<rp.getX()<<" ,"<<rp.getY()<<endl;

    cout<<r3.getX()<<"x "<< r3.getY()<<"y "<<endl;
    int a=5;
    int * ptrA=&a;

    cout<<" el valor de a: "<<a<<endl;
    cout << "el valor de ptrA " <<*ptrA<< endl;
    return 0;
}

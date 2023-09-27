#include <iostream>
#include "Fraccion.h"

using namespace std;

int main()
{
    cout<<"Declaramos fracción y la imprimimos en forma reducida"<<endl;
    Fraccion prueba(8,10);
    cout<<prueba.getNumerador()<<" / "<< prueba.getDenominador()<<endl;

    cout<<"IMPRIMIR ESPACIOS"<<endl;
     prueba.imprimirConEspacios(7);
    Fraccion prueba2(2,3);
    cout<<"Sobrecarga mayor que"<<endl;
    prueba>prueba2;
   cout<<"Sobrecarga menor que"<<endl;
    prueba<prueba2;
    //cout<< prueba.imprimirFraccion()<<">"<<prueba2.imprimirFraccion()<<"="<<endl;

    Fraccion prueba3(1,2);
    Fraccion prueba4(1,2);
    Fraccion prueba5(0,1);

    cout<<"Impresion fraccion con entero: ";
    Fraccion prueba6(13,5);
    prueba6.imprimirFraccionEntero();
cout<<"Sobrecarga igualdad"<<endl;
    prueba3==prueba4;

    prueba3=prueba2+prueba;
    prueba4=prueba-prueba2;
    cout<<"SUMA "<<endl;
    prueba3.imprimirFraccion();
    cout<<"RESTA "<<endl;
    prueba4.imprimirFraccion();
    prueba4=prueba3-prueba4;
    cout<<"RESTA "<<endl;
    prueba4.imprimirFraccion();

    prueba4=prueba*prueba2;

    cout<<"MULTIPLICACION "<<endl;
    prueba4.imprimirFraccion();

    prueba3=prueba/prueba2;
    cout<<"DIVISION "<<endl;

    prueba3.imprimirFraccion();
    prueba3.imprimirDecimal();


    return 0;
}

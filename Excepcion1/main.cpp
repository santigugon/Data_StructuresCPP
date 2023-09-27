#include <iostream>
#include "miExcepcion.h"

using namespace std;


int main()
{
 try{
     throw miex;
 }catch(exception &e){
 cout<<e.what()<<" aqui "<<endl;
 }
    cout << "Hello world!" << endl;
    return 0;
}

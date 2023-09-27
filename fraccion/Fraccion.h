
#ifndef FRACCION_H_INCLUDED
#define FRACCION_H_INCLUDED

class Fraccion {
private:
int numerador,denominador;
float decimal;

public:
Fraccion();
Fraccion(int, int);

Fraccion operator+(const Fraccion& val){

    Fraccion temp;
    temp.denominador=this->denominador*val.denominador;
    temp.numerador=temp.denominador/(this->denominador)*this->numerador+temp.denominador/val.denominador*val.numerador;
    simplificarFuncion();
    return temp;
    }

Fraccion operator-(const Fraccion& val){

    Fraccion temp;
    temp.denominador=this->denominador*val.denominador;
    temp.numerador=temp.denominador/(this->denominador)*this->numerador-temp.denominador/val.denominador*val.numerador;
    simplificarFuncion();
    return temp;
    }

Fraccion operator*(const Fraccion& val){

    Fraccion temp;
    temp.numerador=this->numerador*val.numerador;
    temp.denominador=this->denominador*val.denominador;
    simplificarFuncion();
    return temp;
    }

Fraccion operator/(const Fraccion& val){

    Fraccion temp;
    temp.numerador=this->numerador*val.denominador;
    temp.denominador=this->denominador*val.numerador;
    simplificarFuncion();
    return temp;
    }

Fraccion operator>(const Fraccion& val){

    Fraccion temp(this->numerador,this->denominador);
    Fraccion temp2(val.numerador, val.denominador);

    Fraccion temp3=temp-temp2;
    int diferencia= temp3.numerador;
    if(diferencia>0){
    std::cout<<"Primer Fraccion Mayor"<<std::endl;
    return temp;
    }else if(diferencia<0){
    std::cout<<"Segunda Fraccion Mayor"<<std::endl;
    return temp2;
    }
    }

Fraccion operator<(const Fraccion& val){

    Fraccion temp(this->numerador,this->denominador);
    Fraccion temp2(val.numerador, val.denominador);

    Fraccion temp3=temp-temp2;
    int diferencia= temp3.numerador;
    if(diferencia<0){
    std::cout<<"Primer Fraccion Menor"<<std::endl;
    return temp;
    }else if(diferencia>0){
    std::cout<<"Segunda Fraccion Menor"<<std::endl;
    return temp2;
    }
    }

Fraccion operator==(const Fraccion& val){

    Fraccion temp;

    if(val.denominador==this->denominador&& val.denominador==this->denominador){


     std::cout<<"Fracciones iguales"<<std::endl;
    temp.numerador=val.numerador;
    temp.denominador=val.denominador;
    return temp;
    }else{
        std::cout<<"Fracciones diferentes"<<std::endl;
    return temp;

    }

    }

 void imprimirFraccion();

 void imprimirDecimal();

 void imprimirFraccionEntero();

 void simplificarFuncion();

 void imprimirConEspacios(int);

 int getNumerador();
 int getDenominador();
};
#endif // FRACCION_H_INCLUDED

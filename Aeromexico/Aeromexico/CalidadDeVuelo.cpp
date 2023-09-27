#include <iostream>
#include "CalidadDeVuelo.h"

using namespace std;

    CalidadDeVuelo::CalidadDeVuelo() {
        porcentajePuntualidad = 0;
        numEstrellas = 0.0;
        temperaturaPromedio = 0.0;
        alimentacion = false;
    }

    CalidadDeVuelo::CalidadDeVuelo(double puntualidad, double estrellas, double temperatura, bool tieneAlimentacion) {
        porcentajePuntualidad = puntualidad;
        numEstrellas = estrellas;
        temperaturaPromedio = temperatura;
        alimentacion = tieneAlimentacion;
    }

    // Getters
    double CalidadDeVuelo::getPorcentajePuntualidad() const {
        return porcentajePuntualidad;
    }

    double CalidadDeVuelo::getNumEstrellas() const {
        return numEstrellas;
    }

    double CalidadDeVuelo::getTemperaturaPromedio() const {
        return temperaturaPromedio;
    }

    bool CalidadDeVuelo::getAlimentacion() const {
        return alimentacion;
    }

    // Setters
    void CalidadDeVuelo::setPorcentajePuntualidad(double puntualidad) {
        porcentajePuntualidad = puntualidad;
    }

    void CalidadDeVuelo::setNumEstrellas(double estrellas) {
        numEstrellas = estrellas;
    }

    void CalidadDeVuelo::setTemperaturaPromedio(double temperatura) {
        temperaturaPromedio = temperatura;
    }

    void CalidadDeVuelo::setAlimentacion(bool tieneAlimentacion) {
        alimentacion = tieneAlimentacion;
    }

    void CalidadDeVuelo::darCalificacionMaxima(){
    numEstrellas=5.0;
    }
    void CalidadDeVuelo::ingresarTemperaturaEnCelsius(){
        double fahr;
        cout<<"Ingresa por favor la temperatura en Fahreheit para transformarla en Celsius(Mayor que 0)"<<endl;
        cin>>fahr;
        try{
            if(fahr<0)
                throw "La temperatura en cabina no puede ser menor a 0";
    temperaturaPromedio=(fahr - 32.0) * 5.0 / 9.0;
        }
        catch(char* msg){
        cerr<<msg<<endl;
        }
    }

    void CalidadDeVuelo::imprimirInformacion(){
    cout << "Porcentaje de puntualidad: " << porcentajePuntualidad << "%" << endl;
    cout << "Número de estrellas: " << numEstrellas << endl;
    cout << "Temperatura promedio: " << temperaturaPromedio << endl;
    cout << "Alimentación a bordo: " << (alimentacion ? "Sí" : "No") << endl;
};

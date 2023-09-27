#include "informeDeVentasDeUnVuelo.h"
#include <iostream>

using namespace std;
InformeDeVentasDeUnVuelo::InformeDeVentasDeUnVuelo() {
    // Constructor por defecto
}
InformeDeVentasDeUnVuelo::InformeDeVentasDeUnVuelo(  int vuelos, double ingresos, double promedioIngresos){
      vuelosVendidos=vuelos;
     totalIngresos=ingresos;
     promedioIngresos=promedioIngresos;

}


// Getters
int InformeDeVentasDeUnVuelo::getVuelosVendidos() const {
    return vuelosVendidos;
}

double InformeDeVentasDeUnVuelo::getTotalIngresos() const {
    return totalIngresos;
}

double InformeDeVentasDeUnVuelo::getPromedioIngresos() const {
    return promedioIngresos;
}

// Setters
void InformeDeVentasDeUnVuelo::setVuelosVendidos(int vuelos) {
    vuelosVendidos = vuelos;
}

void InformeDeVentasDeUnVuelo::setTotalIngresos(double ingresos) {
    totalIngresos = ingresos;
}

void InformeDeVentasDeUnVuelo::setPromedioIngresos(double promedio) {
    promedioIngresos = promedio;
}

// Métodos adicionales
double InformeDeVentasDeUnVuelo::generarProyecciones() {
    int porcentaje;
    double ingresoEstimado=promedioIngresos;
    cout<<"Ingresa el porcentaje de crecimiento esperado (Mayor que 0 y menor que 100 en entero)"<<endl;
    cin>>porcentaje;
    try{
        if (porcentaje>100||porcentaje<0)
            throw "Tu porcentaje no es valido";
    ingresoEstimado=(promedioIngresos*porcentaje)/100;
    }
    catch(char& msg){
        cerr<<msg<<endl;
    }
    return ingresoEstimado;
}

void InformeDeVentasDeUnVuelo::imprimirInformacion()  {
   std::cout << "Informe de ventas de vuelos:" << std::endl;
   cout << "Vuelos vendidos: " << vuelosVendidos << std::endl;
    cout << "Total de ingresos: $" << totalIngresos << std::endl;
    cout << "Promedio de ingresos por vuelo: $" << promedioIngresos << std::endl;
}


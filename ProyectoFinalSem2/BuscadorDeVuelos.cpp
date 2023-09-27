#include <iostream>
#include "BuscadorDeVuelos.h"
#include <string>
#include <vector>
#include <cctype>  // for std::tolower
using namespace std;
void nada(){};

BuscadorDeVuelos::BuscadorDeVuelos(){

cout<<"Buscador de vuelos activado"<<endl;
};


std::string toLowerCase(const std::string& str) {
    std::string result;
    for (char c : str) {
        result += std::tolower(c);
    }
    return result;
}

void BuscadorDeVuelos::buscarVuelos(const vector<Vuelo>& vuelos){
    vector<Vuelo> vuelosCoincidentes;
int opcion;
int resultados=0;
string busqueda;
cout<<"Elige el tipo de busqueda que quieres realizar"<<endl;
cout<<"1: Para buscar por numero de vuelo"<<endl;
cout<<"2: Para buscar por ciudad de origen"<<endl;
cout<<"3: Para buscar por ciudad destino"<<endl;
cout<<"4: Para buscar vuelos con espacio"<<endl;
cin>>opcion;

cout<<"Ahora ingresa tu busqueda"<<endl;
cin>>busqueda;
busqueda=toLowerCase(busqueda);

try{
    for (const auto& vuelo : vuelos) {
             switch (opcion) {
        case 1:

            (toLowerCase(vuelo.getNumeroVuelo())) == busqueda?vuelosCoincidentes.push_back(vuelo):nada();
            break;
        case 2:
            toLowerCase(vuelo.getOrigen()) == busqueda?vuelosCoincidentes.push_back(vuelo):nada();
            break;
        case 3:
           toLowerCase(vuelo.getDestino()) == busqueda?vuelosCoincidentes.push_back(vuelo):nada();
            break;
        case 4:
            vuelo.obtenerAsientosDisponibles()> 0?vuelosCoincidentes.push_back(vuelo):nada();
            break;
        default:
            cout << "Tipo de busqueda invalida" << endl;
            break;
        }

}
   if (vuelosCoincidentes.empty()) {
        throw runtime_error("No hay coincidencias para tu busqueda.");

    }else{
        cout<<"Resultados de la busqueda"<<endl;
       for (const auto& vuelo : vuelosCoincidentes) {
        cout << "Número de vuelo: " << (vuelo.getNumeroVuelo()) << endl;
        cout << "Origen: " << (vuelo.getOrigen()) << endl;
        cout << "Destino: " << vuelo.getDestino() << endl;
        cout << "Hora de salida: " << vuelo.getHoraSalida() << endl;
        cout << "Hora de llegada: " << vuelo.getHoraLlegada() << endl;
        cout << "Asientos disponibles: " << vuelo.getAsientos() << endl;
        cout << "Número de pasajeros: " << vuelo.getNumPasajeros() << endl;
        cout << endl;
}
cout<<"Hasta aqui tus resultados"<<endl;
}
}catch(exception& e){

  cerr<< "No hay coincidencias para tu busqueda!! "<<"\n"<<endl;

}
}

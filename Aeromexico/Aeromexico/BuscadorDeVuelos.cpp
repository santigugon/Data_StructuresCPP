#include <iostream>
#include "BuscadorDeVuelos.h"
#include <string>
#include <vector>
#include <cctype>  // for std::tolower
using namespace std;

void nada() {}

BuscadorDeVuelos::BuscadorDeVuelos() {
    cout << "Buscador de vuelos activado" << endl;
}

string BuscadorDeVuelos::toLowerCase(const string& str) {
    string result;
    for (char c : str) {
        result += tolower(c);
    }
    return result;
}

void BuscadorDeVuelos::buscarVuelos(const vector<Vuelo>& vuelos) {
    vector<Vuelo> vuelosCoincidentes;
    int opcion;
    string busqueda;
    bool salir = false;

    while (!salir) {
        cout << "Elige el tipo de busqueda que quieres realizar" << endl;
        cout << "1: Para buscar por numero de vuelo" << endl;
        cout << "2: Para buscar por ciudad de origen" << endl;
        cout << "3: Para buscar por ciudad destino" << endl;
        cout << "4: Para buscar vuelos con espacio" << endl;
        cout << "0: Para salir" << endl;
        cin >> opcion;

        if (opcion == 0) {
            salir = true;
            continue;
        }

        cout << "Ahora ingresa tu busqueda" << endl;
        cin >> busqueda;
        busqueda = toLowerCase(busqueda);

        vuelosCoincidentes.clear();

        for (const auto& vuelo : vuelos) {
            switch (opcion) {
                case 1:
                    if (toLowerCase(vuelo.getNumeroVuelo()) == busqueda)
                        vuelosCoincidentes.push_back(vuelo);
                    break;
                case 2:
                    if (toLowerCase(vuelo.getOrigen()) == busqueda)
                        vuelosCoincidentes.push_back(vuelo);
                    break;
                case 3:
                    if (toLowerCase(vuelo.getDestino()) == busqueda)
                        vuelosCoincidentes.push_back(vuelo);
                    break;
                case 4:
                    if (vuelo.obtenerAsientosDisponibles() > 0)
                        vuelosCoincidentes.push_back(vuelo);
                    break;
                default:
                    cout << "Tipo de busqueda invalida" << endl;
                    break;
            }
        }

        if (vuelosCoincidentes.empty()) {
            cout << "No hay coincidencias para tu busqueda." << endl;
        } else {
            cout << "Resultados de la busqueda:" << endl;
            for (const auto& vuelo : vuelosCoincidentes) {
                cout << "Numero de vuelo: " << vuelo.getNumeroVuelo() << endl;
                cout << "Origen: " << vuelo.getOrigen() << endl;
                cout << "Destino: " << vuelo.getDestino() << endl;
                cout << "Hora de salida: " << vuelo.getHoraSalida() << endl;
                cout << "Hora de llegada: " << vuelo.getHoraLlegada() << endl;
                cout << "Asientos disponibles: " << vuelo.getAsientos() << endl;
                cout << "Numero de pasajeros: " << vuelo.getNumPasajeros() << endl;
                cout << endl;
            }
        }
    }
}

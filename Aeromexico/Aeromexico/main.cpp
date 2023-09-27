#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "Vuelo.h"
#include "Pasajero.h"
#include "Reserva.h"
#include "SalaVip.h"
#include "SalaVipReserva.h"
#include "BuscadorDeVuelos.h"
#include "Aeropuerto.h"
#include "Tripulacion.h"
#include "CheckIn.h"
#include "informeDeVentasDeUnVuelo.h"
#include "Cliente.h"
#include "Empleado.h"
#include "TarjetaEmbarque.h"
#include "CalidadDeVuelo.h"
#include "ClienteEmpleado.h"
#include "Tripulacion.h"

using namespace std;

void mostrarMenu() {
    cout << "==== Menu ====" << endl;
    cout << "1. Buscar vuelos" << endl;
    cout << "2. Mostrar informaci�n de vuelos" << endl;
    cout << "3. Mostrar informaci�n de pasajeros" << endl;
    cout << "4. Mostrar informaci�n de reservas" << endl;
    cout << "5. Mostrar informaci�n de salas VIP" << endl;
    cout << "6. Reservar acceso a sala VIP" << endl;
    cout << "7. Validar antelaci�n" << endl;
    cout << "8. Realizar check-in" << endl;
    cout << "9. Mostrar informe de ventas" << endl;
    cout << "10. Mostrar informaci�n del cliente" << endl;
    cout << "11. Mostrar informaci�n del empleado" << endl;
    cout << "12. Emisi�n de tarjeta de embarque" << endl;
    cout << "13. Calidad de nuestros vuelos" << endl;
    cout << "14. Informacion cliente-empleado" << endl;
    cout << "15. Informacion de tripulaci�n (pending)" << endl;
    cout << "0. Salir" << endl;
    cout << "Ingrese su opci�n: ";
}

void gestionarMenu(vector<Vuelo>& vuelos, vector<Pasajero>& pasajeros, vector<Reserva>& reservas,
                   vector<SalaVip>& salasVip, vector<SalaVipReserva>& salasVipReservas) {
    int opcion;
    bool salir = false;

    while (!salir) {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 0:
                if (salir = true){
                    cout << "Gracias, ojala nos vuelvas a elegir pronto ;) "<<endl;
                }
                break;
            case 1: {
                BuscadorDeVuelos buscador;
                buscador.buscarVuelos(vuelos);
                break;
            }
            case 2:
                cout << "==== Informaci�n de vuelos ====" << endl;
                for (const auto& vuelo : vuelos) {
                    cout << "N�mero de vuelo: " << vuelo.getNumeroVuelo() << endl;
                    cout << "Origen: " << vuelo.getOrigen() << endl;
                    cout << "Destino: " << vuelo.getDestino() << endl;
                    cout << "Hora de salida: " << vuelo.getHoraSalida() << endl;
                    cout << "Hora de llegada: " << vuelo.getHoraLlegada() << endl;
                    cout << "Asientos disponibles: " << vuelo.getAsientos() << endl;
                    cout << "N�mero de pasajeros: " << vuelo.getNumPasajeros() << endl;
                    cout << endl;
                }
                break;
            case 3:
                cout << "==== Informaci�n de pasajeros ====" << endl;
                for (auto& pasajero : pasajeros) {
                    pasajero.imprimirInformacion();
                }
                break;
            case 4:
                cout << "==== Informaci�n de reservas ====" << endl;
                for (const auto& reserva : reservas) {
                    cout << "ID de reserva: " << reserva.getIDReserva() << endl;
                    cout << "Vuelo: " << reserva.getVuelo().getNumeroVuelo() << endl;
                    cout << "Pasajero: " << reserva.getPasajero().getNombre() << endl;
                    cout << "Fecha de reserva: " << reserva.getFechaReserva() << endl;
                    cout << "Estado de reserva: " << reserva.getEstatus() << endl;
                    cout << endl;
                }
                break;
            case 5:
                cout << "==== Informaci�n de salas VIP ====" << endl;
                for (const auto& sala : salasVip) {
                    cout << "C�digo de sala VIP: " << sala.getCodigo() << endl;
                    cout << "Capacidad: " << sala.getCapacidad() << endl;
                    cout << endl;
                }
                break;
case 6: {
    cout << "==== Reservar acceso a sala VIP ====" << endl;
    string codigoSala;
    string idPasajero;
    string fechaReserva;

    cout << "Ingrese el c�digo de la sala VIP: ";
    cin >> codigoSala;
    cout << "Ingrese el ID del pasajero: ";
    cin >> idPasajero;
    cout << "Ingrese la fecha de la reserva: ";
    cin >> fechaReserva;

    try {
        // Verificar si la sala VIP existe
        bool salaVipExiste = false;
        for (const auto& sala : salasVip) {
            if (sala.getCodigo() == codigoSala) {
                salaVipExiste = true;
                break;
            }
        }

        // Verificar si el pasajero existe
        bool pasajeroExiste = false;
        for (const auto& pasajero : pasajeros) {
            if (pasajero.getID() == idPasajero) {
                pasajeroExiste = true;
                break;
            }
        }

        if (salaVipExiste && pasajeroExiste) {
            SalaVipReserva nuevaReserva(codigoSala, idPasajero, fechaReserva);
            salasVipReservas.push_back(nuevaReserva);
            cout << "Reserva de acceso a sala VIP realizada con �xito." << endl;

            // Obtener el �ndice de la reserva reci�n agregada
            int indiceReserva = salasVipReservas.size() - 1;

            // Obtener el objeto Pasajero correspondiente a la reserva
            const Pasajero& pasajero = salasVipReservas[indiceReserva].getPasajero(pasajeros);

            // Imprimir la informaci�n de la reserva
            cout << "==== Informaci�n de la reserva de sala VIP ====" << endl;
            cout << "C�digo de sala VIP: " << salasVipReservas[indiceReserva].getCodigoSala() << endl;
            cout << "ID del pasajero: " << pasajero.getID() << endl;
            cout << "Fecha de reserva: " << salasVipReservas[indiceReserva].getFechaReserva() << endl;
            cout << endl;
        } else {
            throw "Error: La sala VIP o el pasajero no existen.";
        }
    } catch (const char* msg) {
        cerr << msg << endl;
    }
    break;
}

 case 7: {
                cout << "==== Validar antelaci�n ====" << endl;
                CheckIn checkIn;
                checkIn.validarAntelacion();
                break;
            }
            case 8: {
                cout << "==== Realizar check-in ====" << endl;
                CheckIn checkin;
                checkin.setNumMaletas(2);
                checkin.setPesoLimiteKg(20);
                checkin.setHorasDeAntelacion(3);
                checkin.imprimirInformacion();
                break;
            }
            case 9: {
            cout << "==== Informe de ventas ====" << endl;
                InformeDeVentasDeUnVuelo informe;
                informe.setVuelosVendidos(10);
                informe.setTotalIngresos(5000.0);
                informe.setPromedioIngresos(500.0);

                informe.imprimirInformacion();
                break;
            }
            case 10: {
            cout << "==== Informaci�n del cliente ====" << endl;
                Cliente cliente;
                cliente.setNumPuntos(154);
                cliente.setNumReservas(6);
                cliente.setFechaPrimerCompra("20/01/2022");

                cliente.imprimirInformacion();
                break;
            }
            case 11: {
            cout << "==== Informaci�n del empleado ====" << endl;
                Empleado empleado;
                empleado.setSalario(300000.59);
                empleado.setFechaContratacion("10/04/2001");
                empleado.setPuesto("Piloto");

                empleado.imprimirInformacion();
                break;
            }
            case 12: {
        cout << "==== Emisi�n de tarjeta de embarque ====" << endl;
        Vuelo vuelo = vuelos[4];
        TarjetaEmbarque tarjeta(&pasajeros[4],&vuelo,"Santionio Airways", "Puerta 07", "123456");
        tarjeta.imprimirInformacion();

        break;
            }
        case 13: {
        cout << "==== Calidad de nuestros vuelos ====" << endl;
        CalidadDeVuelo calidad(95.5, 4.5, 25.0, true);

        calidad.darCalificacionMaxima();
        calidad.ingresarTemperaturaEnCelsius();

        calidad.imprimirInformacion();

        break;
            }
        case 14: {
        cout << "==== Informaci�n cliente-empleado ====" << endl;
        Empleado empleado("Rony Guajardo","Libramiento 509", "18/12/05", "azafato", 75641.45, "17/03/2009");
        Cliente cliente("Cesar Roann", "Arboledas 498", "05/08/2001", 175, 3, "28/01/2023");

        ClienteEmpleado clienteempleado(empleado.getNombre(), empleado.getDireccion(), empleado.getFechaNacimiento(), empleado.getPuesto(), empleado.getSalario(), empleado.getFechaContratacion(),
                            "09/12/2023", "diciembre-enero", 768, cliente.getNumReservas(), cliente.getNumPuntos(), cliente.getFechaPrimerCompra());

        clienteempleado.imprimirInformacion();
        break;
        }
//        case 15: {
//        cout << "==== Informaci�n de la tripulacion ====" << endl;
//        Persona persona("Terry Sanchez", "Canada 468", "25/11/2004");
//        Tripulacion tripulacion( persona.getNombre(),persona.getFechaNacimiento(), persona.getDireccion(), "A0048", "Co-piloto" );
//
//        tripulacion.imprimirInformacion();
//        break;
//        }
            default:
                cout << "Opci�n inv�lida. Por favor, ingrese una opci�n v�lida." << endl;
                break;
        }

        cout << endl;
    }
}

int main()
{
BuscadorDeVuelos buscador;

vector<Vuelo> vuelos;
    //Instancias
    vuelos.emplace_back("V001", "New York", "Los Angeles", "08:00", "12:00", 200, 150);
    vuelos.emplace_back("V002", "London", "Paris", "13:30", "16:30", 180, 120);
    vuelos.emplace_back("V003", "Tokyo", "Sydney", "20:45", "08:00", 300, 250);
    vuelos.emplace_back("V004", "Mexico City", "Toronto", "09:15", "11:30", 150, 100);
    vuelos.emplace_back("V005", "Dubai", "Singapore", "14:00", "20:30", 250, 200);


    vector<Pasajero> pasajeros;
    pasajeros.emplace_back("Rony", "Calle 123", "01/01/1990", "A001", "rony@gmail.com");
    pasajeros.emplace_back("Mar�a", "Avenida 456", "15/05/1985", "A002", "maria@gmail.com");
    pasajeros.emplace_back("Santi", "Santa Cruz 315","07/06/2003","A00572499","santigugon@gmail.com");
    pasajeros.emplace_back("Antonio", "Alameda de Mallorca 120","09/07/2003","A00574000","juanlanvel.03@gmail.com");
    pasajeros.emplace_back("Pablo Joaquin", "Eugenio Garza Sada 175","14/03/2000","A00604782","pablo.joaquin@tec.mx");

     vector<Reserva> reservas;
    // Crea instancias de reserva y agrega al vector de reservas
    reservas.emplace_back("R001", &vuelos[0], &pasajeros[0], "20/06/2023", "Reserva exitosa");
    reservas.emplace_back("R002", &vuelos[1], &pasajeros[1], "21/06/2023", "Reserva exitosa");
    reservas.emplace_back("017AEWW213",&vuelos[2], &pasajeros[2], "20/06/2023","Reserva exitosa");
    reservas.emplace_back("018AEWW214",&vuelos[3], &pasajeros[3], "30/08/2023","Reserva pendiente");
    reservas.emplace_back("019AEWW215",&vuelos[4], &pasajeros[4], "09/10/2023","Reserva cancelada");

    vector<SalaVip> salasVip;
    salasVip.emplace_back("SV001", 50);
    salasVip.emplace_back("SV002", 30);
    salasVip.emplace_back("SV003", 25);
    salasVip.emplace_back("SV004", 20);
    salasVip.emplace_back("SV005", 35);

    vector<SalaVipReserva> salasVipReservas;
    salasVipReservas.emplace_back(salasVip[0].getCodigo(), pasajeros[0].getID(), "25/06/2023");
    salasVipReservas.emplace_back(salasVip[1].getCodigo(), pasajeros[1].getID(), "26/06/2023");
    salasVipReservas.emplace_back(salasVip[2].getCodigo(), pasajeros[2].getID(), "27/06/2023");
    salasVipReservas.emplace_back(salasVip[3].getCodigo(), pasajeros[3].getID(), "28/06/2023");
    salasVipReservas.emplace_back(salasVip[4].getCodigo(), pasajeros[4].getID(), "28/06/2023");

    // Ejecutar el men�
    gestionarMenu(vuelos, pasajeros, reservas, salasVip, salasVipReservas);

    return 0;
}

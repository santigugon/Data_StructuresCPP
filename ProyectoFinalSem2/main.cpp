#include <iostream>
#include "Vuelo.h"
#include "Aeropuerto.h"
#include "Pasajero.h"
#include "Reserva.h"
#include "Persona.h"
#include "Tripulacion.h"
#include <vector>
#include "BuscadorDeVuelos.h"
#include "ClienteEmpleado.h"
#include "InformeDeVentasDeUnVuelo.h"
#include "checkIn.h"
#include "TarjetaEmbarque.h"
#include "CalidadDeVuelo.h"
#include "SalaVip.h"
#include "SalaVipReserva.h"
using namespace std;

void mostrarMenu() {
      cout  << endl;
    cout << "==== Menu de administracion SanTonio Airlines ====" << endl;
    cout << "1. Buscar vuelos" << endl;
    cout << "2. Mostrar informacion de vuelos" << endl;
    cout << "3. Mostrar informacion de pasajeros" << endl;
    cout << "4. Mostrar informacion de reservas" << endl;
    cout << "5. Mostrar informacion de salas VIP" << endl;
    cout << "6. Reservar acceso a sala VIP" << endl;
    cout << "7. Validar antelacion" << endl;
    cout << "8. Realizar check-in" << endl;
    cout << "9. Mostrar informe de ventas" << endl;
    cout << "10. Mostrar informacion del cliente" << endl;
    cout << "11. Mostrar informacion del empleado" << endl;
    cout << "12. Emision de tarjeta de embarque" << endl;
    cout << "13. Creacion de informe de calidad ventas y de nuestros vuelos" << endl;
    cout << "14. Informacion cliente-empleado" << endl;
    cout << "15. Informacion de tripulacion" << endl;
    cout << "16. Crear nueva reserva" << endl;
    cout << "0. Salir" << endl;
    cout << "Ingrese su opcion: ";
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
                   cout << endl;
                BuscadorDeVuelos buscador;
                buscador.buscarVuelos(vuelos);
                break;
            }
            case 2:
                   cout << endl;
                cout << "==== Informacion de vuelos ====" << endl;
                for (const auto& vuelo : vuelos) {
                    cout << "Numero de vuelo: " << vuelo.getNumeroVuelo() << endl;
                    cout << "Origen: " << vuelo.getOrigen() << endl;
                    cout << "Destino: " << vuelo.getDestino() << endl;
                    cout << "Hora de salida: " << vuelo.getHoraSalida() << endl;
                    cout << "Hora de llegada: " << vuelo.getHoraLlegada() << endl;
                    cout << "Asientos disponibles: " << vuelo.getAsientos() << endl;
                    cout << "Numero de pasajeros: " << vuelo.getNumPasajeros() << endl;
                    cout << endl;
                }
                break;
            case 3:
                cout << "==== Informacion de pasajeros ====" << endl;
                for (auto& pasajero : pasajeros) {
                    pasajero.imprimirInformacion();
                }
                break;
            case 4:
                cout << "==== Informacion de reservas ====" << endl;
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
                cout << "==== Informacion de salas VIP ====" << endl;
                for (const auto& sala : salasVip) {
                    cout << "Codigo de sala VIP: " << sala.getCodigo() << endl;
                    cout << "Capacidad: " << sala.getCapacidad() << endl;
                    cout << endl;
                }
                break;
case 6: {
       cout << endl;
    cout << "==== Reservar acceso a sala VIP ====" << endl;
    string codigoSala;
    string idPasajero;
    string fechaReserva;

    cout << "Ingrese el codigo de la sala VIP: ";
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
            cout << "Reserva de acceso a sala VIP realizada con exito." << endl;

            // Obtener el indice de la reserva recien agregada
            int indiceReserva = salasVipReservas.size() - 1;

            // Obtener el objeto Pasajero correspondiente a la reserva
            const Pasajero& pasajero = salasVipReservas[indiceReserva].getPasajero(pasajeros);

            // Imprimir la informaci�n de la reserva
            cout << "==== Informacion de la reserva de sala VIP ====" << endl;
            cout << "Codigo de sala VIP: " << salasVipReservas[indiceReserva].getCodigoSala() << endl;
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
        cout << endl;
                cout << "==== Validar antelacion ====" << endl;
                CheckIn checkIn;
                checkIn.validarAntelacion();
                break;
            }
            case 8: {
                   cout << endl;
                cout << "==== Realizar check-in ====" << endl;
                CheckIn checkin(2, 20, 2);

    int opcionCheckIn;
    do {
        cout << "---------- Menu Check-In ----------" << endl;
        cout << "1. Mostrar numero de maletas" << endl;
        cout << "2. Mostrar peso limite en kg" << endl;
        cout << "3. Mostrar horas de antelacion" << endl;
        cout << "4. Mostrar estado de completado" << endl;
        cout << "5. Imprimir informacion completa" << endl;
        cout << "6. Validar antelacion" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcionCheckIn;

        switch (opcionCheckIn) {
            case 1:
                cout << "Numero de maletas: " << checkin.getNumMaletas() << endl;
                break;
            case 2:
                cout << "Peso limite en kg: " << checkin.getPesoLimiteKg() << endl;
                break;
            case 3:
                cout << "Horas de antelacion: " << checkin.getHorasDeAntelacion() << endl;
                break;
            case 4:
                cout << "Estado de completado: " << (checkin.getCompletado() ? "Completado" : "Pendiente") << endl;
                break;
            case 5:
                checkin.imprimirInformacion();
                break;
            case 6:
                checkin.validarAntelacion();
                break;
            case 7:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (opcionCheckIn != 7);
                break;
            }
            case 9: {
                   cout << endl;
            cout << "==== Informe de ventas ====" << endl;
                InformeDeVentasDeUnVuelo informe;
                informe.setVuelosVendidos(10);
                informe.setTotalIngresos(5000.0);
                informe.setPromedioIngresos(500.0);

                informe.imprimirInformacion();
                break;
            }
            case 10: {
                   cout << endl;
            cout << "==== Informacion del cliente ====" << endl;
                Cliente cliente;
                cliente.setNumPuntos(154);
                cliente.setNumReservas(6);
                cliente.setFechaPrimerCompra("20/01/2022");

                cliente.imprimirInformacion();
                break;
            }
            case 11: {
                   cout << endl;
            cout << "==== Informacion del empleado ====" << endl;
                Empleado empleado;
                empleado.setSalario(300000.59);
                empleado.setFechaContratacion("10/04/2001");
                empleado.setPuesto("Piloto");

                empleado.imprimirInformacion();
                break;
            }
            case 12: {
                   cout << endl;
        cout << "==== Emision de tarjeta de embarque ====" << endl;
        Vuelo vuelo = vuelos[4];
        TarjetaEmbarque tarjeta(&pasajeros[4],&vuelo,"Santionio Airways", "Puerta 07", "123456");


        int opcionTarjeta;
       do {
        cout << "---------- Menu Tarjeta de Embarque ----------" << endl;
        cout << "1. Mostrar pasajero asociado" << endl;
        cout << "2. Mostrar vuelo asociado" << endl;
        cout << "3. Mostrar aerolínea" << endl;
        cout << "4. Mostrar puerta de embarque" << endl;
        cout << "5. Mostrar numero de barras" << endl;
        cout << "6. Imprimir informacion completa" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcionTarjeta;

        switch (opcionTarjeta) {
            case 1:
                cout << "Pasajero asociado: " << tarjeta.getPasajero().getID() << endl;
                break;
            case 2:
                cout << "Vuelo asociado: " << tarjeta.getVuelo()->getNumeroVuelo() << endl;
                break;
            case 3:
                cout << "Aerolinea: " << tarjeta.getAerolinea() << endl;
                break;
            case 4:
                cout << "Puerta de embarque: " << tarjeta.getPuertaEmbarque() << endl;
                break;
            case 5:
                cout << "Numero de barras: " << tarjeta.getNumBarras() << endl;
                break;
            case 6:
                tarjeta.imprimirInformacion();
                break;
            case 7:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (opcionTarjeta != 7);

        break;
            }
        case 13: {
               cout << endl;
            InformeDeVentasDeUnVuelo informe(10, 5000.0, 500.0);

    int opcionVentas;
    do {
        cout << "---------- Informe de Ventas -> De Calidad ----------" << endl;
        cout << "1. Mostrar vuelos vendidos" << endl;
        cout << "2. Mostrar total de ingresos" << endl;
        cout << "3. Mostrar promedio de ingresos" << endl;
        cout << "4. Calcular proyeccion para el proximo anio" << endl;
        cout << "5. Imprimir información completa" << endl;
        cout << "6. Pasar al informe de calidad del vuelo" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcionVentas;

        switch (opcionVentas) {
            case 1:
                cout << "Vuelos vendidos: " << informe.getVuelosVendidos() << endl;
                break;
            case 2:
                cout << "Total de ingresos: $" << informe.getTotalIngresos() << endl;
                break;
            case 3:
                cout << "Promedio de ingresos: $" << informe.getPromedioIngresos() << endl;
                break;
            case 4:
               cout<<"La proyeccion estimada es"<< informe.generarProyecciones()<<endl;
                break;
            case 5:
                informe.imprimirInformacion();
                break;
            case 6:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (opcionVentas != 6);


        cout << "==== Calidad de nuestros vuelos ====" << endl;
      CalidadDeVuelo calidad( .89,  5.0,  18,  true);
 int opcion;
    do {
        cout << "---------- Informe Calidad ----------" << endl;
        cout << "1. Mostrar % puntualidad" << endl;
        cout << "2. Mostrar número de estrellas" << endl;
        cout << "3. Mostrar temperatura promedio" << endl;
        cout << "4. Mostrar si tiene alimentación" << endl;
        cout << "5. Dar calificación máxima" << endl;
        cout << "6. Ingresar temperatura en Celsius" << endl;
        cout << "7. Imprimir información completa" << endl;
        cout << "8. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Porcentaje de puntualidad: " << calidad.getPorcentajePuntualidad() << "%" << endl;
                break;
            case 2:
                cout << "Numero de estrellas: " << calidad.getNumEstrellas() << endl;
                break;
            case 3:
                cout << "Temperatura promedio: " << calidad.getTemperaturaPromedio() << endl;
                break;
            case 4:
                cout << "Tiene alimentacion: " << (calidad.getAlimentacion() ? "Sí" : "No") << endl;
                break;
            case 5:
                calidad.darCalificacionMaxima();
                break;
            case 6:
                calidad.ingresarTemperaturaEnCelsius();
                break;
            case 7:
                calidad.imprimirInformacion();
                break;
            case 8:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (opcion != 8);


        break;
            }
        case 14: {
               cout << endl;
        cout << "==== Informacion cliente-empleado ====" << endl;
        Empleado empleado("Rony Guajardo","Libramiento 509", "18/12/05", "azafato", 75641.45, "17/03/2009");
        Cliente cliente("Cesar Roann", "Arboledas 498", "05/08/2001", 175, 3, "28/01/2023");

        ClienteEmpleado clienteempleado(empleado.getNombre(), empleado.getDireccion(), empleado.getFechaNacimiento(), empleado.getPuesto(), empleado.getSalario(), empleado.getFechaContratacion(),
                            "09/12/2023", "diciembre-enero", 768, cliente.getNumReservas(), cliente.getNumPuntos(), cliente.getFechaPrimerCompra());

        clienteempleado.imprimirInformacion();
        break;
        }
          case 15: {
                 cout << endl;
        cout << "==== Informacion de la tripulacion ====" << endl;
           Tripulacion tripulacion( "Terry Sanchez", "Canada 468", "25/11/2004", "A0048", "Co-piloto" );

        tripulacion.imprimirInformacion();
        break;
        }
        case 16: {
               cout << endl;
        cout << "==== Creacion de una nueva reserva ====" << endl;
    string valId,   valFechaReserva,  valEstatus;
    string valNombre,  valDireccion,  valFechaNacimiento,  valEmail;
    string nVuelo,  valOrigen,  valDestino,  valHoraSalida,  valHoraLlegada;
     int nAsientos,  nPasajeros;

      cout << "Dame el nombre: ";
    cin >> valNombre;

    cout << "Dame la direccion: ";
    cin >> valDireccion;

    cout << "Dame la fecha de nacimiento: ";
    cin >> valFechaNacimiento;

    cout << "Dame el ID: ";
    cin >> valId;

    cout << "Dame el email: ";
    cin >> valEmail;

    cout << "Dame el numero de vuelo: ";
    cin >> nVuelo;

    cout << "Dame el origen: ";
    cin >> valOrigen;

    cout << "Dame el destino: ";
    cin >> valDestino;

    cout << "Dame la hora de salida: ";
    cin >> valHoraSalida;

    cout << "Dame la hora de llegada: ";
    cin >> valHoraLlegada;

    cout << "Dame el numero de asientos: ";
    cin >> nAsientos;

    cout << "Dame el numero de pasajeros: ";
    cin >> nPasajeros;

         Pasajero * pasajeroRes = new Pasajero(valNombre, valDireccion,valFechaNacimiento,valId,valEmail);

         pasajeros.emplace_back(valNombre, valDireccion,valFechaNacimiento,valId,valEmail);
    // Crear un nuevo vuelo
        Vuelo * vueloRes = new Vuelo(nVuelo,valOrigen,valDestino,valHoraSalida,valHoraLlegada,nAsientos,nPasajeros);
        vuelos.emplace_back(nVuelo,valOrigen,valDestino,valHoraSalida,valHoraLlegada,nAsientos,nPasajeros);
       // Reserva* reservaCreada= new Reserva();
        reservas.emplace_back(valId,vueloRes,pasajeroRes,"6/16/2023","Confirmada");

        cout<<"Reserva creada con exito!"<<endl;
        break;
        }
            default:
                cout << "Opcion invalida. Por favor, ingrese una opcion valida." << endl;
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
    vuelos.emplace_back("V006", "Rome", "Barcelona", "17:30", "19:00", 160, 120);
    vuelos.emplace_back("V007", "Cairo", "Istanbul", "08:45", "10:30", 180, 150);
    vuelos.emplace_back("V008", "Sydney", "Melbourne", "12:10", "14:00", 200, 180);
    vuelos.emplace_back("V009", "Hong Kong", "Shanghai", "15:30", "17:15", 190, 160);
    vuelos.emplace_back("V010", "Rio de Janeiro", "Sao Paulo", "19:00", "20:00", 150, 130);
    vuelos.emplace_back("V011", "Rome", "Sao Paulo", "19:00", "20:00", 150, 130);
    vuelos.emplace_back("V012", "Rome", "Toronto", "17:00", "20:00", 150, 130);

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

/*buscador.buscarVuelos(vuelos);

 ClienteEmpleado ejemplo("Juan Pérez", "Calle Principal 123", "1985-05-10", "Gerente", 5000.0, "2021-02-20", "2023-06-30", "2023-07-15", 10, 5, 100, "2022-01-15");
 ejemplo.imprimirInformacion();

    // Crear un nuevo pasajero
    Pasajero * pasajero = new Pasajero("Santi", "Santa Cruz 315","07/06/2003","A00572499","santigugon@gmail.com");
    // Crear un nuevo vuelo
    Vuelo * vuelo = new Vuelo("AM0124","Amsterdam","Leon","21:56","3:58",199,156);
    Vuelo* arg=new Vuelo("V010", "Rio de Janeiro", "Sao Paulo", "19:00", "20:00", 150, 130);

    // Crear una nueva reserva para el pasajero y el vuelo
    Reserva * reserva = new Reserva("017AEWW213",arg, pasajero, "20/06/2023","Todo correcto");
    reserva->setPasajero(pasajero);
    reserva->setVuelo(vuelo);

    Vuelo vueloprue=reserva->getVuelo();
    Pasajero pasajeroprue=reserva->getPasajero();

    vueloprue.generarResumen();
    pasajeroprue.generarResumen();
    cout<<"La reserva para el vuelo"<<endl;


    //Polimorfismo
    Persona *persona2;
    Persona *persona = new Pasajero();
    persona->imprimirInformacion(); // Imprime la información del pasajero
    persona2 = new Tripulacion("NA","NA","NA","NA","NA");
    persona2->imprimirInformacion(); // Imprime la información de la tripulación

    int num=2;
    int *apNum= &num;
    //apNum=0;
    int *apNum2=&num;
*apNum2=4;

    cout << "Direccion" <<apNum<<" val "<< *apNum<< endl;
     cout << "Direccion " <<apNum2<<" val "<< *apNum2<< endl;
 cout << "num " <<&num<<" val "<< num<< endl;

 cout<<endl;
 cout<<"GENERAR INFORMES DE VUELOS Y VENTAS"<<endl;
 cout<<"Informe de ventas: "<<endl;
 InformeDeVentasDeUnVuelo informeVentas(vuelos.size(), 100.0, 80.0);//Primer parametro contar el num de vuelos en vector

    informeVentas.imprimirInformacion();

    //informe.actualizarAsientosDisponibles(10);
    informeVentas.imprimirInformacion();
 cout<<"Informe de calidad: "<<endl;

 //BIENVENIDO AL ADMINISTRADOR DE SANANT
 //ENLISTAR TODOS LOS VUELOS
 //ENLISTAR TODOS LOS PASAJEROS
 //ENLISTAR TODAS LAS RESERVAS
 //GENERAR INFORMES
        //Informe de ventas

        InformeDeVentasDeUnVuelo informe(10, 5000.0, 500.0);

    int opcionVentas;
    do {
        cout << "---------- Menú ----------" << endl;
        cout << "1. Mostrar vuelos vendidos" << endl;
        cout << "2. Mostrar total de ingresos" << endl;
        cout << "3. Mostrar promedio de ingresos" << endl;
        cout << "4. Calcular proyeccion para el proximo anio" << endl;
        cout << "5. Imprimir información completa" << endl;
        cout << "6. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcionVentas;

        switch (opcionVentas) {
            case 1:
                cout << "Vuelos vendidos: " << informe.getVuelosVendidos() << endl;
                break;
            case 2:
                cout << "Total de ingresos: $" << informe.getTotalIngresos() << endl;
                break;
            case 3:
                cout << "Promedio de ingresos: $" << informe.getPromedioIngresos() << endl;
                break;
            case 4:
               cout<<"La proyeccion estimada es"<< informe.generarProyecciones()<<endl;
                break;
            case 5:
                informe.imprimirInformacion();
                break;
            case 6:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (opcionVentas != 6);


        //Informe de calidad de vuelos

CalidadDeVuelo calidad( .89,  5.0,  18,  true);
 int opcion;
    do {
        cout << "---------- Informe Calidad ----------" << endl;
        cout << "1. Mostrar % puntualidad" << endl;
        cout << "2. Mostrar número de estrellas" << endl;
        cout << "3. Mostrar temperatura promedio" << endl;
        cout << "4. Mostrar si tiene alimentación" << endl;
        cout << "5. Dar calificación máxima" << endl;
        cout << "6. Ingresar temperatura en Celsius" << endl;
        cout << "7. Imprimir información completa" << endl;
        cout << "8. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Porcentaje de puntualidad: " << calidad.getPorcentajePuntualidad() << "%" << endl;
                break;
            case 2:
                cout << "Número de estrellas: " << calidad.getNumEstrellas() << endl;
                break;
            case 3:
                cout << "Temperatura promedio: " << calidad.getTemperaturaPromedio() << endl;
                break;
            case 4:
                cout << "Tiene alimentación: " << (calidad.getAlimentacion() ? "Sí" : "No") << endl;
                break;
            case 5:
                calidad.darCalificacionMaxima();
                break;
            case 6:
                calidad.ingresarTemperaturaEnCelsius();
                break;
            case 7:
                calidad.imprimirInformacion();
                break;
            case 8:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (opcion != 8);


//Check in
    //Revisar check in
    CheckIn checkin(2, 20, 2);

    int opcionCheckIn;
    do {
        cout << "---------- Menú Check-In ----------" << endl;
        cout << "1. Mostrar número de maletas" << endl;
        cout << "2. Mostrar peso límite en kg" << endl;
        cout << "3. Mostrar horas de antelación" << endl;
        cout << "4. Mostrar estado de completado" << endl;
        cout << "5. Imprimir información completa" << endl;
        cout << "6. Validar antelación" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcionCheckIn;

        switch (opcionCheckIn) {
            case 1:
                cout << "Número de maletas: " << checkin.getNumMaletas() << endl;
                break;
            case 2:
                cout << "Peso límite en kg: " << checkin.getPesoLimiteKg() << endl;
                break;
            case 3:
                cout << "Horas de antelación: " << checkin.getHorasDeAntelacion() << endl;
                break;
            case 4:
                cout << "Estado de completado: " << (checkin.getCompletado() ? "Completado" : "Pendiente") << endl;
                break;
            case 5:
                checkin.imprimirInformacion();
                break;
            case 6:
                checkin.validarAntelacion();
                break;
            case 7:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (opcionCheckIn != 7);


    TarjetaEmbarque tarjeta(pasajero, vuelo, "Aerolínea XYZ", "Puerta 10", "BAR123");

        int opcionTarjeta;
       do {
        cout << "---------- Menú Tarjeta de Embarque ----------" << endl;
        cout << "1. Mostrar pasajero asociado" << endl;
        cout << "2. Mostrar vuelo asociado" << endl;
        cout << "3. Mostrar aerolínea" << endl;
        cout << "4. Mostrar puerta de embarque" << endl;
        cout << "5. Mostrar número de barras" << endl;
        cout << "6. Imprimir información completa" << endl;
        cout << "7. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcionTarjeta;

        switch (opcionTarjeta) {
            case 1:
                cout << "Pasajero asociado: " << tarjeta.getPasajero().getID() << endl;
                break;
            case 2:
                cout << "Vuelo asociado: " << tarjeta.getVuelo()->getNumeroVuelo() << endl;
                break;
            case 3:
                cout << "Aerolínea: " << tarjeta.getAerolinea() << endl;
                break;
            case 4:
                cout << "Puerta de embarque: " << tarjeta.getPuertaEmbarque() << endl;
                break;
            case 5:
                cout << "Número de barras: " << tarjeta.getNumBarras() << endl;
                break;
            case 6:
                tarjeta.imprimirInformacion();
                break;
            case 7:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (opcionTarjeta != 7);

    //Revisar Tarjeta de embarque


//Sala VIP
    //Salas VIP Disponibles
    //Codigo y capacidad

//Buscador de Vuelos
//Crear pasajero
//Crear Reserva
//Crear Vuelo

//Salir

cout<<endl;

*/
    return 0;
}

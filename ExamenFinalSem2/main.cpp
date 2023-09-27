#include <iostream>
#include "Calificacion.h"
#include "Contenido.h"
#include "Pelicula.h"
#include "Serie.h"
#include "MiContenido.h"
#include <vector>

using namespace std;

int main()
{
    cout<<endl;
    cout<<"Instancia de calificacion y prueba de metodo propio: "<<endl;
    cout<<endl;
    Calificacion calificacion(7.5, 6.8, 8.2);
    double promedio = calificacion.calcularPromedio();
    cout << "El promedio de las calificaciones es: " << promedio << endl;

    cout<<endl;
    cout<<"Instancia de pelicula y prueba de metodo virtual: "<<endl;
    cout<<endl;
// Crear una instancia de Pelicula
Calificacion* calificacionPelicula = new Calificacion(7.9, 8.2, 7.8);
Pelicula pelicula("Inception", "Acción, Ciencia ficción", 148, true, 160000000.0, "PG-13", "2010-07-16", calificacionPelicula, 2010, 836836967.0, "Christopher Nolan");
pelicula.reproducir();

cout<<endl;
cout<<"Manejo de errores 1 (El presupesto no puede ser menor a 0): "<<endl;
cout<<endl;
pelicula.aumentarPresupuesto();

cout<<endl;
cout<<"Instancia de Serie y prueba de metodo virtual: "<<endl;
cout<<endl;
// Crear una instancia de Serie
Calificacion* calificacionSerie = new Calificacion(8.6, 9.0, 8.8);
Serie serie("Friends", "Comedia", 22, true, 1000000.0, "TV-14", "1994-09-22", calificacionSerie, 10, "NBC", true);
serie.reproducir();

cout<<endl;
cout<<"Manejo de errores 2: "<<endl;
cout<<endl;
// Crear una instancia de MiContenido
double calificacion1,calificacion2,calificacion3;
try{
cout<<"Ingresa la calificacion 1 de Imdb para mi contenido (0-10)"<<endl;
cin>>calificacion1;

cout<<"Ingresa la calificacion 2 de Rotten Tomatoes para mi contenido (0-10)"<<endl;
cin>>calificacion2;

cout<<"Ingresa la calificacion 3 de Meta Critic para mi contenido (0-10)"<<endl;
cin>>calificacion3;

if(calificacion1<0||calificacion2<0||calificacion3<0)
    throw "La calificacion debe ser mayor a 0";
if(calificacion1>10||calificacion2>10||calificacion3>10)
    throw "La calificacion debe ser menor a 10";
    Calificacion* calificacionMiContenido = new Calificacion(8.0, 7.5, 8.2);
    MiContenido miContenido("Mi Título", "Mi Género", 120, false, 1000000.0, "Mi Clasificación", "2022-01-01", calificacionMiContenido);
    miContenido.reproducir();

}
catch( const char* msg){
cerr<<msg<<endl;
}
//BONUS
//ARRAY EXTRA
cout<<endl;
    cout<<"Ejercicios Bonus para Pts extra: "<<endl;
    cout<<endl;
    // Crear instancias de Calificacion
    Calificacion calificaciones1(7.8, 6.5, 8.2);
    Calificacion calificaciones2(6.9, 7.1, 7.5);
    Calificacion calificaciones3(8.3, 7.8, 8.0);
    Calificacion calificaciones4(7.5, 6.8, 7.2);
    Calificacion calificaciones5(8.1, 7.6, 7.9);


//SOBRECARGA DE OPERADOR
    Calificacion calificacionSobreCarga=calificaciones1+calificaciones2;
    cout<<endl;
    cout<<"Suma de calificaciones 1 + calificaciones 2"<<endl;
    cout<<"Sobrecarga operador +, resultado promedio de suma de ambas calificaciones: "<<calificacionSobreCarga.calcularPromedio()<<endl;
    cout<<endl;

cout<<endl;
    cout<<"Array de Peliculas"<<endl;
    // Crear instancias de Pelicula utilizando el constructor
    Pelicula peliculas[5] = {
        Pelicula("Pelicula 1", "Aventura", 120, true, 1000000.0, "PG-13", "2022-05-15", &calificaciones1, 2021, 5000000.0, "Director 1"),
        Pelicula("Pelicula 2", "Comedia", 90, false, 500000.0, "R", "2022-07-20", &calificaciones2, 2020, 3000000.0, "Director 2"),
        Pelicula("Pelicula 3", "Drama", 150, true, 2000000.0, "PG", "2022-03-10", &calificaciones3, 2019, 4000000.0, "Director 3"),
        Pelicula("Pelicula 4", "Acción", 105, false, 1500000.0, "PG-13", "2022-09-05", &calificaciones4, 2023, 2500000.0, "Director 4"),
        Pelicula("Pelicula 5", "Suspenso", 135, true, 1800000.0, "R", "2022-11-30", &calificaciones5, 2022, 3500000.0, "Director 5")
    };

    // Acceder a los elementos del array y realizar operaciones
    for (int i = 0; i < 5; i++) {
        std::cout << "Película " << i + 1 << ": " << peliculas[i].getTitulo() << std::endl;
    }


    //Prueba de metodos
    cout<<endl;
    cout<<"Prueba de metodos propios, aparte: "<<endl;
    cout<<endl;
    cout<<"Promedio antes de eliminar una calificacion "<<calificaciones3.calcularPromedio()<<endl;
    calificaciones3.eliminarCalificacion();
    cout<<"Promedio despues"<<calificaciones3.calcularPromedio()<<endl;
    cout<<endl;
    cout<<"Promedio antes de bajar un punto a una calificacion "<<calificaciones2.calcularPromedio()<<endl;
    calificaciones2.bajarPunto();
    cout<<"Promedio despues "<<calificaciones2.calcularPromedio()<<endl;
    cout<<endl;

    return 0;
    //Contenido contenido;
    //contenido.setTitulo("Mi película");
    //contenido.setGenero("Drama");
    //contenido.setDuracion(120);
    //contenido.setVisto(true);
    //contenido.setPresupuesto(1000000.0);
    //contenido.setClasificacion("PG-13");
    //contenido.setFechaLanzamiento("1 de enero de 2022");


    //PRUEBA DE METODO ELIMINAR CALI

}

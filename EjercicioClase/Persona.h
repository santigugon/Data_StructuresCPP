#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
#include <string>

using namespace std;



class Persona {
private:
    int id;
    string apellido;
    string nombre;
    string fechaNacimiento;
public:
    Persona();
    Persona(int, string, string, string);

    int getId();
    void setId(int);

    string getApellido();
    void setApellido(string);

    string getNombre();
    void setNombre(string);

    string getFechaNacimiento();
    void setFechaNacimiento(string);


};


#endif // PERSONA_H_INCLUDED

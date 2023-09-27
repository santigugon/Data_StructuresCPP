#ifndef ENVIO_H_INCLUDED
#define ENVIO_H_INCLUDED

#include <string>

using namespace std;

class Envio {
private:
    string remitente_nombre;
    string remitente_direccion;
    string remitente_ciudad;
    string remitente_estado;
    int remitente_codigo_postal;

    string destinatario_nombre;
    string destinatario_direccion;
    string destinatario_ciudad;
    string destinatario_estado;
    int destinatario_codigo_postal;

    double costo_estandar;

public:
    Envio(string , string , string ,
          string , int , string ,
          string , string , string ,
          int , double );

            // Getters
    string getRemitenteNombre();
    string getRemitenteDireccion();
    string getRemitenteCiudad();
    string getRemitenteEstado();
    int getRemitenteCodigoPostal();
    string getDestinatarioNombre();
    string getDestinatarioDireccion();
    string getDestinatarioCiudad();
    string getDestinatarioEstado();
    int getDestinatarioCodigoPostal();

    // Setters
    void setRemitenteNombre(string remitente_nombre);
    void setRemitenteDireccion(string remitente_direccion);
    void setRemitenteCiudad(string remitente_ciudad);
    void setRemitenteEstado(string remitente_estado);
    void setRemitenteCodigoPostal(int remitente_codigo_postal);
    void setDestinatarioNombre(string destinatario_nombre);
    void setDestinatarioDireccion(string destinatario_direccion);
    void setDestinatarioCiudad(string destinatario_ciudad);
    void setDestinatarioEstado(string destinatario_estado);
    void setDestinatarioCodigoPostal(int destinatario_codigo_postal);

    virtual double calculaCosto() const;
};

#endif // ENVIO_H_INCLUDED

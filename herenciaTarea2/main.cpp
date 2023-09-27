#include <iostream>
#include "envio.h"
#include "paquete.h"
#include "sobre.h"

int main() {
    // Crear objeto Envio
    Envio envio("Santiago", "Santa Cruz 315", "Leon", "Guanajuato", 37150,
                "Emilio Ramirez", "Farallon 115", "Monterrey", "Nuevo Leon", 37129,
                10.0);

    // Calcular costo de envío
    double costo_envio = envio.calculaCosto();

    // Mostrar resultado
    std::cout << "Costo de envío: $" << costo_envio << std::endl;

    // Crear objeto Paquete
    Paquete paquete("Santiago", "Santa Cruz 315", "Leon", "Guanajuato", 37150,
                "Emilio Ramirez", "Farallon 115", "Monterrey", "Nuevo Leon", 37129,
                    10.0, 20.0, 30.0, 15.0, 2.5, 5.0);

    // Calcular costo de envío del paquete
    double costo_paquete = paquete.calculaCosto();

    // Mostrar resultado
std::cout << "El paquete con la informacion del remitente "
          << "nombre " << paquete.getRemitenteNombre()
          << " direccion " << paquete.getRemitenteDireccion()
          << " ciudad " << paquete.getRemitenteCiudad()
          << " estado " << paquete.getRemitenteEstado()
          << " y codigo postal " << paquete.getRemitenteCodigoPostal()
          << " e informacion del destinatario "
          << "nombre " << paquete.getDestinatarioNombre()
          << " direccion " << paquete.getDestinatarioDireccion()
          << " ciudad " << paquete.getDestinatarioCiudad()
          << " estado " << paquete.getDestinatarioEstado()
          << " y codigo postal " << paquete.getDestinatarioCodigoPostal()
          << " Costo de envío del paquete: $" << costo_paquete
          << std::endl;

    // Crear objeto Sobre
    Sobre sobre("Remitente", "Dirección remitente", "Ciudad remitente", "Estado remitente", 37150,
                "Destinatario", "Dirección destinatario", "Ciudad destinatario", "Estado destinatario", 37129,
                8.0, 20.0, 25.0, 5.0);

    // Calcular costo de envío del sobre
    double costo_sobre = sobre.calculaCosto();

    // Mostrar resultado
    std::cout << "Costo de envío del sobre: $" << costo_sobre << std::endl;

    return 0;
}

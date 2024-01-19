#include "Agenda.hpp"
#include <iostream>

int main() {
    // Objetos de la clase contacto
    Contacto<std::string> contacto1("Juanito Mora", "27681234", "dj.juanito@gmail.com");
    Contacto<std::string> contacto2("William Walker", "865488897", "williwalk@outlook.es");
    Contacto<std::string> contacto3("Juan Santamaria", "22315689", "adiosmezon@gmail.com");

    // Crear un objeto agenda
    Agenda<std::string> agenda;

    // Agregar contactos a la agenda
    try {
        agenda.agregarContacto(contacto1);
        agenda.agregarContacto(contacto2);
        agenda.agregarContacto(contacto3);

    } catch (const std::exception& e) {
        std::cerr << "Error al agregar contacto: " << e.what() << std::endl;
    }

    // Mostrar Contactos
    std::cout << "Contactos en la agenda: " << std::endl;
    agenda.mostrarContactos();

    // Eliminar un contacto
    try {
        agenda.eliminarContacto("865488897");
    } catch (const std::exception& e) {
        std::cerr << "Error al eliminar contacto: " << e.what() << std::endl;
    }

    // Mostrar Contactos
    std::cout << "Contactos en la agenda " << std::endl;
    agenda.mostrarContactos();

    std::cout << "Buscar contacto en la agenda " std::endl;
    agenda.buscarContactos("Juanito Mora");

    return 0;
}

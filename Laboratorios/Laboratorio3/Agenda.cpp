#include "Agenda.hpp"

template <typename T>
void Agenda<T>::agregarContacto(const Contacto<T>& contacto) {
    // Verifica si ya existe el contacto
    // iterador para ir viendo los valores dentro de la lista
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it++) {
        if (it->getTelefono() == contacto.getTelefono()) {
            throw std::invalid_argument("Ya existe un contacto con este número");
        }
    }
    // Se agrega el contacto
    contactos.push_back(contacto);
}

// Funcion que elimana un contacto
template <typename T>
void Agenda<T>::eliminarContacto(const T& telefono){
    typename std::list <Contacto<T>>::const_iterator it;
    // Bucle que recorre la lista
    for(it = contactos.begin(); it != contactos.end(); it++){
        if(it->getTelefono() == telefono){
            // Borra el contacto
            contactos.erase(it);
            // Sale de la funcion
            return;
        }
    }
    throw std::out_of_range("No se encuentra un contacto con ese numero");
}

template <typename T>
void Agenda<T>::mostrarContactos() const {
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); ++it) {
        std::cout << "Nombre: " << it->getNombre() << " "
                  << "Telefono: " << it->getTelefono() << " "
                  << "Email: " << it->getEmail() << std::endl;
    }
}

template <typename T>
std::list<Contacto<T>> Agenda<T>::buscarContactos(const std::string& patron) const {
    // Lista que almacena los resultados
    std::list<Contacto<T> > resultados;
    // Define 'pos' para almacenar la posicion que coincida
    std::string::size_type pos;
    // Define un iterador para recorrer la lista
    typename std::list<Contacto<T> >::const_iterator it;
    // bucle que recorre la lista de principio a fin
    for (it = contactos.begin(); it != contactos.end(); ++it) {
        // obtiene el nombre del contacto actual
        pos = it->getNombre().find(patron);
        // si coincide lo agrega a la lista resultados
        if (pos != std::string::npos) {
            resultados.push_back(*it);;
        } else {
            // sino se rencuentra, intenta ahora con el correo
            pos = it->getEmail().find(patron);
            if (pos != std::string::npos) {
                resultados.push_back(*it);
            }
        }
    }
    return resultados;
}

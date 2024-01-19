#ifndef AGENDA_HPP
#define AGENDA_HPP

#include <iostream>
#include <list>
#include <algorithm>
#include <stdexcept>
#include "Contacto.hpp"

template <typename T>
class Agenda {
// Declaracion de funciones
public:
    void agregarContacto(const Contacto<T>& contacto);
    void eliminarContacto(const T& telefono);
    void mostrarContactos() const;
    //tipo nombre <const tipo pametro> const;
    std::list<Contacto<T>> buscarContactos(const std::string& patron) const;

private:
    std::list<Contacto<T>> contactos;
};

#include "Agenda.cpp"
#endif // AGENDA_HPP
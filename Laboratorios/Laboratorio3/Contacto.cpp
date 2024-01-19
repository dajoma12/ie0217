#include "Contacto.hpp"

template <typename T>
Contacto<T>::Contacto(T nombre, T telefono, T email)
    : nombre(nombre), telefono(telefono), email(email) {}
    /* Lo que hace el constructor, es atributo(valor) */

template <typename T>
T Contacto<T>::getNombre() const {
    return nombre; // Porque es el que se estará devolviendo
}

template <typename T>
T Contacto<T>::getTelefono() const {
    return telefono;
}

template <typename T>
T Contacto<T>::getEmail() const {
    return email;
}

/* A la hora de trabajar con templates no sirve del todo usar
cpp y los hpp*/

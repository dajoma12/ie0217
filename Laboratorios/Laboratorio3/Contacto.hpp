#ifndef CONTACTO_HPP
#define CONTACTO_HPP

#include <string>

template <typename T>
class Contacto {
public:
    // constructor con 3 metodos publicos
    Contacto(T nombre, T telefono, T email); // Dentro de cada funcion se retorna estas cosas
    T getNombre() const; // La definicion const es porque el valor que obtenemos no va a cambiar
    T getTelefono() const; // Const ayuda al compilador
    T getEmail() const;

private:
    T nombre;
    T telefono;
    T email;
};

#include "Contacto.cpp"
#endif // CONTACTO_HPP

/* Plantilla genérica */
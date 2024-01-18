#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector>
#include "libro.hpp"

/* Declaracion de una clase biblioteca*/
class Biblioteca {
public:
    /* Funciones de la clase*/
    void agregarLibro(
        const std::string& titulo,
        const std::string& autor
    );
    void mostrarCatalogo();

private:
    /* Inicia un puntero de vectores de tipo libro*/
    std::vector<Libro> catalogo;
};

#endif // BIBLIOTECA_HPP
#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>

/* Declaracion de una clase */
class Libro {
public:
    /* Constructor de la clase */
    Libro(const std::string& titulo, const std::string& autor);
    /* Funcion que muestra la informacion */
    void mostrarInfo() const;


private:
    /* Atributos de la clase*/
    std::string titulo;
    std::string autor;

};

#endif // LIBRO_HPP
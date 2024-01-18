#include <iostream>
#include "libro.hpp"

/*Cosntructor de clase con parametros inicializados*/
Libro::Libro(
    const std::string& titulo, const std::string& autor
) : titulo(titulo), autor(autor) {}

/*Funcion que muestre la informacion del libro*/
void Libro::mostrarInfo() const {
    std::cout << "Titulo: " << titulo << ", Autor: " << autor << std::endl;
}
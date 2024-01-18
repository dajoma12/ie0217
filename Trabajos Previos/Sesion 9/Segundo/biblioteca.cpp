#include <iostream>
#include "biblioteca.hpp"

/*Funcion que agrega un libro*/
void Biblioteca::agregarLibro(
    const std::string& titulo,
    const std::string& autor
) {
    /*Utiliza directamente el objeto sin la necesidad de realizar una copia*/
    catalogo.emplace_back(titulo, autor);
}

/*Funcion que muestra un catalogo*/
void Biblioteca::mostrarCatalogo() {
    /*itera a traves de cada elemento en el vector catalogo*/
    for (const auto& libro : catalogo) {
        /*Muestra la informacion*/
        libro.mostrarInfo();
    }
};
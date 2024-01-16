// Autor: David Jose Madrigal Miranda
// Fecha: 2024-01-14

#include <iostream>
#include "Libro.hpp"
#include "Noticia.hpp"
using namespace std;

int main() {
    Libro Ejemplo("La Sombra del Viento", "Grupo 1", "Tela","Carlos Ruiz Zafon", "Penguin Random House",
                       "Ficcion", "Disponible", 500, 25.99, "Va de monos", "Tio conejo");

    // Llama a la función imprimirInfo() para mostrar la información del objeto Ejemplo
    Ejemplo.infoLibro();
    Ejemplo.volumenLibro();

    Noticia Ejemplo1("La Sombra del Viento", "Grupo 1", "Tela","Carlos Ruiz Zafon", "Penguin Random House",
                       "Ficcion", "Disponible", 500, 25.99, "Va de monos", "Tio conejo");

    // Llama a la función imprimirInfo() para mostrar la información del objeto Ejemplo
    Ejemplo1.infoNoticia();
    Ejemplo1.volumenNoticia();

    return 0;
}
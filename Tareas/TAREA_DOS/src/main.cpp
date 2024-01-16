// Autor: David Jose Madrigal Miranda
// Fecha: 2024-01-14

#include <iostream>
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"

using namespace std;

int main() {
    Libro Ejemplo("La Sombra del Viento", "Grupo 1", "Tela","Carlos Ruiz Zafon", "Penguin Random House",
                       "Ficcion", "Disponible", 500, 25.99, "Va de monos", "Tio conejo");

    // Llama a la función imprimirInfo() para mostrar la información del objeto Ejemplo
    Ejemplo.infoLibro();
    Ejemplo.volumenLibro();

    Noticia Ejemplo1("Noticia de ultima hora", "Grupo 2", "Digital", "CNN", "CNN News",
                        "Actualidad", "Disponible", 1, 0.99, "Informe importante", "CNN Internacional");

    // Llama a la función imprimirInfo() para mostrar la información del objeto Ejemplo
    Ejemplo1.infoNoticia();
    Ejemplo1.volumenNoticia();

    Pelicula unaPelicula("Inifinity War", "Avengers", "Película", "Marvel", 120, "Acción", "Vendido", 10,
                         "Resumen de la película", "Relacionado con la película");



    return 0;
}
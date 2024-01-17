/**
 * @file MaterialAudivisual.hpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024/1/16
 * @copyright Copyright (c) 2024
 * @brief Programa principal
 */

#include <iostream>
#include "MaterialOrdenado.hpp"


/**
 * @brief Función principal para demostrar la clase MaterialOrdenado.
 * 
 * Este programa crea una instancia de la clase MaterialOrdenado, agrega varios
 * materiales (Libro, Noticia, Película, Podcast) a la biblioteca y realiza
 * operaciones como imprimir todos los materiales, eliminar un material y buscar
 * materiales por título o tipo.
 * 
 * @return 0 en caso de ejecución exitosa.
 */
int main() {
    // Crear una instancia de la clase MaterialOrdenado
    MaterialOrdenado biblioteca;

    cout << "\n--- Dando inicio al programa ---\n" << endl;
    // Agregar materiales a la biblioteca
    biblioteca.agregarMaterial(new Libro("La Sombra del Viento", "El despertar", "Libro","Carlos Ruiz Zafon",
                                        "Penguin Random House", "Ficcion", "Disponible", 500, 25.99,
                                        "Va de monos", "Tio conejo"));

    biblioteca.agregarMaterial(new Noticia("Descubrimiento Cientifico", "Ciencia", "Noticia", "Dr. Investigador",
                                        "Ciencia Magazine", "Ciencia", "Disponible", 5, 3.99,
                                        "Investigadores anuncian un importante descubrimiento en el campo de la fisica cuantica.",
                                        "Articulo relacionado sobre avances en tecnologia cuantica"));
                                   
    biblioteca.agregarMaterial(new Pelicula("Aventuras en el Espacio", "CineSpace", "Pelicula", "Director Galactico",
                                            120, "Ciencia Ficcion", "Disponible", 15.99,
                                            "Embarcate en una epica aventura espacial llena de accion y misterio.",
                                            "Otras peliculas recomendadas de ciencia ficcion"));

    biblioteca.agregarMaterial(new Podcast("Historias en la Noche", "Podcast Group", "Podcast", "Narrador Nocturno",
                                        45, "Misterio", "Disponible", 0.0,
                                        "Sumérgete en historias misteriosas narradas durante la noche.",
                                        "Episodio especial sobre sucesos paranormales"));

    // Imprimir todos los materiales en la biblioteca
    biblioteca.imprimirTodos();


    cout << "\n-- Prueba de eliminacion --" << endl;
    biblioteca.eliminarMaterial("La Sombra del Viento");

    biblioteca.imprimirTodos();


    cout << "\n-- Prueba de busqueda por titulo --" << endl;
    biblioteca.buscarPorTitulo("Historias en la Noche");

    cout << "\n-- Prueba de busqueda por tipo --" << endl;
    biblioteca.buscarPorTipo("Noticia");

    return 0;
}

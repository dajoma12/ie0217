/**
 * @file Pelicula.cpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Implementación de las funciones de la clase Pelicula.
 */

#include "Podcast.hpp"
using namespace std;


/**
 * @brief Constructor de la clase Pelicula.
 * @param titulo Título de la película.
 * @param grupo Grupo al que pertenece la película.
 * @param tipo Tipo de material (película).
 * @param autor Autor de la película.
 * @param duracion Duración de la película en minutos.
 * @param genero Género de la película.
 * @param estado Estado actual de la película (disponible, prestada, reservada, etc.).
 * @param precio Precio de la película.
 * @param resumen Resumen del contenido de la película.
 * @param relacionado Material relacionado que podría gustar.
 */
Podcast::Podcast(string titulo, string grupo, string tipo, string autor, int duracion,
            string genero, string estado, float precio, string resumen, string relacionado) 
                : MaterialAudiovisual(titulo, grupo, tipo, autor, duracion, genero, estado, precio), 
                resumen(resumen), relacionado(relacionado) {}

/**
 * @brief Método que indica si la película es corta, mediana o larga dependiendo de la duración en minutos.
 */
void Podcast::volumenPodcast() {
    if (duracion >= 0 && duracion < 30) {
        cout << "La Podcast es corta" << endl;
    } 

    else if (duracion >= 30 && duracion < 90) {
        cout << "La Podcast es mediana" << endl;
    } 
    
    else {
        cout << "La Podcast es larga" << endl;
    }
}

/**
 * @brief Método que imprime toda la información de la película.
 */
void Podcast::infoPodcast() {
    cout << "\n--- Informacion de la Podcast ---" << endl;
    imprimirInfo();
    cout << "El resumen: " << resumen << endl;
    cout << "Material relacionado: " << relacionado << endl;
}

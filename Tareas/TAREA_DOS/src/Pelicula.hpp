/**
 * @file Podcast.hpp
 * @brief Archivo que contiene los encabezados de la clase Pelicula.
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024/1/16
 */

#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "MaterialAudiovisual.hpp"

using namespace std;

/**
 * @class Pelicula
 * @brief Clase derivada de MaterialAudiovisual que representa una película.
 */
class Pelicula : public MaterialAudiovisual {
    public:
        string resumen; /**< Resumen del contenido de la película. */
        string relacionado; /**< Material relacionado que podría gustar. */
        
        
        /**
        * @brief Constructor de la clase Pelicula.
        * @param titulo Título de la película.
        * @param grupo Grupo al que pertenece la película.
        * @param tipo Tipo de material (película).
        * @param autor Director o autor de la película.
        * @param duracion Duración en minutos de la película.
        * @param genero Género de la película.
        * @param estado Estado de la película (disponible, prestado, reservado).
        * @param precio Precio de la película.
        * @param resumen Resumen del contenido de la película.
        * @param relacionado Material relacionado que podría gustar.
        */
        Pelicula(string titulo, string grupo, string tipo, string autor,
            int duracion, string genero, string estado, 
            float precio, string resumen, string relacionado);

        /**
        * @brief Método que indica el volumen de la película (corta, mediana, larga) según la duración.
        */
        void volumenPelicula();

        /**
        * @brief Método que imprime toda la información de la película.
        */        
        void infoPelicula();
        
};


#endif // PELICULA_HPP
/**
 * @file Podcast.hpp
 * @brief Archivo que contiene los encabezados de la clase Podcast.
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024/1/16
 */

#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "MaterialAudiovisual.hpp"

using namespace std;

/**
 * @class Podcast
 * @brief Clase derivada de MaterialAudiovisual que representa un podcast.
 */
class Podcast : public MaterialAudiovisual {
    public:
        string resumen; /**< Resumen del contenido del podcast. */
        string relacionado; /**< Material relacionado que podría gustar. */
        
        /**
        * @brief Constructor de la clase Podcast.
        * @param titulo Título del podcast.
        * @param grupo Grupo al que pertenece el podcast.
        * @param tipo Tipo de material (podcast).
        * @param autor Autor del podcast.
        * @param duracion Duración en minutos del podcast.
        * @param genero Género del podcast.
        * @param estado Estado del podcast (disponible, prestado, reservado).
        * @param precio Precio del podcast.
        * @param resumen Resumen del contenido del podcast.
        * @param relacionado Material relacionado que podría gustar.
        */
        Podcast(string titulo, string grupo, string tipo, string autor,
            int duracion, string genero, string estado, 
            float precio, string resumen, string relacionado);

        /**
        * @brief Método que indica el volumen del podcast (corta, mediana, larga) según la duración.
        */
        void volumenPodcast();
        
        /**
        * @brief Método que imprime toda la información del podcast.
        */
        void infoPodcast();
        
};


#endif // PODCAST_HPP
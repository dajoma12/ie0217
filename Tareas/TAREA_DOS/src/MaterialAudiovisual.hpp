/**
 * @file MaterialAudivisual.hpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024/1/16
 * @copyright Copyright (c) 2024
 * @brief Archivo que contiene los encabezados de Material Audivisual.
 */

#ifndef MATERIAL_AUDIOVISUAL_HPP
#define MATERIAL_AUDIOVISUAL_HPP

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Clase que representa un material audivisual.
 */
class MaterialAudiovisual {
    public:
    string titulo;    ///< Título del material.
    string grupo;     ///< Grupo al que pertenece el material.
    string tipo;      ///< Tipo de material (película o podcast).
    string autor;     ///< Autor o director del material.
    int duracion;     ///< Duración en minutos del material (solo para películas y podcasts).
    string genero;    ///< Género del material.
    string estado;    ///< Estado actual del material (disponible, prestado, reservado, etc.).
    float precio;     ///< Precio del material.
        

        /**
        * @brief Imprime en la consola algunos de los atributos de la clase.
        */
        void imprimirInfo();
        
        /**
        * @brief Constructor de la clase MaterialAudiovisual.
        * @param titulo Título del material.
        * @param grupo Grupo al que pertenece el material.
        * @param tipo Tipo de material (película o podcast).
        * @param autor Autor o director del material.
        * @param duracion Duración en minutos del material (solo para películas y podcasts).
        * @param genero Género del material.
        * @param estado Estado actual del material (disponible, prestado, reservado, etc.).
        * @param precio Precio del material.
        */
        
        MaterialAudiovisual(string titulo, string grupo, string tipo, string autor,
                        int duracion, string genero, string estado, float precio);        
};


#endif // MATERIAL_AUDIOVISUAL_HPP
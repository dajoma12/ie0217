/**
 * @file Noticia.hpp
 * @brief Archivo que contiene los encabezados de la clase Noticia.
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 */

#ifndef NOTICIA_HPP
#define NOTICIA_HPP

#include "MaterialLectura.hpp"

using namespace std;


/**
 * @class Noticia
 * @brief Clase derivada de MaterialLectura que representa una Notcia.
 */
class Noticia : public MaterialLectura {
    public:
        string resumen; /**< Resumen del contenido de la Noticia. */
        string relacionado; /**< Material relacionado que podría gustar. */

        /**
        * @brief Constructor de la clase Noticia.
        * @param titulo Título de la Noticia.
        * @param grupo Grupo al que pertenece la Noticia.
        * @param tipo Tipo de material (Noticia).
        * @param autor Autor de la Noticia.
        * @param editorial Editorial de la Noticia.
        * @param genero Género de la Noticia.
        * @param estado Estado de la Noticia (disponible, prestado, reservado).
        * @param hojas Cantidad de hojas de la Noticia.
        * @param precio Precio de la Noticia.
        * @param resumen Resumen de la contenido de l Noticia.
        * @param relacionado Material relacionado que podría gustar.
        */
        Noticia(string titulo, string grupo, string tipo, string autor,
            string editorial, string genero, string estado, int hojas, 
            float precio, string resumen, string relacionado);

        /**
        * @brief Método que indica si la Noticia es corta, mediana o larao dependiendo de la cantidad de hojas.
        */
        void volumenNoticia();

        /**
        * @brief Método que imprime toda la información de la Noticia.
        */
        void infoNoticia();
        
};


#endif // Noticia_HPP
/**
 * @file Libro.hpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Archivo que contiene los encabezados de la clase Libro.
 */

#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "MaterialLectura.hpp"

using namespace std;

/**
 * @class Libro
 * @brief Clase derivada de MaterialLectura que representa un libro.
 */
class Libro : public MaterialLectura {
    public:
        string resumen; /**< Resumen del contenido del libro. */
        string relacionado; /**< Material relacionado que podría gustar. */

        /**
        * @brief Constructor de la clase Libro.
        * @param titulo Título del libro.
        * @param grupo Grupo al que pertenece el libro.
        * @param tipo Tipo de material (libro).
        * @param autor Autor del libro.
        * @param editorial Editorial del libro.
        * @param genero Género del libro.
        * @param estado Estado del libro (disponible, prestado, reservado).
        * @param hojas Cantidad de hojas del libro.
        * @param precio Precio del libro.
        * @param resumen Resumen del contenido del libro.
        * @param relacionado Material relacionado que podría gustar.
        */
        Libro(string titulo, string grupo, string tipo, string autor,
            string editorial, string genero, string estado, int hojas, 
            float precio, string resumen, string relacionado);

        /**
        * @brief Método que indica si el libro es corto, mediano o largo dependiendo de la cantidad de hojas.
        */
        void volumenLibro();

        /**
        * @brief Método que imprime toda la información del libro.
        */
        void infoLibro();
        
};


#endif // LIBRO_HPP
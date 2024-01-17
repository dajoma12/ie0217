/**
 * @file MaterialLectura.hpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024/1/16
 * @brief Archivo que contiene los encabezados de Material de Lectura.
 */

#ifndef MATERIAL_LECTURA_HPP
#define MATERIAL_LECTURA_HPP

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Clase que representa un material de lectura.
 */
class MaterialLectura {
public:
    string titulo;        ///< Título del material.
    string grupo;         ///< Grupo al que pertenece el material.
    string tipo;          ///< Tipo de material.
    string autor;         ///< Autor del material.
    string editorial;     ///< Editorial del material.
    string genero;        ///< Género del material.
    string estado;        ///< Estado actual del material.
    int hojas;            ///< Cantidad de hojas del material.
    float precio;         ///< Precio del material.

    /**
     * @brief Constructor de la clase MaterialLectura.
     * @param titulo Título del material.
     * @param grupo Grupo al que pertenece el material.
     * @param tipo Tipo de material.
     * @param autor Autor del material.
     * @param editorial Editorial del material.
     * @param genero Género del material.
     * @param estado Estado actual del material.
     * @param hojas Cantidad de hojas del material.
     * @param precio Precio del material.
     */
    MaterialLectura(string titulo, string grupo, string tipo, string autor,
                    string editorial, string genero, string estado, int hojas, float precio);

    /**
     * @brief Imprime en la consola algunos de los atributos de la clase.
     */
    void imprimirInfo();
};

#endif // MATERIAL_LECTURA_HPP

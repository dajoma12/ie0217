/**
 * @file MaterialAudivisual.hpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024/1/16
 * @copyright Copyright (c) 2024
 * @brief Archivo que contiene los encabezados de Material Ordenado.
 */


#ifndef MATERIAL_ORDENADO_HPP
#define MATERIAL_ORDENADO_HPP

#include <iostream>
#include <string>
#include <vector>
#include "MaterialLectura.hpp"
#include "MaterialAudiovisual.hpp"
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"

using namespace std;

/**
 * @class MaterialOrdenado
 * @brief Clase que organiza y gestiona materiales de lectura y audiovisuales.
 */
class MaterialOrdenado {
private:
    vector<MaterialLectura*> materialesLectura; /**< Vector de punteros a materiales de lectura. */
    vector<MaterialAudiovisual*> materialesAudiovisual;  /**< Vector de punteros a materiales audiovisuales. */

public:

    /**
     * @brief Agrega un material de lectura al vector.
     * @param nuevoMaterial Puntero al nuevo material de lectura.
     */
    void agregarMaterial(MaterialLectura* nuevoMaterial);

    /**
     * @brief Agrega un material audiovisual al vector.
     * @param nuevoMaterial Puntero al nuevo material audiovisual.
     */
    void agregarMaterial(MaterialAudiovisual* nuevoMaterial);

    /**
     * @brief Elimina un material por su título.
     * @param titulo Título del material a eliminar.
     */
    void eliminarMaterial(string titulo);

    /**
     * @brief Busca un material por su título e imprime su información.
     * @param titulo Título del material a buscar.
     */
    void buscarPorTitulo(string titulo);

    /**
     * @brief Busca materiales por su tipo e imprime su información.
     * @param tipo Tipo de material a buscar.
     */
    void buscarPorTipo(string tipo);


    /**
     * @brief Imprime la información de todos los materiales en la biblioteca.
     */
    void imprimirTodos();

    /**
     * @brief Destructor que libera la memoria de los materiales.
     */
    ~MaterialOrdenado();
};


#endif // MATERIAL_ORDENADO_HPP

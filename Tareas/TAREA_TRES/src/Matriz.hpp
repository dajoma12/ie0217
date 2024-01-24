/**
 * @file Matriz.hpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Archivo que contiene los encabezados de la clase Matriz.
 */

#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <vector>

/**
 * @brief Clase que representa una matriz.
 * 
 * La clase Matriz permite la manipulación y operaciones básicas sobre matrices.
 * 
 * @tparam T Tipo de datos de los elementos de la matriz.
 */
template<typename T>
class Matriz {
public:
    /**
     * @brief Constructor de la clase Matriz.
     * @param activarComplejos Indica si se deben activar los números complejos.
     */
    Matriz(bool activarComplejos = false);

    /**
     * @brief Solicita al usuario las dimensiones de la matriz y sus elementos.
     */
    void solicitarDatos();

    /**
     * @brief Imprime la matriz en la consola.
     */
    void imprimir() const;

    std::vector<std::vector<T>> matriz; ///< Matriz bidimensional que almacena los elementos.
    int filas; ///< Número de filas de la matriz
    int columnas; ///< Número de columnas de la matriz

private:
    bool complejos; ///< Indica si se deben manejar números complejos.
    
    /**
     * @brief Solicita al usuario el número de filas y columnas de la matriz.
     */
    void solicitarDimensiones();

    /**
     * @brief Agrega elementos a la matriz solicitándolos al usuario.
     */
    void agregarElementos();

};

#include "Matriz.cpp"
#endif // MATRIZ_HPP

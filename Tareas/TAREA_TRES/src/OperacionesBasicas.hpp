/**
 * @file Matriz.hpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Archivo que contiene los encabezados de la clase OperacionesBasicas.
 */

#ifndef OPERACIONES_BASICAS_HPP
#define OPERACIONES_BASICAS_HPP

#include <iostream>
#include <vector>
#include "Matriz.hpp"
#include <limits>

/**
 * @brief Clase que realiza operaciones básicas sobre matrices.
 * 
 * La clase OperacionesBasicas proporciona funcionalidades para sumar, restar y multiplicar matrices.
 * 
 * @tparam T Tipo de datos de los elementos de la matriz.
 */
template <typename T>
class OperacionesBasicas {
public:
    /**
     * @brief Constructor de la clase OperacionesBasicas.
     * 
     * @param matriz1 Primera matriz a utilizar en las operaciones.
     * @param matriz2 Segunda matriz a utilizar en las operaciones.
     */
    OperacionesBasicas(const Matriz<T>& matriz1, const Matriz<T>& matriz2);

    /**
     * @brief Realiza la suma de las matrices y muestra el resultado.
     */
    void sumarMatrices() const;

    /**
     * @brief Realiza la resta de las matrices y muestra el resultado.
     */
    void restarMatrices() const;

    /**
     * @brief Realiza la multiplicación de las matrices y muestra el resultado.
     */
    void multiplicarMatrices() const; 

    
private:
    Matriz<T> matriz1, matriz2; ///< Matrices utilizadas en las operaciones.
    /**
     * @brief Valida si las matrices tienen dimensiones compatibles para la operación.
     * 
     * @return true si las dimensiones son compatibles, false en caso contrario.
     */
    bool validarMatriz() const;
};




#include "OperacionesBasicas.cpp"
#endif // OPERACIONES_BASICAS_HPP
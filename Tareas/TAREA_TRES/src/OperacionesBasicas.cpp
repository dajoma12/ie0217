/**
 * @file Matriz.hpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Archivo que contiene la especificaciones de las funciones de la clase Matriz.
 */
#include "OperacionesBasicas.hpp"

/**
 * @brief Constructor de la clase OperacionesBasicas.
 * @details Inicializa la clase con dos matrices proporcionadas.
 * @param matriz1 Primera matriz para operaciones.
 * @param matriz2 Segunda matriz para operaciones.
 * @tparam T Tipo de elementos de las matrices.
 */
template <typename T>
OperacionesBasicas<T>::OperacionesBasicas(const Matriz<T>& matriz1, const Matriz<T>& matriz2)
: matriz1(matriz1), matriz2(matriz2) {}

/**
 * @brief Valida si las dimensiones de las matrices son adecuadas para la operación.
 * @return true si las dimensiones son adecuadas, false en caso contrario.
 * @tparam T Tipo de elementos de las matrices.
 */
template <typename T>
bool OperacionesBasicas<T>::validarMatriz() const{
// Verificar si las dimensiones de las matrices son adecuadas para la operación
    return (matriz1.filas == matriz2.filas) && (matriz1.columnas == matriz2.columnas);
}

/**
 * @brief Realiza la suma de dos matrices.
 * @details Si las dimensiones de las matrices son adecuadas, realiza la suma y muestra el resultado.
 *          En caso contrario, muestra un mensaje de error.
 * @tparam T Tipo de elementos de las matrices.
 */
template <typename T>
void OperacionesBasicas<T>::sumarMatrices() const {
    Matriz<T> resultado;
    resultado.filas = matriz1.filas;
    resultado.columnas = matriz2.columnas;

    // Inicializar la matriz resultante con las dimensiones correctas
    resultado.matriz.resize(resultado.filas, std::vector<T>(resultado.columnas));

    // Sumar los elementos correspondientes de ambas matrices
    try {
        if(validarMatriz()){
            for (int i = 0; i < resultado.filas; ++i) {
                for (int j = 0; j < resultado.columnas; ++j) {
                    resultado.matriz[i][j] = matriz1.matriz[i][j] + matriz2.matriz[i][j];
                }
            }
            resultado.imprimir();
        }   
        else {
            throw std::runtime_error("Error: Los tamanios son diferentes!!");    
        }  

    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }
}

/**
 * @brief Realiza la resta de dos matrices.
 * @details Si las dimensiones de las matrices son adecuadas, realiza la resta y muestra el resultado.
 *          En caso contrario, muestra un mensaje de error.
 * @tparam T Tipo de elementos de las matrices.
 */
template <typename T>
void OperacionesBasicas<T>::restarMatrices() const {
    Matriz<T> resultado;
    resultado.filas = matriz1.filas;
    resultado.columnas = matriz2.columnas;

    // Inicializar la matriz resultante con las dimensiones correctas
    resultado.matriz.resize(resultado.filas, std::vector<T>(resultado.columnas));

    // restar los elementos correspondientes de ambas matrices
    try {
        if(validarMatriz()){
            for (int i = 0; i < resultado.filas; ++i) {
                for (int j = 0; j < resultado.columnas; ++j) {
                    resultado.matriz[i][j] = matriz1.matriz[i][j] - matriz2.matriz[i][j];
                }
            }
            resultado.imprimir();
        }   
        else {
            throw std::invalid_argument("Error: Los tamanios son diferentes!!");    
        }  

    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
}

/**
 * @brief Realiza la multiplicacion de dos matrices.
 * @details Si las dimensiones de las matrices son adecuadas, realiza la multiplicacion y muestra el resultado.
 *          En caso contrario, muestra un mensaje de error.
 * @tparam T Tipo de elementos de las matrices.
 */
template <typename T>
void OperacionesBasicas<T>::multiplicarMatrices() const {
    try {
        // Verificar si las dimensiones de las matrices son adecuadas para la multiplicación
        if (matriz1.columnas != matriz2.filas) {
            throw std::invalid_argument("Error: Las dimensiones de las matrices no son adecuadas para la multiplicación.");
        } else {
            // Crear una matriz resultante con las dimensiones correctas
            Matriz<T> resultado;
            resultado.filas = matriz1.filas;
            resultado.columnas = matriz2.columnas;
            resultado.matriz.resize(resultado.filas, std::vector<T>(resultado.columnas));

            // Realizar la multiplicación de matrices
            for (int i = 0; i < resultado.filas; ++i) {
                for (int j = 0; j < resultado.columnas; ++j) {
                    T producto_punto = 0;

                    // Realizar el producto punto para la posición (i, j)
                    for (int k = 0; k < matriz1.columnas; ++k) {
                        producto_punto += matriz1.matriz[i][k] * matriz2.matriz[k][j];
                    }

                    // Asignar el resultado
                    resultado.matriz[i][j] = producto_punto;
                }
            }
            resultado.imprimir();
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
}




/**
 * @file Matriz.hpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Archivo que contiene la especificaciones de las funciones de la clase Matriz.
 */

#include "Matriz.hpp"
#include <stdexcept>
#include <complex>
#include <limits>

/**
 * @brief Constructor de la clase Matriz.
 * @details Inicializa la matriz con la opción de activar números complejos.
 * @param activarComplejos Indica si se deben activar los números complejos (por defecto, false).
 * @tparam T Tipo de elementos de la matriz.
 */
template <typename T>
Matriz<T>::Matriz(bool activarComplejos){
    this->complejos = activarComplejos;
}

/**
 * @brief Solicita al usuario las dimensiones de la matriz y agrega sus elementos.
 * @tparam T Tipo de elementos de la matriz.
 */
template <typename T>
void Matriz<T>::solicitarDatos() {
    solicitarDimensiones(); /* Solicita al usuario las dimensiones de la matriz*/
    agregarElementos(); /* Solicita los elementos al valores de la matriz*/
}

/**
 * @brief Solicita al usuario el número de filas y columnas y redimensiona la matriz.
 * @tparam T Tipo de elementos de la matriz.
 */
template <typename T>
void Matriz<T>::solicitarDimensiones() {
    /* Ciclo con para levantar excepciones*/
    do {
        /* Prueba a ver si hay un error*/
        try {
            std::cout << "Ingrese el numero de filas: ";
            std::cin >> filas;
            /* Si las filas son numeros negativos o string, lanza un error*/
            if (filas <= 0 || std::cin.fail()) {
                throw std::runtime_error("Error: Numero de filas invalido!");
            }
            break; // Salir del bucle si la entrada es válida
        // Se ejecuta en caso que se en cuentre un error
        } catch (const std::runtime_error& e) {
            std::cerr << e.what() << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (true); // Cicla de nuevo en caso de error
    
    do {
        /* Prueba a ver si hay un error*/
        try {
            std::cout << "Ingrese el numero de columnas: ";
            std::cin >> columnas;
            /* Si las columas son numeros negativos o string, lanza un error*/
            if (columnas <= 0 || std::cin.fail()) {
                throw std::runtime_error("Error: Numero de columnas invalido!");
            }
            break; // Salir del bucle si la entrada es válida
        // Se ejecuta en caso que se en cuentre un error
        } catch (const std::runtime_error& e) {
            std::cerr << e.what() << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (true); // Cicla de nuevo en caso de error

    // Redimensionar la matriz
    matriz.resize(filas, std::vector<T>(columnas, 0));
}


/**
 * @brief Solicita al usuario el elemento en la posicion (i, j) de la matriz.
 * @tparam T Tipo de elementos de la matriz.
 */
template <typename T>
void Matriz<T>::agregarElementos() {
    // Doble ciclo para acceder a cada elemento de la matriz
    for (int i = 0; i < filas; ++i) {
        for (int k = 0; k < columnas; ++k) {
            while (true) {
                // Prueba a ver si encuentra un error
                try {
                    std::cout << "Ingrese el elemento de la posicion (" << i << ", " << k << "): ";
                    T elemento;
                    std::cin >> elemento;

                    if (std::cin.fail()) {
                        // Si la entrada es incorrecta (por ejemplo, una letra), lanzar una excepción
                        throw std::runtime_error("Error: Entrada inválida. Ingrese un valor numérico.");
                    }
                    // Asignar el elemento si no hubo errores
                    matriz[i][k] = elemento;
                    break;  // Salir del bucle si la entrada es válida
                } catch (const std::runtime_error& e) {
                    std::cerr << e.what() << std::endl;
                    // Limpiar el estado de error de cin
                    std::cin.clear();
                    // Descartar la entrada incorrecta
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            }
        }
    }
}

/**
 * @brief Sobrecarga específica para números complejos.
 * @details Solicita al usuario las partes real e imaginaria de los elementos complejos.
 * @tparam T Tipo de elementos de la matriz (debe ser std::complex<double>).
 */
template <>
void Matriz<std::complex<double>>::agregarElementos() {
    // Doble ciclo para acceder a cada elemento de la matriz
    for (int i = 0; i < filas; ++i) {
        for (int k = 0; k < columnas; ++k) {
            while (true) {
                // Prueba a ver si encuentra un error
                try {
                    std::cout << "Ingrese la parte real del elemento (" << i << ", " << k << "): ";
                    double realPart; /* Declara como double la parte real*/
                    std::cin >> realPart;

                    if (std::cin.fail()) {
                        // Si la entrada es incorrecta (por ejemplo, una letra), lanzar una excepción
                        throw std::runtime_error("Error: Entrada inválida. Ingrese un valor numérico para la parte real.");
                    }

                    std::cout << "Ingrese la parte imaginaria del elemento (" << i << ", " << k << "): ";
                    double imagPart; /* Declara como double la parte imaginaria*/
                    std::cin >> imagPart;

                    if (std::cin.fail()) {
                        // Si la entrada es incorrecta (por ejemplo, una letra), lanzar una excepción
                        throw std::runtime_error("Error: Entrada inválida. Ingrese un valor numérico para la parte imaginaria.");
                    }

                    // Asignar el elemento si no hubo errores
                    matriz[i][k] = std::complex<double>(realPart, imagPart);
                    break;  // Salir del bucle si la entrada es válida
                } catch (const std::runtime_error& e) {
                    std::cerr << e.what() << std::endl;
                    // Limpiar el estado de error de cin
                    std::cin.clear();
                    // Descartar la entrada incorrecta
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
            }
        }
    }
}

/**
 * @brief Imprime la matriz en la consola.
 * @tparam T Tipo de elementos de la matriz.
 */
template <typename T>
void Matriz<T>::imprimir() const {
    std::cout << "Matriz " <<filas << "x" << columnas <<":"<< std::endl;
    /* Doble ciclo para acceder a todos los elemetos e imprimirlos*/
    for (int i = 0; i < filas; ++i) {
        for (int k = 0; k < columnas; ++k) {
            std::cout << matriz[i][k] << ' ';
        }
        std::cout << std::endl;
    }
}


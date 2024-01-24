#include "Matriz.hpp"
#include <stdexcept>
#include <complex>
#include <limits>

template <typename T>
Matriz<T>::Matriz(bool activarComplejos){
    this->complejos = activarComplejos;
}

template <typename T>
void Matriz<T>::solicitarDatos() {
    solicitarDimensiones();
    agregarElementos();
}


template <typename T>
void Matriz<T>::solicitarDimensiones() {
    do {
        try {
            std::cout << "Ingrese el numero de filas: ";
            std::cin >> filas;
            if (filas <= 0 || std::cin.fail()) {
                throw std::runtime_error("Error: Numero de filas invalido!");
            }
            break; // Salir del bucle si la entrada es válida
        } catch (const std::runtime_error& e) {
            std::cerr << e.what() << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (true);
    
    do {
        try {
            std::cout << "Ingrese el numero de columnas: ";
            std::cin >> columnas;
            if (columnas <= 0 || std::cin.fail()) {
                throw std::runtime_error("Error: Numero de columnas invalido!");
            }
            break; // Salir del bucle si la entrada es válida
        } catch (const std::runtime_error& e) {
            std::cerr << e.what() << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    } while (true);

    // Redimensionar la matriz
    matriz.resize(filas, std::vector<T>(columnas, 0));
}



template <typename T>
void Matriz<T>::agregarElementos() {
    for (int i = 0; i < filas; ++i) {
        for (int k = 0; k < columnas; ++k) {
            while (true) {
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

template <>
void Matriz<std::complex<double>>::agregarElementos() {
    for (int i = 0; i < filas; ++i) {
        for (int k = 0; k < columnas; ++k) {
            while (true) {
                try {
                    std::cout << "Ingrese la parte real del elemento (" << i << ", " << k << "): ";
                    double realPart;
                    std::cin >> realPart;

                    if (std::cin.fail()) {
                        // Si la entrada es incorrecta (por ejemplo, una letra), lanzar una excepción
                        throw std::runtime_error("Error: Entrada inválida. Ingrese un valor numérico para la parte real.");
                    }

                    std::cout << "Ingrese la parte imaginaria del elemento (" << i << ", " << k << "): ";
                    double imagPart;
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

template <typename T>
void Matriz<T>::imprimir() const {
    std::cout << "Matriz " <<filas << "x" << columnas <<":"<< std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int k = 0; k < columnas; ++k) {
            std::cout << matriz[i][k] << ' ';
        }
        std::cout << std::endl;
    }
}


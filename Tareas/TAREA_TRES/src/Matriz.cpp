#include "Matriz.hpp"
#include <stdexcept>
#include <typeinfo>

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
            if (filas <= 0) {
                throw std::runtime_error("Error: Numero de filas invalido!");
            }
            break; // Salir del bucle si la entrada es válida
        } catch (const std::runtime_error& e) {
            std::cerr << e.what() << std::endl;
        }
    } while (true);
    
    do {
        try {
            std::cout << "Ingrese el numero de columnas: ";
            std::cin >> columnas;
            if (columnas <= 0) {
                throw std::runtime_error("Error: Numero de columnas invalido!");
            }
            break; // Salir del bucle si la entrada es válida
        } catch (const std::runtime_error& e) {
            std::cerr << e.what() << std::endl;
        }
    } while (true);

    // Redimensionar la matriz
    matriz.resize(filas, std::vector<T>(columnas, 0));
}

template <typename T>
void Matriz<T>::agregarElementos() {
    for (int i = 0; i < filas; ++i) {
        for (int k = 0; k < columnas; ++k) {
            std::cout << "Ingrese el elemento de la posicion (" << i << ", " << k << "): ";
            T elemento;
            std::cin >> elemento;
            matriz[i][k] = elemento;
        }
    }
}


template <typename T>
void Matriz<T>::imprimir() const {
    std::cout << "Matriz:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int k = 0; k < columnas; ++k) {
            std::cout << matriz[i][k] << ' ';
        }
        std::cout << std::endl;
    }
}


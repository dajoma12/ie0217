#include "OperacionesBasicas.hpp"

template <typename T>
OperacionesBasicas<T>::OperacionesBasicas(const Matriz<T>& matriz1, const Matriz<T>& matriz2)
: matriz1(matriz1), matriz2(matriz2) {}


template <typename T>
bool OperacionesBasicas<T>::validarMatriz() {
    int size1 = matriz1.filas * matriz1.columnas;
    int size2 = matriz2.filas * matriz2.columnas;

    if (size1 == size2) {
        std::cout << "Los tamanios coinciden!" << std::endl;
        return true;
    }

    else{
        std::cout << "Los tamanios son diferentes!" << std::endl;
        return false;
    }
}

template <typename T>
void OperacionesBasicas<T>::sumarMatrices() const {
    Matriz<T> resultado;
    resultado.filas = matriz1.filas;
    resultado.columnas = matriz2.columnas;

    // Inicializar la matriz resultante con las dimensiones correctas
    resultado.matriz.resize(resultado.filas, std::vector<T>(resultado.columnas));

    // Sumar los elementos correspondientes de ambas matrices
    for (int i = 0; i < resultado.filas; ++i) {
        for (int j = 0; j < resultado.columnas; ++j) {
            resultado.matriz[i][j] = matriz1.matriz[i][j] + matriz2.matriz[i][j];
        }
    }
    resultado.imprimir();
}

template <typename T>
void OperacionesBasicas<T>::restarMatrices() const {
    Matriz<T> resultado;
    resultado.filas = matriz1.filas;
    resultado.columnas = matriz2.columnas;

    // Inicializar la matriz resultante con las dimensiones correctas
    resultado.matriz.resize(resultado.filas, std::vector<T>(resultado.columnas));

    // Sumar los elementos correspondientes de ambas matrices
    for (int i = 0; i < resultado.filas; ++i) {
        for (int j = 0; j < resultado.columnas; ++j) {
            resultado.matriz[i][j] = matriz1.matriz[i][j] - matriz2.matriz[i][j];
        }
    }
    resultado.imprimir();
}
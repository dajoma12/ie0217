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
Matriz<T> OperacionesBasicas<T>::sumarMatrices() const {
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
    return resultado;
}



// template<typename T>
// Matriz<T> OperacionesBasicas<T>::operator-(const Matriz<T>& matriz1, const Matriz<T>& matriz2) {
//     Matriz<T> resultado;
//     resultado.filas = matriz1.filas;
//     resultado.columnas = matriz1.columnas;

//     // Inicializar la matriz resultante con las dimensiones correctas
//     resultado.matriz.resize(matriz1.filas, std::vector<T>(matriz1.columnas));

//     // Restar los elementos correspondientes de ambas matrices
//     for (int i = 0; i < matriz1.filas; ++i) {
//         for (int j = 0; j < matriz1.columnas; ++j) {
//             resultado.matriz[i][j] = matriz1.matriz[i][j] - matriz2.matriz[i][j];
//         }
//     }

//     return resultado;
// }

#include "OperacionesBasicas.hpp"

template <typename T>
OperacionesBasicas<T>::OperacionesBasicas(const Matriz<T>& matriz1, const Matriz<T>& matriz2)
: matriz1(matriz1), matriz2(matriz2) {}


template <typename T>
bool OperacionesBasicas<T>::validarMatriz() const{
    int size1 = matriz1.filas * matriz1.columnas;
    int size2 = matriz2.filas * matriz2.columnas;

    if (size1 == size2) {
        return true;
    }

    else{
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




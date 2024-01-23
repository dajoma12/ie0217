#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <vector>
// #include "OperacionesBasicas.hpp"

template<typename T>
class Matriz {

public:
    void solicitarDatos();
    void imprimir() const;
    // void validarMatriz(const Matriz<T> matriz2);

// private:
    std::vector<std::vector<T>> matriz;
    int filas;
    int columnas;
    void solicitarDimensiones();
    void agregarElementos();
    // friend class OperacionesBasicas<T>;
};

#include "Matriz.cpp"
#endif // MATRIZ_HPP

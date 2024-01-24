#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <vector>
// #include "OperacionesBasicas.hpp"

template<typename T>
class Matriz {

public:
    Matriz(bool activarComplejos = false);
    void solicitarDatos();
    void imprimir() const;
    std::vector<std::vector<T>> matriz;
    int filas; /* filas de la matriz*/
    int columnas; /* columnas de la matriz*/
    // friend class OperacionesBasicas<T>;
private:
    bool complejos;
    void solicitarDimensiones(); /* solicita el tamaño de la matriz*/
    void agregarElementos();
    // void agregarElementosComplejos();

};

#include "Matriz.cpp"
#endif // MATRIZ_HPP

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

    std::vector<std::vector<T>> matriz;
    int filas; /* filas de la matriz*/
    int columnas; /* columnas de la matriz*/
    void solicitarDimensiones(); /* solicita el tamaño de la matriz*/
    void banderaComplejos(bool complex); /* levanta una bandera para admitir complejos*/

    // friend class OperacionesBasicas<T>;
private:
    bool complejos = true;
    void agregarElementos();
    void agregarElementosComplejos();
};

#include "Matriz.cpp"
#endif // MATRIZ_HPP

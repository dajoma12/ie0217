#ifndef OPERACIONES_BASICAS_HPP
#define OPERACIONES_BASICAS_HPP

#include <iostream>
#include <vector>
#include "Matriz.hpp"

template <typename T>
class OperacionesBasicas {
public:
    // Matriz<T> operator+(const Matriz<T>& matriz2) const;
    OperacionesBasicas(const Matriz<T>& matriz1, const Matriz<T>& matriz2);
    void sumarMatrices() const;
    void restarMatrices() const;

    
private:
    Matriz<T> matriz1, matriz2;
    bool validarMatriz();
};




#include "OperacionesBasicas.cpp"
#endif // OPERACIONES_BASICAS_HPP
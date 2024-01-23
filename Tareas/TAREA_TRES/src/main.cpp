#include <iostream>
#include "Matriz.hpp"
#include "OperacionesBasicas.hpp"
#include <complex>
using namespace std;

int main() {
    Matriz<complex<double>> matriz1;
    matriz1.banderaComplejos(false);
    matriz1.solicitarDatos();
    matriz1.imprimir();

    std::cout << "\n--- Segunda Matriz ---" << std::endl;
    Matriz<complex<double>> matriz2;
    matriz2.banderaComplejos(false);
    matriz2.solicitarDatos();
    matriz2.imprimir();

    std::cout <<"\n--- probando operaciones basicas ---" << std::endl;
    OperacionesBasicas<complex<double>> operaciones(matriz1, matriz2);
    operaciones.sumarMatrices();
    // Matriz<int> resta = operaciones.restarMatrices();

    // // Imprimir la matriz resultante
    // std::cout << "\n--- Matriz suma ---" << std::endl;
    // suma.imprimir();

    // std::cout << "\n--- Matriz resta ---" << std::endl;
    // resta.imprimir();

    return 0;
}

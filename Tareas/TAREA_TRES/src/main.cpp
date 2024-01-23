#include <iostream>
#include "Matriz.hpp"
#include "OperacionesBasicas.hpp"
using namespace std;

int main() {
    Matriz<int> matriz1;
    matriz1.solicitarDatos();
    matriz1.imprimir();

    std::cout << "\n--- Segunda Matriz ---" << std::endl;
    Matriz<int> matriz2;
    matriz2.solicitarDatos();
    matriz2.imprimir();

    std::cout <<"\n--- probando operaciones basicas ---" << std::endl;
    OperacionesBasicas<int> operaciones(matriz1, matriz2);
    Matriz<int> resultado = operaciones.sumarMatrices();

    // Imprimir la matriz resultante
    std::cout << "\n--- Matriz Resultante ---" << std::endl;
    resultado.imprimir();

    return 0;
}

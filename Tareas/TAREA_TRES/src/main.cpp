#include <iostream>
#include "Matriz.hpp"
#include "OperacionesBasicas.hpp"
#include <complex>
using namespace std;

int main() {
    // Crear instancias de la clase Matriz<int>
    Matriz<int> matriz1;  // Crear una instancia de Matriz<int>
    Matriz<int> matriz2;  // Crear otra instancia de Matriz<int>

    matriz1.solicitarDatos();  // Llamar a la función miembro de la instancia matriz1
    matriz1.imprimir();        // Llamar a la función miembro de la instancia matriz1

    matriz2.solicitarDatos();  // Llamar a la función miembro de la instancia matriz2
    matriz2.imprimir();        // Llamar a la función miembro de la instancia matriz2

    // Operaciones
    OperacionesBasicas<int> operaciones(matriz1, matriz2);
    cout << "\n --- Probando operaciones basicas: suma ---" << endl;
    operaciones.sumarMatrices();
    cout << "\n --- Probando operaciones basicas: resta ---" << endl;
    operaciones.restarMatrices();
    cout << "\n --- Probando operaciones basicas: multipicacion ---" << endl;
    operaciones.multiplicarMatrices();
    return 0;
}

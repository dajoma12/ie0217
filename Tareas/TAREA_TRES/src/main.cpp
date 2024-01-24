#include <iostream>
#include "Matriz.hpp"
#include "OperacionesBasicas.hpp"
#include <complex>
using namespace std;

int main() {
    // Crear instancias de la clase Matriz<int>
    Matriz<complex<double>> matriz1;  // Crear una instancia de Matriz<int>
    Matriz<complex<double>> matriz2;  // Crear otra instancia de Matriz<int>
    matriz1.solicitarDatos();  // Llamar a la función miembro de la instancia matriz1
    matriz1.imprimir();        // Llamar a la función miembro de la instancia matriz1

    matriz2.solicitarDatos();  // Llamar a la función miembro de la instancia matriz2
    matriz2.imprimir();        // Llamar a la función miembro de la instancia matriz2

    // Declaracion de la clase operaciones basicas
    OperacionesBasicas<complex<double>> operaciones(matriz1, matriz2);
    cout << "\n --- Probando operaciones basicas: suma ---" << endl;
    operaciones.sumarMatrices(); // Llamado al metodo de sumar
    cout << "\n --- Probando operaciones basicas: resta ---" << endl;
    operaciones.restarMatrices(); // Llamado al metodo de restar
    cout << "\n --- Probando operaciones basicas: multipicacion ---" << endl;
    operaciones.multiplicarMatrices(); // Llamado al metode multiplicar
    return 0;
}

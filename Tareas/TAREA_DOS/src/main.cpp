// Autor: David Jose Madrigal Miranda
// Fecha: 2024-01-14

#include <iostream>
#include "MaterialLectura.hpp"
using namespace std;

int main() {
    MaterialLectura Ejemplo("La Sombra del Viento", "Grupo 1", "Tela","Carlos Ruiz Zafón", "Penguin Random House",
                       "Ficción", "Disponible", 500, 25.99);

    // Llama a la función imprimirInfo() para mostrar la información del objeto Ejemplo
    Ejemplo.imprimirInfo();

    return 0;
}
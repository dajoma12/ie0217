/**
 * @file main.cpp
 * @version 1.0
 * @date 08/06/2014
 * @author Dajoma12
 * @brief Programa principal para el juego de adivinanza.
 */

#include <iostream>
#include "adivina.hpp"
using namespace std;

int dificultad = 1; // Variable global para la dificultad del juego

/**
 * @brief Función principal del programa.
 * @return 0 al finalizar con éxito.
 */
int main() {
    Datos valores; // Inicialización de una estructura para almacenar datos del juego
    cout << "\n-- Bienvenido al juego de adivinanza --" << endl;

    solicitarIntervalo(valores); // Solicitar al usuario que ingrese el intervalo de valores

    while (1) {
        mostrarMenu(); // Mostrar el menú de opciones
        procesarOpcion(valores); // Procesar la opción seleccionada por el usuario
    }

    return 0;
}

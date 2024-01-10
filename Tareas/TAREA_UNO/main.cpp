#include <iostream>
#include "adivina.hpp"
using namespace std;

int dificultad = 1;

int main(){

    Datos valores; // Inicializacion de un tipo de dato de estructura
    cout << "\n-- Sea bienvenido al juego! --" <<endl; 
    
    solicitarIntervalo(valores); // Solicitar un intervalo de valores
    while(1){
        mostrarMenu(); // Mostar el menu de opciones
        procesarOpcion(valores); // Solicitar una opcion
    }

    return 0;
}
#include "adivina.hpp"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cmath>

int aleatorio(int min, int max){
    
    srand(time(NULL));

    return 1+rand()%((max+min)-min);
}

void mostrarMenu(){
    std::cout << "\n-- Menu -- \n";
    std::cout << "1. Inicio de juego\n";
    std::cout << "2. Tipo de dificultad\n";
    std::cout << "3. Intervalo de valores deseado\n"; 
    std::cout << "4. Cierre del programa\n";
}

void procesarOpcion(int numero, int min, int max){
    int opcion;
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion;

    switch (opcion){
        case 1:
            iniciarJuego(numero, min, max);
            break;
        case 2:
            cambiarDificultad();
            break;
        case 3:
            imprimirIntervalo(min, max);
            break;
        case 4: // Finalizar
            std::cout << "Cerrando el programa...\n";
            exit(0);
        default:
            std::cout << "Opcion no valida. Intente de nuevo... \n";
    }
}

void iniciarJuego(int num_Aleatorio, int min, int max){
    
    int num_Ingresado;
    int N;
    N = round((abs(max - min) + 1)/3);
    
    std::cout <<"\nIniciando juego...\n";
    
    while(1){ 

        if (N != 0){
            std::cout << "La cantidad de intentos actual es de: " 
                << N << std::endl;

            std::cout << "Ingrese un numero: ";
            std::cin >> num_Ingresado;
            
            if (num_Ingresado > num_Aleatorio){
                std::cout << "El numero es menor!" << std:: endl;
                N = N-1;
                continue;
            }

            else if (num_Ingresado < num_Aleatorio){
                std::cout << "El numero es mayor!" << std:: endl;
                N = N-1;
                continue;
            }

            else {
                std::cout << "Numero encontrado!" << std::endl;
                std::cout << "Felicidades a ganado!\n";
                std::cout << "Juego finalizado...\n";
                exit(0); 
            }
        }

        else {
            std::cout << "Ha perdido!" << std::endl;
            std::cout << "Cerrando el programa...\n";
            exit(0);
        }
    }
}

void imprimirIntervalo(int min, int max){
    std::cout << "El intervalo de su escogencia fue : [" 
        << min << ", " << max << "]" <<"\n"; 
}

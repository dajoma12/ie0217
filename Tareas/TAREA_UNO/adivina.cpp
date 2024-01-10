#include "adivina.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

void solicitarIntervalo(Datos &valores){
    std::cout << "Ingrese el valor minimo del intervalo: ";
    std::cin >> valores.min;
    std::cout << "Ingrese el valor maximo del intervalo: ";
    std::cin >> valores.max;
}

void mostrarMenu(){
    std::cout << "\n-- Menu -- \n";
    std::cout << "1. Inicio de juego\n";
    std::cout << "2. Tipo de dificultad\n";
    std::cout << "3. Intervalo de valores deseado\n"; 
    std::cout << "4. Cierre del programa\n";
}

void procesarOpcion(Datos &valores){
    int opcion;
    std::cout << "\nIngrese una opcion: ";
    std::cin >> opcion;

    switch (opcion){
        case 1:
            iniciarJuego(valores);
            break;
        case 2:
            cambiarDificultad();
            break;
        case 3:
            cambiarIntervalo(valores);
            break;
        case 4:
            std::cout << "\nCerrando el programa...\n";
            exit(0);
        default:
            std::cout << "\nOpcion no valida. Intente de nuevo... \n";
    }
}

int aleatorio(Datos valores){
    srand(time(NULL));

    int max = valores.max;
    int min = valores.min;

    return 1 + rand() % ((max + min) - min);
}


void iniciarJuego(Datos &valores){
    valores.N = round((abs(valores.max - valores.min) + 1) / 3);
    valores.aleatorio = aleatorio(valores);
    
    std::cout << "\nIniciando juego...";

    if (dificultad == 1){

        std::cout << "\n-- Primer Modo --" << std::endl;
        primerModo(valores);
    } else {
        std::cout << "\n-- Segundo Modo --" << std::endl;
        segundoModo(valores);
    }
}

void primerModo(Datos valores){
    int num_Ingresado;

    while (valores.N > 0) {
        std::cout << "La cantidad de intentos actual es de: " << valores.N << std::endl;
        std::cout << "Ingrese un numero: ";
        std::cin >> num_Ingresado;

        if (num_Ingresado > valores.aleatorio) {
            std::cout << "\nEl numero es menor!" << std::endl;
        }
        else if (num_Ingresado <valores.aleatorio) {
            std::cout << "\nEl numero es mayor!" << std::endl;
        } else {
            std::cout << "\nNumero encontrado!" << std::endl;
            std::cout << "Felicidades, has ganado!" << std::endl;
            std::cout << "Juego finalizado...\n";
            exit(0);
        }

        valores.N--;
    }

    std::cout << "Has perdido! El numero era " << valores.aleatorio << std::endl;
    std::cout << "\nCerrando el programa...\n";
    exit(0);
}


void segundoModo(Datos valores) {
    int num_Ingresado; // Inicializacion de una variable

    // Umbral
    float frio = 0.2 * (valores.max - valores.min); // Del 20%
    float caliente = 0.1 * (valores.max - valores.min); // Del 10%

    // Generar número aleatorio para la comparación
    int num_Aleatorio = aleatorio(valores);

    // Cicla de acuerdo al numero de intentos
    while (valores.N > 0) {
        std::cout << "La cantidad de intentos actual es de: " << valores.N << std::endl;
        std::cout << "Ingrese un numero: ";
        // Se guarda el dato ingresado por el usuario
        std::cin >> num_Ingresado;

        int valor = std::abs(num_Ingresado - num_Aleatorio);

        if (valor > frio) {
            std::cout << "\nFrio como el corazon de ella!" << std::endl;

        } else if (valor >= caliente && valor <= frio) {
            std::cout << "\nCaliente como el amor de mama!" << std::endl;

        } else if (valor < caliente) {

            if (num_Ingresado != num_Aleatorio) {
                std::cout << "\nQuema! quema!" << std::endl;
            } else {
                std::cout << "\nAcertado exactamente. Felicidades!" << std::endl;
                std::cout << "Juego finalizado...\n";
                exit(0);
            }

        } else {
            std::cout << "\nNumero encontrado!" << std::endl;
            std::cout << "Felicidades, has ganado!" << std::endl;
            std::cout << "Juego finalizado...\n";
            exit(0);
        }

        valores.N--;
    }

    std::cout << "Has perdido! El numero era " << num_Aleatorio << std::endl;
    std::cout << "\nCerrando el programa...\n";
    exit(0);
}

void cambiarDificultad(){
    int opcion;
    std::cout << "\nDificultad actual: ";

    if (dificultad == 1){
        std::cout << "\nNormal*\nDificil\n";
    }

    else{
        std::cout << "\n- Normal\n- Dificil*\n";
    }

    std::cout << "\nDesea cambiar a la otra?"<<std::endl;
    std::cout << "1. Si\n2. No" <<std::endl;
    std::cout << "\nIngrese la opcion para cambiar: ";
    std::cin >> opcion;

    if (opcion == 1){
        std::cout << "\nCambiando a dificil..." <<std::endl;
        dificultad = 2;
    }

    else{
        std::cout << "\nVolviendo a normal..." <<std::endl;
        dificultad = 1;
    }
}

void cambiarIntervalo(Datos &intervalo){
    int opcion;
    std::cout << "\nIntervalo actual de valores: ["
        << intervalo.min << ", " << intervalo.max<<"]" << std::endl;

    std::cout << "\nDesea cambiar el intervalo actual?" << std::endl;
    std::cout << "1. Si\n2. No" <<std::endl;
    std::cout << "\nIngrese la opcion para cambiar: ";
    std::cin >> opcion;

    if (opcion == 1){
        solicitarIntervalo(intervalo);
        std::cout << "\nAplicando cambios..." << std::endl;
    }

    else{
        std::cout << "\nSin cambios..." << std::endl;
    }
}
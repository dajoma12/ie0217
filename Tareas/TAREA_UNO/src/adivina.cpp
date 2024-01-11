/**
 * @file adivina.cpp
 * @brief Archivo principal que contiene la implementación del juego de adivinanza.
 * @version 1.0
 * @date 08/06/2014
 * @author Dajoma12
 */

#include "adivina.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

/**
 * @brief Solicita al usuario ingresar el intervalo de valores para el juego.
 * @param valores Estructura que almacena el intervalo de valores.
 */
void solicitarIntervalo(Datos &valores){
    std::cout << "Ingrese el valor minimo del intervalo: ";
    // Ingresa el valor minimo puesto por el usuario
    std::cin >> valores.min;
    std::cout << "Ingrese el valor maximo del intervalo: ";
    // Ingresa el valor maxximo puesto por el usuario
    std::cin >> valores.max;
}

/**
 * @brief Muestra un menú de opciones en la consola.
 */
void mostrarMenu(){
    std::cout << "\n-- Menu -- \n";
    std::cout << "1. Inicio de juego\n";
    std::cout << "2. Tipo de dificultad\n";
    std::cout << "3. Intervalo de valores deseado\n"; 
    std::cout << "4. Cierre del programa\n";
}

/**
 * @brief Procesa la opción ingresada por el usuario.
 * @param valores Estructura que almacena el intervalo de valores.
 */
void procesarOpcion(Datos &valores){
    int opcion; // Inicializa una variables
    std::cout << "\nIngrese una opcion: ";
    std::cin >> opcion; // Ingresa el valor dado por el usuario

    // Evalua cual caso fue el que selecciono el usuario
    switch (opcion){
        // Comienza el juego
        case 1:
            iniciarJuego(valores); 
            break;
        // Cambia la dificultad del juego
        case 2:
            cambiarDificultad(); 
            break;
        // Establece un intervalo    
        case 3:
            cambiarIntervalo(valores); 
            break;
        // Finaliza el programa
        case 4:
            std::cout << "\nCerrando el programa...\n";
            exit(0);
        default:
            std::cout << "\nOpcion no valida. Intente de nuevo... \n";
    }
}

/**
 * @brief Genera un valor aleatorio en el intervalo especificado.
 * @param valores Estructura que contiene el intervalo de valores.
 * @return Valor aleatorio generado.
 */
int aleatorio(Datos valores){
    srand(time(NULL)); // Garantiza que la secuencia sea diferente

    int max = valores.max; // Declara una variable con el valor maximo
    int min = valores.min; // Declara una variable con el valor minimo

    return 1 + rand() % ((max + min) - min); // Retorna un valor aleatorio
}

/**
 * @brief Inicia el juego, calcula el número de intentos y el valor aleatorio.
 * @param valores Estructura que contiene el intervalo de valores.
 */
void iniciarJuego(Datos &valores){
    // Calcula el numero de intentos
    valores.N = round((abs(valores.max - valores.min) + 1) / 3);
    // Calcula un valor aleatorio
    valores.aleatorio = aleatorio(valores);
    
    std::cout << "\nIniciando juego...";

    // Para cambiar la dificultad del juego con base en la variable
    // Global
    if (dificultad == 1){
        std::cout << "\n-- Primer Modo --" << std::endl;
        // Ejecuta el primer modo de juego
        primerModo(valores);
    } else {
        // Ejecuta el segundo modo de juego
        std::cout << "\n-- Segundo Modo --" << std::endl;
        segundoModo(valores);
    }
}

/**
 * @brief Inicia el primer modo de juego.
 * @param valores Estructura que contiene datos del juego.
 */
void primerModo(Datos valores){
    int num_Ingresado; // Inicializa una variable

    // Cicla para estar solicitando valores y restando intentos
    while (valores.N > 0) {
        std::cout << "La cantidad de intentos actual es de: " << valores.N << std::endl;
        std::cout << "Ingrese un numero: ";
        // Pasa por parámetro el valor ingresado por el usuario
        std::cin >> num_Ingresado;

        // Evalua si el numero ingresado es mayor que el valor aleatorio
        if (num_Ingresado > valores.aleatorio) {
            std::cout << "\nEl numero es menor!" << std::endl;
        }
        // Evalua si el numero ingresado en menor que el valor aleatorio
        else if (num_Ingresado < valores.aleatorio) {
            std::cout << "\nEl numero es mayor!" << std::endl;
        } else {
            std::cout << "\nNumero encontrado!" << std::endl;
            std::cout << "Felicidades, has ganado!" << std::endl;
            std::cout << "Juego finalizado...\n";
            exit(0);
        }

        // Resta un valor a la cantidad de intentos
        valores.N--;
    }

    // Finaliza el juego e imprime el resultado
    std::cout << "Has perdido! El numero era " << valores.aleatorio << std::endl;
    std::cout << "\nCerrando el programa...\n";
    exit(0);
}


/**
 * @brief Inicia el segundo modo de juego.
 * @param valores Estructura que contiene datos del juego.
 */
void segundoModo(Datos valores) {
    int num_Ingresado; // Inicializacion de una variable

    // Umbral
    float frio = 0.2 * (valores.max - valores.min); // Del 20%
    float caliente = 0.1 * (valores.max - valores.min); // Del 10%

    // Generar número aleatorio para la comparación
    int num_Aleatorio = aleatorio(valores);

    std::cout << num_Aleatorio << std::endl;
    // Cicla de acuerdo al numero de intentos
    while (valores.N > 0) {
        std::cout << "La cantidad de intentos actual es de: " << valores.N << std::endl;
        std::cout << "Ingrese un numero: ";
        // Se guarda el dato ingresado por el usuario
        std::cin >> num_Ingresado;

        // Calcula la diferencia para acercar mas los resultados
        int valor = std::abs(num_Ingresado - num_Aleatorio);

        // Si la diferencia esta más arriba imprime frio
        if (valor > frio) {
            std::cout << "\nFrio como el corazon de ella!" << std::endl;

        // Si la diferencia esta entre caliente y frio, es tibio
        } else if (valor >= caliente && valor <= frio) {
            std::cout << "\nCaliente como el amor de mama!" << std::endl;

        // Si la diferencia es menor, imprime caliente
        } else {
            // Dos casos a tomar en cuenta
            // 1. Si esta cerca pero no es el valor
            if (num_Ingresado != num_Aleatorio) {
                std::cout << "\nQuema! quema!" << std::endl;
            } else {
                // 2. Si es el valor, finaliza el programa
                std::cout << "\nAcertado exactamente. Felicidades!" << std::endl;
                std::cout << "Juego finalizado...\n";
                exit(0);
            }

        } 
        // Se resta valores al contador
        valores.N--;
    }

    // Sino se encontro el valor se termina el juego
    std::cout << "Has perdido! El numero era " << num_Aleatorio << std::endl;
    std::cout << "\nCerrando el programa...\n";
    exit(0);
}

/**
 * @brief Cambia la dificultad del juego.
 */
void cambiarDificultad(){
    int opcion; // Inicializa una variable
    std::cout << "\nDificultad actual: ";

    // Evalua si la dificultad esta en normal
    if (dificultad == 1){
        // Imprime una ayuda visual
        std::cout << "\nNormal*\nDificil\n";
    }

    // En caso de que este en dificil lo indica
    else{
        std::cout << "\n- Normal\n- Dificil*\n";
    }

    // Imprime en consola las opciones
    std::cout << "\nDesea cambiar a la otra?"<<std::endl;
    std::cout << "1. Si\n2. No" <<std::endl;
    // Solicita al usuario que ingrese una opcion
    std::cout << "\nIngrese la opcion para cambiar: ";
    std::cin >> opcion; // Guarda el valor ingresado

    // Caso 1. Cambia la dificultad de normal a difil
    if (opcion == 1 && dificultad == 1){
        std::cout << "\nCambiando a dificil..." <<std::endl;
        dificultad = 2;
    }

    // Caso 2. Mantiene la dificultad normal
    else if (opcion == 2 && dificultad == 1){
        std::cout << "\nVolviendo a normal..." <<std::endl;
        dificultad = 1;
    }

    // Caso 3. Cambia la dificultad a normal
    else if (opcion == 1 && dificultad == 2){
        std::cout << "\nCambiando a normal..." <<std::endl;
        dificultad = 1;
    }
    // Caso 4. Mantiene la dificiltad en dificil
    else{
        std::cout << "\nVolviendo a dificil..." <<std::endl;
        dificultad = 2;
    }
}

/**
 * @brief Cambia el intervalo de valores del juego.
 * @param intervalo Estructura que contiene el intervalo de valores.
 */
void cambiarIntervalo(Datos &intervalo){
    int opcion; // Inicializa un varuable

    // Imprime el intervalo de valores actual
    std::cout << "\nIntervalo actual de valores: ["
        << intervalo.min << ", " << intervalo.max<<"]" << std::endl;

    // Imprime un menu de opciones
    std::cout << "\nDesea cambiar el intervalo actual?" << std::endl;
    std::cout << "1. Si\n2. No" <<std::endl;
    // Solicita al usuario ingresar una opcion
    std::cout << "\nIngrese la opcion para cambiar: ";
    std::cin >> opcion; // Guarda la opcion ingresada por el usuario

    // En caso de que quiera cambiar el intervalo
    if (opcion == 1){
        solicitarIntervalo(intervalo); // Solicita nuevos valores
        std::cout << "\nAplicando cambios..." << std::endl;
    }

    // En caso contrario mantiene los que ya tqq
    else{
        std::cout << "\nSin cambios..." << std::endl;
    }
}
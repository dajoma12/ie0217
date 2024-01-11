/**
 * @file adivina.hpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-11
 * @copyright Copyright (c) 2024
 * @brief Archivo que contiene los encabezados.
 */

#ifndef ADIVINA_HPP
#define ADIVINA_HPP

// Inicializacion de una variable global
extern int dificultad; 

/**
 * @brief Algunos datos necesarios para la ejecucion del juego.
 */
struct Datos{
    int max; // Valor maximo del intervalo
    int min; // Valor minimo del intervalo
    int N; // Numero de intentos
    int aleatorio; // Numero aleatorio generado
};

/**
 * @brief Solicita al usuario ingresar el intervalo de valores para el juego.
 * @param valores Estructura que almacena el intervalo de valores.
 */
void solicitarIntervalo(Datos &valores);

/**
 * @brief Muestra un menú de opciones en la consola.
 */
void mostrarMenu();

/**
 * @brief Procesa la opción ingresada por el usuario.
 * @param valores Estructura que almacena el intervalo de valores.
 */
void procesarOpcion(Datos &valores);

/**
 * @brief Cambia la dificultad del juego.
 */
void cambiarDificultad();

/**
 * @brief Cambia el intervalo de valores del juego.
 * @param intervalo Estructura que contiene el intervalo de valores.
 */
void cambiarIntervalo(Datos &intervalo);

/**
 * @brief Inicia el juego, calcula el número de intentos y el valor aleatorio.
 * @param valores Estructura que contiene el intervalo de valores.
 */
void iniciarJuego(Datos &valores);

/**
 * @brief Genera un valor aleatorio en el intervalo especificado.
 * @param valores Estructura que contiene el intervalo de valores.
 * @return Valor aleatorio generado.
 */
int aleatorio(Datos valores);

/**
 * @brief Inicia el primer modo de juego.
 * @param valores Estructura que contiene datos del juego.
 */
void primerModo(Datos valores);

/**
 * @brief Inicia el segundo modo de juego.
 * @param valores Estructura que contiene datos del juego.
 */
void segundoModo(Datos valores);

#endif
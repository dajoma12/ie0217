#ifndef ADIVINA_HPP
#define ADIVINA_HPP

// Inicializacion de una variable global
extern int dificultad; 

// Definicion de una estructura
struct Datos{
    int max; // Valor minimo
    int min; // Valor maximo
    int N; // Intentos
    int aleatorio; // Numero aleatorio
};

// Funciones prototipo
void solicitarIntervalo(Datos &valores);
void mostrarMenu();

void procesarOpcion(Datos &valores);
void cambiarDificultad();
void cambiarIntervalo(Datos &intervalo);


void iniciarJuego(Datos &valores);
int aleatorio(Datos valores);
void primerModo(Datos valores);
void segundoModo(Datos valores);

#endif
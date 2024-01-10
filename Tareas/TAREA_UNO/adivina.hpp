#ifndef ADIVINA_HPP
#define ADIVINA_HPP

extern int dificultad; 

struct Datos{
    int max;
    int min;
    int N;
    int aleatorio;
};

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
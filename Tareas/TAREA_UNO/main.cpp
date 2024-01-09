#include <iostream>
#include "adivina.hpp"
using namespace std;

int main(int argc, char* argv[]){
    
    int minimo = stoi(argv[1]);
    int maximo = stoi(argv[2]);
    int num = aleatorio(minimo, maximo);

    while(1){
        mostrarMenu();
        procesarOpcion(num, minimo, maximo);
    }

    return 0;
}
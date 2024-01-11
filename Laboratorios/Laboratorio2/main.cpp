#include "MotoCoche.hpp"

int main(){
    MotoCoche miMotoCoche(60, 2, true);

    miMotoCoche.Coche::accelerar();
    miMotoCoche.abrirPuertas();
    miMotoCoche.usarCasco();
    return 0;
}
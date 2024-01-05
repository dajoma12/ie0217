// Mi primer codigo en c++

#include <iostream>

int main()
{
    std::cout << "Hola mundo \n";

    int var1 = 0; // Declaracion de variable con valor cero
    int var2; // Declaracion de una segunda variable

    // Uso del operador ternario, si es igual asigna un valor,
    // de lo contrario asigna el otro
    var2 = (var1 == 3)? 15: 27;

    // Mensaje de salida
    std::cout << "var2: \n" <<var2<< "";

    return 0;
}
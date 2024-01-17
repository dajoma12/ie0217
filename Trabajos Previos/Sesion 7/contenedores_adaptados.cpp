#include <iostream>
#include <stack>

using namespace std;

int main() {

    // Crea un stack de enteros
    stack<int> numbers;
    
    // Coloca elementos dentro del stack
    numbers.push(1);
    numbers.push(100);
    numbers.push(10);

    // Imprime los números
    cout << "Numbers are: ";

    // Podemos acceder al elemento obtenido de arriba y dropeado
    while (!numbers.empty()) {
        // Imprime el elemento de arriba
        cout << numbers.top() << ", ";

        // elemina un elemento de la cima de numbers
        numbers.pop();
    }

    return 0;  // Añade el retorno de la función main
}

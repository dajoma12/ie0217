#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // Inicializa un vector de tipo entero
    vector<int> numbers = {1, 100, 10, 70, 100};  // Agrega el punto y coma al final

    // Imprime el vector
    cout << "Numbers are: ";

    // Realiza un for con la dirección de numbers
    for(auto &num: numbers) {
        cout << num << ", ";
    }

    return 0;
}

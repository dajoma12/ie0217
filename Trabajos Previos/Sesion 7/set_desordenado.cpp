#include <iostream>
#include <unordered_set> // realiza un set desordenado

using namespace std;

int main() {
    // incicializa un set_desordenado de tipo entero
    unordered_set<int> numbers = {1, 100, 10, 70, 100};

    // imprime el set
    // sixtaxis for &variable : contenedor
    for (auto &num: numbers) {
        cout << num << ", ";
    }
    
    return 0;
}
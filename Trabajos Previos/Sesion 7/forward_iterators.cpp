#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> nums{1, 2, 3, 4};

    // inicializa un iterador al principio de una forward list
    forward_list<int>::iterator itr = nums.begin(); 

    while (itr != nums.end()) {
        // iterador accede al valor usando un operador de indirección
        int original_value = *itr;

        // asigna nuevo valor usando el operador de indirección
        *itr = original_value * 2;

        // forward el iterador a la siguiente posición
        ++itr; 

        // muestra el contenido de números
        for (int num : nums) {
            cout << num << ", ";
        }

        cout << endl;  // Agrega un salto de línea después de mostrar los elementos
    }

    return 0;
}

#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> nums {1, 2, 3, 4, 5};

    // Inicializa un iterador al inicio de números
    list<int>::iterator itr = nums.begin();

    cout << "Moviendo adelante" << endl;
    
    // Muestra los elementos en orden ascendente
    while (itr != nums.end()) {
        cout << *itr << ", ";

        // Mueve el iterador una posición adelante
        ++itr;
    }

    cout << endl << "Moviendo hacia atrás: " << endl;

    // Muestra los elementos en orden descendente
    while (itr != nums.begin()) {
        // Retrocede el iterador una posición hacia atrás
        --itr;

        // Verifica si el iterador ha alcanzado el final
        if (itr != nums.end()) {
            cout << *itr << ", ";
        }
    }
    
    return 0;
}

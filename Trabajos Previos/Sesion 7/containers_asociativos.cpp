#include <iostream>
#include <set> // Permite almacenas elementos en orden
/*Set es una estructura de datos que no permite elementos repetivos entre sus miembros*/

using namespace std;

int main() {
    // inicializa set como de tipo entero
    set<int> numbers = {1, 100, 10, 70, 100};

    // imprime set
    cout << "Numbers are: ";
    
    // sixtaxis for &variable : contenedor
    for (auto &num: numbers) {
        cout << num << ", ";
    }
    /*
        itera sobre cade elemento del vector numbers (en este caso)
        el & indica que que es una referencia al elemento vector
        lo que significa que accede y modifica directamente el valor
        y no una copia   
    */
    return 0;
}
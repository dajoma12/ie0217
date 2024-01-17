#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Crea un vector
    vector<int> vec {1, 2, 3, 4};

    // Crea un iterador apuntando al primero y al último de los elementos
    vector<int>::iterator itr_first = vec.begin();
    vector<int>::iterator itr_last = vec.end() - 1;

    // Muestra el vector de elementos
    cout << "Primer elemento: " << *itr_first << endl;
    cout << "Segundo elemento: " << *(itr_first + 1) << endl;

    cout << "Segundo último elemento: " << *(itr_last - 1) << endl;
    cout << "Último elemento: " << *itr_last << endl;

    return 0;
}

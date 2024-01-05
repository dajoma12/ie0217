#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main() {
    // Variable y puntero.
    Distance *ptr, d;
    ptr = &d;

    // Entrada de datos
    cout << "Enter feet: ";
    cin >> ptr->feet;
    cout << "Enter inch: ";
    cin >> ptr->inch;

    // Mostrar información
    cout << "Displaying information." << endl;
    cout << "Distance = " << ptr->feet << " feet " << ptr->inch << " inches";

    return 0;
}

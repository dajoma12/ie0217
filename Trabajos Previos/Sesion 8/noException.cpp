#include <iostream>
#include <stdxcept>

using namespace std;

int main() {
    int nuumerador, denominador, resultado;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    resultado = numerador / denominador;
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // crea un vector de tipo string con los lenguajes
    vector <string> languages = {"Python", "C++", "Java"};

    // Crea un interador a el vector string
    vector<string>::iterator itr; // 1. Esto es un puntero a cada uno de los elemntos

    // itera sobre todos los elementos
    for (itr = languages.begin(); itr != languages.end(); itr++) {
        cout << *itr << ", "; // 2. Por tanto, es valido usar *itr para acceder al contenido
    }

    /*
        realiza un for desde el primer elemento del vector
        hasta el ultimo elemento del vector
    */
    return 0;
}

/* Los iteradores solo se pueden usar para datos de tipo entero*/
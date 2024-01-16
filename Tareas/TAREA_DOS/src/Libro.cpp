#include "Libro.hpp"
using namespace std;

Libro::Libro(string titulo, string grupo, string tipo, string autor,
                string editorial, string genero, string estado, 
                int hojas, float precio, string resumen, string relacionado)
    : MaterialLectura(titulo, grupo, tipo, autor, editorial, genero, estado, hojas, precio), 
    resumen(resumen), relacionado(relacionado) {}


void Libro::volumenLibro() {
    if (hojas >= 0 && hojas < 100) {
        cout << "El libro es corto" << endl;
    } 

    else if (hojas >= 100 && hojas < 200) {
        cout << "El libro es mediano" << endl;
    } 
    
    else {
        cout << "El libro es largo" << endl;
    }
}

void Libro::infoLibro() {
    cout << "--- Informacion del libro ---" << endl;
    imprimirInfo();
    cout << "El resumen: " << resumen << endl;
    cout << "Material relacionado: " << relacionado << endl;
}
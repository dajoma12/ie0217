#include "Pelicula.hpp"
using namespace std;

Pelicula::Pelicula(string titulo, string grupo, string tipo, string autor, int duracion,
            string genero, string estado, float precio, string resumen, string relacionado) 
                : MaterialAudiovisual(titulo, grupo, tipo, autor, duracion, genero, estado, precio), 
                resumen(resumen), relacionado(relacionado) {}


void Pelicula::volumenPelicula() {
    if (duracion >= 0 && duracion < 90) {
        cout << "La Pelicula es corta" << endl;
    } 

    else if (duracion >= 90 && duracion < 150) {
        cout << "La Pelicula es mediana" << endl;
    } 
    
    else {
        cout << "La Pelicula es larga" << endl;
    }
}

void Pelicula::infoPelicula() {
    cout << "\n--- Informacion de la Pelicula ---" << endl;
    imprimirInfo();
    cout << "El resumen: " << resumen << endl;
    cout << "Material relacionado: " << relacionado << endl;
}

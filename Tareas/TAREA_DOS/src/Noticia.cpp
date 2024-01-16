#include "Noticia.hpp"
using namespace std;

Noticia::Noticia(string titulo, string grupo, string tipo, string autor,
                string editorial, string genero, string estado, 
                int hojas, float precio, string resumen, string relacionado)
                    : MaterialLectura(titulo, grupo, tipo, autor, editorial, genero, estado, hojas, precio), 
                    resumen(resumen), relacionado(relacionado) {}


void Noticia::volumenNoticia() {
    if (hojas >= 0 && hojas < 5) {
        cout << "La noticia es corta" << endl;
    } 

    else if (hojas >= 5 && hojas < 10) {
        cout << "La noticia es mediana" << endl;
    } 
    
    else {
        cout << "La noticia es larga" << endl;
    }
}

void Noticia::infoNoticia() {
    cout << "\n--- Informacion de la noticia ---" << endl;
    imprimirInfo();
    cout << "El resumen: " << resumen << endl;
    cout << "Material relacionado: " << relacionado << endl;
}

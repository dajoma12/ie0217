#include "Podcast.hpp"
using namespace std;

Podcast::Podcast(string titulo, string grupo, string tipo, string autor, int duracion,
            string genero, string estado, float precio, string resumen, string relacionado) 
                : MaterialAudiovisual(titulo, grupo, tipo, autor, duracion, genero, estado, precio), 
                resumen(resumen), relacionado(relacionado) {}


void Podcast::volumenPodcast() {
    if (duracion >= 0 && duracion < 30) {
        cout << "La Podcast es corta" << endl;
    } 

    else if (duracion >= 30 && duracion < 90) {
        cout << "La Podcast es mediana" << endl;
    } 
    
    else {
        cout << "La Podcast es larga" << endl;
    }
}

void Podcast::infoPodcast() {
    cout << "\n--- Informacion de la Podcast ---" << endl;
    imprimirInfo();
    cout << "El resumen: " << resumen << endl;
    cout << "Material relacionado: " << relacionado << endl;
}

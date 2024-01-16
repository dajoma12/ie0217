#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "MaterialAudiovisual.hpp"

using namespace std;

class Pelicula : public MaterialAudiovisual {
    public:
        string resumen;
        string relacionado;
        Pelicula(string titulo, string grupo, string tipo, string autor,
            int duracion, string genero, string estado, 
            float precio, string resumen, string relacionado);

        void volumenPelicula();
        void infoPelicula();
        
};


#endif // PELICULA_HPP
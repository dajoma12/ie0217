#ifndef NOTICIA_HPP
#define NOTICIA_HPP

#include "MaterialLectura.hpp"

using namespace std;

class Noticia : public MaterialLectura {
    public:
        string resumen;
        string relacionado;
        Noticia(string titulo, string grupo, string tipo, string autor,
            string editorial, string genero, string estado, int hojas, 
            float precio, string resumen, string relacionado);

        void volumenNoticia();
        void infoNoticia();
        
};


#endif // Noticia_HPP
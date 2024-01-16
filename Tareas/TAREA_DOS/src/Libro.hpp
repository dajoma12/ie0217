#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "MaterialLectura.hpp"

using namespace std;

class Libro : public MaterialLectura {
    public:
        string resumen;
        string relacionado;
        Libro(string titulo, string grupo, string tipo, string autor,
            string editorial, string genero, string estado, int hojas, 
            float precio, string resumen, string relacionado);

        void volumenLibro();
        void infoLibro();
        
};


#endif // LIBRO_HPP
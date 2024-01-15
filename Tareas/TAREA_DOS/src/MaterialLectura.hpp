#ifndef MATERIAL_LECTURA_HPP
#define MATERIAL_LECTURA_HPP

#include <iostream>
#include <string>
using namespace std;

class MaterialLectura {
    public:
        string titulo;
        string grupo;
        string tipo;
        string autor;
        string editorial;
        string genero;
        string estado;
        int hojas;
        float precio;

        MaterialLectura(string titulo, string grupo, string tipo, string autor,
                        string editorial, string genero, string estado, int hojas, float precio);

        void imprimirInfo();
};


#endif // MATERIAL_LECTURA_HPP
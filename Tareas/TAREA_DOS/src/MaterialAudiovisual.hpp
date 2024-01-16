#ifndef MATERIAL_AUDIOVISUAL_HPP
#define MATERIAL_AUDIOVISUAL_HPP

#include <iostream>
#include <string>
using namespace std;

class MaterialAudiovisual {
    protected:
        string titulo;
        string grupo;
        string tipo;
        string autor;
        int duracion;
        string genero;
        string estado;
        float precio;

    public:    
        void imprimirInfo();
        MaterialAudiovisual(string titulo, string grupo, string tipo, string autor,
                        int duracion, string genero, string estado, float precio);        
};


#endif // MATERIAL_AUDIOVISUAL_HPP
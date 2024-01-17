#ifndef MATERIAL_AUDIOVISUAL_HPP
#define MATERIAL_AUDIOVISUAL_HPP

#include <iostream>
#include <string>
using namespace std;

class MaterialAudiovisual {
    public:
        string titulo;
        string grupo;
        string tipo;
        string autor;
        int duracion;
        string genero;
        string estado;
        float precio;
  
        void imprimirInfo();
        MaterialAudiovisual(string titulo, string grupo, string tipo, string autor,
                        int duracion, string genero, string estado, float precio);        
};


#endif // MATERIAL_AUDIOVISUAL_HPP
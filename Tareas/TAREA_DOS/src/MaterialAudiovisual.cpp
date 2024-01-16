#include "MaterialAudiovisual.hpp"

MaterialAudiovisual::MaterialAudiovisual(string titulo, string grupo, string tipo, string autor,
                int duracion, string genero, string estado, float precio) {
    this->titulo = titulo;
    this->grupo = grupo;
    this->tipo = tipo;
    this->autor = autor;
    this->duracion = duracion;
    this->genero = genero;
    this->estado = estado;
    this->precio = precio;
}


void MaterialAudiovisual::imprimirInfo() {
    cout << "Titulo: " << titulo << endl;
    cout << "Grupo: " << grupo << endl;
    cout << "Tipo de material: " << tipo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Duracion: " << duracion << " minutos" << endl;
    cout << "Genero: " << genero << endl;
    cout << "Estado: " << estado << endl;
    cout << "Precio: " << precio << endl;
}

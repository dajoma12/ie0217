#include "MaterialLectura.hpp"

MaterialLectura::MaterialLectura(string titulo, string grupo, string tipo, string autor,
                string editorial, string genero, string estado, int hojas, float precio) {
    this->titulo = titulo;
    this->grupo = grupo;
    this->tipo = tipo;
    this->autor = autor;
    this->editorial = editorial;
    this->genero = genero;
    this->estado = estado;
    this->hojas = hojas;
    this->precio = precio;
}


void MaterialLectura::imprimirInfo() {
    cout << "Titulo: " << titulo << endl;
    cout << "Grupo: " << grupo << endl;
    cout << "Tipo de material: " << tipo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Editorial: " << editorial << endl;
    cout << "Genero: " << genero << endl;
    cout << "Estado: " << estado << endl;
    cout << "Cantidad de hojas: " << hojas << endl;
    cout << "Precio: " << precio << endl;
}

/**
 * @file MaterialLectura.cpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Funciones prototipo de Material Audiovisal.
 */

#include "MaterialLectura.hpp"

/**
 * @brief Constructor de la clase MaterialAudiovisual.
 * @param titulo Título del material.
 * @param grupo Grupo al que pertenece el material.
 * @param tipo Tipo de material.
 * @param autor Autor o director del material.
 * @param editorial Editorial del material.
 * @param genero Género del material.
 * @param estado Estado actual del material.
 * @param hojas Cantidad hojas del material.
 * @param precio Precio del material.
 */

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

/**
 * @brief Imprime en la consola algunos de los atributos de la clase.
 */

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

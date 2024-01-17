/**
 * @file MaterialAudivisual.cpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Funciones prototipo de Material Audiovisal.
 */


#include "MaterialAudiovisual.hpp"

/**
 * @brief Constructor de la clase MaterialAudiovisual.
 * @param titulo Título del material.
 * @param grupo Grupo al que pertenece el material.
 * @param tipo Tipo de material.
 * @param autor Autor o director del material.
 * @param duracion Duración en minutos del material.
 * @param genero Género del material.
 * @param estado Estado actual del material.
 * @param precio Precio del material.
 */
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

/**
 * @brief Imprime en la consola algunos de los atributos de la clase.
 */

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

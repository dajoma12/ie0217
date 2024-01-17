/**
 * @file Libro.cpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Funciones prototipo de Material Audiovisal.
 */

#include "Libro.hpp"
using namespace std;


/**
 * @brief Constructor de la clase Libro.
 * @param titulo Título del libro.
 * @param grupo Grupo al que pertenece el libro.
 * @param tipo Tipo de material (libro).
 * @param autor Autor del libro.
 * @param editorial Editorial del libro.
 * @param genero Género del libro.
 * @param estado Estado actual del libro (disponible, prestado, reservado, etc.).
 * @param hojas Cantidad de hojas del libro.
 * @param precio Precio del libro.
 * @param resumen Resumen del contenido del libro.
 * @param relacionado Material relacionado que podría gustar.
 */
Libro::Libro(string titulo, string grupo, string tipo, string autor,
                string editorial, string genero, string estado, 
                int hojas, float precio, string resumen, string relacionado)
    : MaterialLectura(titulo, grupo, tipo, autor, editorial, genero, estado, hojas, precio), 
    resumen(resumen), relacionado(relacionado) {}


/**
 * @brief Método que indica si el libro es corto, mediano o largo dependiendo de la cantidad de hojas.
 */
void Libro::volumenLibro() {
    if (hojas >= 0 && hojas < 100) {
        cout << "El libro es corto" << endl;
    } 

    else if (hojas >= 100 && hojas < 200) {
        cout << "El libro es mediano" << endl;
    } 
    
    else {
        cout << "El libro es largo" << endl;
    }
}

/**
 * @brief Método que imprime toda la información del libro.
 */
void Libro::infoLibro() {
    cout << "\n--- Informacion del libro ---" << endl;
    imprimirInfo();
    cout << "El resumen: " << resumen << endl;
    cout << "Material relacionado: " << relacionado << endl;
}
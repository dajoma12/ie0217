/**
 * @file Noticia.cpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Funciones prototipo de Material Audiovisal.
 */


#include "Noticia.hpp"
using namespace std;

/**
 * @brief Constructor de la clase Noticia.
 * @param titulo Título de la noticia.
 * @param grupo Grupo al que pertenece la noticia.
 * @param tipo Tipo de material (noticia).
 * @param autor Autor de la noticia.
 * @param editorial Editorial de la noticia.
 * @param genero Género de la noticia.
 * @param estado Estado actual de la noticia (disponible, prestada, reservada, etc.).
 * @param hojas Cantidad de hojas de la noticia.
 * @param precio Precio de la noticia.
 * @param resumen Resumen del contenido de la noticia.
 * @param relacionado Material relacionado que podría gustar.
 */

Noticia::Noticia(string titulo, string grupo, string tipo, string autor,
                string editorial, string genero, string estado, 
                int hojas, float precio, string resumen, string relacionado)
                    : MaterialLectura(titulo, grupo, tipo, autor, editorial, genero, estado, hojas, precio), 
                    resumen(resumen), relacionado(relacionado) {}

/**
 * @brief Método que indica si la noticia es corta, mediana o larga dependiendo de la cantidad de hojas.
 */
void Noticia::volumenNoticia() {
    if (hojas >= 0 && hojas < 5) {
        cout << "La noticia es corta" << endl;
    } 

    else if (hojas >= 5 && hojas < 10) {
        cout << "La noticia es mediana" << endl;
    } 
    
    else {
        cout << "La noticia es larga" << endl;
    }
}

/**
 * @brief Método que imprime toda la información de la noticia.
 */
void Noticia::infoNoticia() {
    cout << "\n--- Informacion de la noticia ---" << endl;
    imprimirInfo();
    cout << "El resumen: " << resumen << endl;
    cout << "Material relacionado: " << relacionado << endl;
}

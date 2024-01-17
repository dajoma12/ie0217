/**
 * @file MaterialOrdenado.cpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Implementación de las funciones de la clase MaterialOrdenado.
 */

#include "MaterialOrdenado.hpp"
using namespace std;


/**
 * @brief Agrega un nuevo material de lectura al vector correspondiente.
 * @param nuevoMaterial Puntero al nuevo material de lectura.
 */
void MaterialOrdenado::agregarMaterial(MaterialLectura* nuevoMaterial) {
    // agrega el valor al final de un contenedor dinamico
    materialesLectura.push_back(nuevoMaterial);
}

/**
 * @brief Agrega un nuevo material audiovisual al vector correspondiente.
 * @param nuevoMaterial Puntero al nuevo material audiovisual.
 */
void MaterialOrdenado::agregarMaterial(MaterialAudiovisual* nuevoMaterial) {
    // agrega el valor al final de un contenedor dinamico
    materialesAudiovisual.push_back(nuevoMaterial);
}

/**
 * @brief Elimina un material por su título.
 * @param titulo Título del material a eliminar.
 */
void MaterialOrdenado::eliminarMaterial(string titulo) {
    //Realiza un ciclo que recorre la memoria
    for (auto i = materialesLectura.begin(); i != materialesLectura.end(); ++i) {
        if ((*i)->titulo == titulo) {
            delete *i;
            i = materialesLectura.erase(i);
            return;
        }
    }
    //Realiza un ciclo que recorre la memoria
    for (auto i = materialesAudiovisual.begin(); i != materialesAudiovisual.end(); ++i) {
        if ((*i)->titulo == titulo) {
            delete *i;
            i = materialesAudiovisual.erase(i);
            return;
        }
    }
}

/**
 * @brief Busca y muestra la información de un material por su título.
 * @param titulo Título del material a buscar.
 */
void MaterialOrdenado::buscarPorTitulo(string titulo) {
    bool encontrado = false;

    for (auto i = materialesLectura.begin(); i != materialesLectura.end(); ++i) {
        if ((*i)->titulo == titulo) {
            (*i)->imprimirInfo();
            encontrado = true;
            return;
        }
    }

    if (!encontrado) {
        cout << "No se encontro el material en materiales lectura" << endl;
    }

    for (auto i = materialesAudiovisual.begin(); i != materialesAudiovisual.end(); ++i) {
        if ((*i)->titulo == titulo) {
            (*i)->imprimirInfo();
            encontrado = true;
            return;
        }
    }

    if (!encontrado) {
        cout << "No se encontro el material en materiales adivisuales" << endl;
    }
}

/**
 * @brief Busca y muestra la información de un material por su tipo.
 * @param tipo Tipo del material a buscar.
 */
void MaterialOrdenado::buscarPorTipo(string tipo) {
    bool encontrado = false;

    for (auto i = materialesLectura.begin(); i != materialesLectura.end(); ++i) {
        if ((*i)->tipo == tipo) {
            (*i)->imprimirInfo();
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "No se encontro el material en materiales lectura" << endl;
    }

    for (auto i = materialesAudiovisual.begin(); i != materialesAudiovisual.end(); ++i) {
        if ((*i)->tipo == tipo) {
            (*i)->imprimirInfo();
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "No se encontro el material en materiales audiovisual" << endl;
    }
}


/**
 * @brief Muestra la información de todos los materiales en la biblioteca.
 */
void MaterialOrdenado::imprimirTodos() {
    for (const auto& material : materialesLectura) {
        material->imprimirInfo();
        std::cout << std::endl;
    }

    for (const auto& material : materialesAudiovisual) {
        material->imprimirInfo();
        std::cout << std::endl;
    }
}

/**
 * @brief Destructor que libera la memoria de los materiales.
 */
MaterialOrdenado::~MaterialOrdenado() {
    for (auto& material : materialesLectura) {
        delete material;
    }

    for (auto& material : materialesAudiovisual) {
        delete material;
    }
}
#include "MaterialOrdenado.hpp"
using namespace std;



void MaterialOrdenado::agregarMaterial(MaterialLectura* nuevoMaterial) {
    // agrega el valor al final de un contenedor dinamico
    materialesLectura.push_back(nuevoMaterial);
}

void MaterialOrdenado::agregarMaterial(MaterialAudiovisual* nuevoMaterial) {
    // agrega el valor al final de un contenedor dinamico
    materialesAudiovisual.push_back(nuevoMaterial);
}


void MaterialOrdenado::eliminarMaterial(string titulo) {
    //Realiza un ciclo que recorre la memoria
    for (auto i = materialesLectura.begin(); i != materialesLectura.end(); ++i) {
        if ((*i)->titulo == titulo) {
            delete *i;
            i = materialesLectura.erase(i);
            return;
        }
    }

    for (auto i = materialesAudiovisual.begin(); i != materialesAudiovisual.end(); ++i) {
        if ((*i)->titulo == titulo) {
            delete *i;
            i = materialesAudiovisual.erase(i);
            return;
        }
    }
}

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


MaterialOrdenado::~MaterialOrdenado() {
    for (auto& material : materialesLectura) {
        delete material;
    }

    for (auto& material : materialesAudiovisual) {
        delete material;
    }
}
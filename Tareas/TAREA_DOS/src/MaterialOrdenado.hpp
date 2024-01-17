#ifndef MATERIAL_ORDENADO_HPP
#define MATERIAL_ORDENADO_HPP

#include <iostream>
#include <string>
#include <vector>
#include "MaterialLectura.hpp"
#include "MaterialAudiovisual.hpp"
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"

using namespace std;

class MaterialOrdenado {
private:
    // Crea dos vectores dinámicos diseñados para almacenar punteros a objetos
    // de ese tipo de clases especifico
    vector<MaterialLectura*> materialesLectura;
    vector<MaterialAudiovisual*> materialesAudiovisual;

public:
    void agregarMaterial(MaterialLectura* nuevoMaterial);
    void agregarMaterial(MaterialAudiovisual* nuevoMaterial);
    void eliminarMaterial(string titulo);
    void buscarPorTitulo(string titulo);
    void buscarPorTipo(string tipo);
    void imprimirTodos();

    // Limpiar la memoria
    ~MaterialOrdenado();
};


#endif // MATERIAL_ORDENADO_HPP

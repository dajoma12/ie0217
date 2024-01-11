#include "Vehiculo.hpp"

// Esta manera de hacer métodos es la misma que la de abajo
// Vehiculo::Vehiculo(int velolocidad) : velolocidad(velolocidad){}

Vehiculo::Vehiculo(int param_velocidad) {
    this->velocidad = param_velocidad;
}


void Vehiculo::accelerar() {
    cout << "Acelerando el vehiculo hasta: " << velocidad << "km/h" << endl;
}


void Vehiculo::frenar() {
    cout << "Frenando el vehiculo" << endl;
}
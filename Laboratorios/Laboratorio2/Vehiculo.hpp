#ifndef VEHICULO_HPP
#define VEHICULO_HPP

#include <iostream>
using namespace std;

class Vehiculo {
public:
    Vehiculo(int velocidad);
    void accelerar();
    void frenar();

protected:
    int velocidad;
};

#endif // VEHICULO_HPP

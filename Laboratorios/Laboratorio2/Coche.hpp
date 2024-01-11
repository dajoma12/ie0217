#ifndef COCHE_HPP
#define COCHE_HPP

#include "Vehiculo.hpp"

class Coche : public Vehiculo {
    public:
      Coche(int velolocidad, int numPuertas);
      void abrirPuertas();

      protected:
        int numPuertas;
};

#endif // COCHE_HPP

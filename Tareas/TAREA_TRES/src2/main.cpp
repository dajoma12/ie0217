#include <iostream>
#include "ExpresionesRegulares.hpp"

int main() {
    ExpresionesRegulares validador;
    
    // Caso 0
    bool esValido = validador.validarCorreo("usuario@dominio.com");
    std::cout << "Es permitido? " << std::boolalpha << esValido << std::endl;

    // Caso 1
    esValido = validador.validarCorreo(".usuario@dominio.com");
    std::cout << "Es permitido? " << std::boolalpha << esValido << std::endl;

    // Caso 2
    esValido = validador.validarCorreo("usuario@dominiocom");
    std::cout << "Es permitido? " << std::boolalpha << esValido << std::endl;

    // Caso 3
    esValido = validador.validarCorreo("usuarioaasdfasdfasdfadf@dominio.com");
    std::cout << "Es permitido? " << std::boolalpha << esValido << std::endl;

    // Caso 4
    esValido = validador.validarCorreo("usuario@dominio.o");
    std::cout << "Es permitido? " << std::boolalpha << esValido << std::endl;

    // Caso 5
    esValido = validador.validarCorreo("usuari►o@dominio.com");
    std::cout << "Es permitido? " << std::boolalpha << esValido << std::endl;

    return 0;
}
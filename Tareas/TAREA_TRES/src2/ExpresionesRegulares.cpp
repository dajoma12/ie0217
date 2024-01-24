/**
 * @file Matriz.hpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Archivo que contiene la especificaciones los encabezados de ExpresionesRegulares.
 */
 
#include "ExpresionesRegulares.hpp"

/**
 * @brief Función para validar si una dirección de correo electrónico tiene un formato correcto.
 *
 * @param correo La dirección de correo electrónico a validar.
 * @return true si la dirección es válida, false en caso contrario.
 */
bool ExpresionesRegulares::validarCorreo(const std::string& correo) {
    try {
        std::regex patronCorreo("^[a-zA-Z0-9.-]+@[a-zA-Z0-9.-]+$");

        if (std::regex_match(correo, patronCorreo)) {
            validarRestricciones(correo);
            return true;

        } else {
            // Retriccion 5:
            throw std::invalid_argument("\nEl formato del correo electronico no es valido.");
        }

    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
        return false;
    }
}

/**
 * @brief Función para validar restricciones adicionales en una dirección de correo electrónico.
 *
 * @param correo La dirección de correo electrónico a validar.
 * @throw std::invalid_argument Si alguna restricción no se cumple.
 */
void ExpresionesRegulares::validarRestricciones(const std::string& correo) {

    // Restricción 1:
    /* Revisa si la direccion de correo usa puntos o guiones al princio del nombre*/
    if (correo.front() == '.' || correo.back() == '.' || correo.front() == '-' || correo.back() == '-') {
        /* Caso contrario lanza una excepcion*/
        throw std::invalid_argument("\nEl nombre no debe comenzar ni terminar con un punto o guion.");
    }
    // Restricción 2:
    /* Revisa asi el nombre tiene una extension mayor a 15 caracteres*/
    if (correo.find('@') > 15) {
        /* Caso contrario lanza una excepcion*/
        throw std::invalid_argument("\nEl nombre no debe tener mas de 15 caracteres.");
    }
    
    // Restricción 3:
    /* Revisa si el ultimo punto esta despues de la @*/
    std::size_t arrobaPosi = correo.find('@');
    std::size_t extensionPosi = correo.find('.', arrobaPosi);
    if (extensionPosi == std::string::npos) {
        // No se encontró un punto después de la '@'
        throw std::invalid_argument("\nEl dominio debe tener al menos un punto al final.");
    }
    
    // Restricción 4:
    /* Revisa que la extension tengra entre 2 y 4 caracteres*/
    std::size_t extensionPos = correo.find_last_of('.');
    std::string extension = correo.substr(extensionPos + 1);
    if (extension.size() < 2 || extension.size() > 4) {
        /* Caso contrario lanza una excepcion*/
        throw std::invalid_argument("\nLa extension debe tener entre 2 y 4 caracteres.");
    }
}
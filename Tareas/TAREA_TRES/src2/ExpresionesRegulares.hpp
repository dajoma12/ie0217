/**
 * @file Matriz.hpp
 * @author David Madrigal Miranda
 * @version 0.1
 * @date 2024-01-16
 * @copyright Copyright (c) 2024
 * @brief Archivo que contiene la especificaciones los encabezados de ExpresionesRegulares.
 */

#ifndef EXPRESIONES_REGULARES_HPP
#define EXPRESIONES_REGULARES_HPP

#include <iostream>
#include <regex>

/**
 * @brief Clase que determina si la direccion de correo es valida o no.
 */
class ExpresionesRegulares {

public:
    /**
    * @brief Función para validar si una dirección de correo electrónico tiene un formato correcto.
    *
    * @param correo La dirección de correo electrónico a validar.
    * @return true si la dirección es válida, false en caso contrario.
    */
    bool validarCorreo(const std::string& correo);

private:
    /**
    * @brief Función para validar restricciones adicionales en una dirección de correo electrónico.
    *
    * @param correo La dirección de correo electrónico a validar.
    * @throw std::invalid_argument Si alguna restricción no se cumple.
    */
    void validarRestricciones(const std::string& correo);
};


#include "ExpresionesRegulares.cpp"
#endif // EXPRESIONES_REGULARES_HPP
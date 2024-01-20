## Universidad de Costa Rica
### IE0217 - Estructuras Abstractas de Datos y Algoritmos para Ingeniería
### Tarea 2

## Parte Teórica

### Templates:

- **1. Definicióm de Templates:** Explique el concepto de templates en C++ y proporcione un ejemplo simple.

    Los templates son una característica del lenguaje que permiten crear código genérico que puede trabajar con diferentes tipos de datos y estructuras de datos. En otras palabras, utilizar templates permite escribir funciones y clases que pueden ser usadas con distintos tipos de datos sin necesidad de escribir código específico para cada tipo.

    Un ejemplo de templates es lo siguiente:

        #include <iostream>

        template<typame T>
        T add(T num1, T num2){
            return (num1 + num2);
        }

        int main() {
            int result1;
            double resul2;
            // Llamando con parametros int
            resul1 = add<int>(2, 3)
            cout << result1 << end;

            // Llamando con parametros double
            result2 = add<double>(2.2, 3.3);
            cout << resulta2 << endl;
            
            return 0;
        }

    En el ejemplo anterior, se hace uso de templates para que con una misma función se pueda realizar una operación que normalmente requeriría sobrecarga.

- **2. Sobrecarga de Plantillas:** ¿Cómo se realiza la sobrecarga de funciones con plantillas en C++?



- **3. Plantillas de Clases:** Explique cómo se pueden utilizar plantillas en la definición de clases en C++.

    Las plantillas en la definición de clases permiten crear Clases que pueden trabajar con diferentes tipos de datos sin tener que escribir múltiples versiones de la misma clase. Esto se logra mediante la definición de una plantilla de clase, que especifica uno o más parámetros de tipo genérico.

        #include <iostream>

        // Definición de una plantilla de clase
        template <typename T>
        class MiClase {
        public:
            // Constructor que toma un parámetro de tipo T
            MiClase(T valorInicial) : dato(valorInicial) {}

            // Función miembro que trabaja con el tipo T
            void mostrarDato() {
                std::cout << "El dato es: " << dato <<
                std::endl;
            }

        private:
            T dato;  // Variable miembro de tipo T
        };

    Lo anterior es un ejemplo de como se puede implementar las plantillas en la definición de clases.

### Excepciones:

- **4. Manejo de Excepciones:** Describa los bloques **try**, **catch** y **throw** y cómo se utilizan para el manejo de excepciones en C++.

    - `try`  Contiene el código que puede lanzar una excepción.

            try {
            // Código que puede lanzar una excepción
            }

    - `catch` El bloque catch se utiliza para manejar las excepciones que han sido lanzadas en el bloque try.

            try {
                // Código que puede lanzar una excepción
            }
            catch (TipoDeExcepcion e) {
                // Código para manejar la excepción
            }

    - `throw` La instrucción throw se utiliza para lanzar una excepción explícitamente desde el código. Puede utilizarse para señalar que ha ocurrido un error o una condición excepcional.

            if (condicionError) {
            throw TipoDeExcepcion("Mensaje descriptivo");
            }

- **5. Excepciones Estándar:** Nombre al menos tres excepciones estándar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrían ser útiles.

    - `std::out_of_range`: Se lanza cuando se realiza un intento de acceso a un elemento fuera del rango válido de un contenedor, como un array o un contenedor de la STL. 
    - `std::runtime_error`: Esta excepción generalmente se utiliza para situaciones en las que ocurre un error en tiempo de ejecución y no encaja en ninguna de las categorías de excepciones más específicas.
    - `std::invalid_argument`: Se lanza cuando una función recibe un argumento que tiene un valor que no es válido para la operación que está realizando.

- **6. Política de Manejo de Excepciones:** ¿Qué es una política de manejo de exceciones y por qué es importante considerarla al diseñar software?

- **7. Noexcept:** Explica el propósito de la palabra clave **noexcept** y cómo se utiliza en C++.



### STL (Standar Template Library):

- **8. Contenedores STL:** Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.

- **9. Iterador en STL:** Explique el concepto de iteradores en STL y cómo se utilizan para acceder a elementos en contenedores.

- **10. Algoritmos STL:** Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones básicas.

- **11. Algoritmos Personalizados:** ¿Cómo podría utilizar un algoritmo personalizado con la STL?



### Expresiones Regulares:
- **12. Definición de Expresiones Regulares:** Defina qué son las expresiones regulares y proporcione un ejemplo simple.

- **13. Caracteres Especiales:** Enumere al menos tres caracteres especiales comúnmente utilizados en expresiones regulares y describa sus funciones.

- **14. Uso de Expresiones Regulares en C++:** ¿Cómo se utilizan las expresiones regulares en C++? Proporciona un ejemplo.

- **15. Validación de Patrones:** ¿Por queé las expresiones regulares son útiles para la validación de patrones en cadenas de texto?

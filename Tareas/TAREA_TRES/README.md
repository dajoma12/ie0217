## Universidad de Costa Rica
### IE0217 - Estructuras Abstractas de Datos y Algoritmos para Ingeniería
### Tarea 2

## Instrucciones de ejecucción

### Primera parte
Para poder ejecutar la `primera parte` este código, se debe estar ubicado dentro de la carpeta `src` y ejecutar lo siguiente en la terminal para crear el ejecutable.

    g++ -o tarea3.exe .\main.cpp

Una vez creado el ejecuta, basta con correrlo dentro de la carpeta.

    .\tarea3.exe

Otra de las posible formas de ejecutarlo es haciendo uso del Makefila, para ello debe estar ubicado dentro de la carpeta `TAREA_TRES`, carpeta en donde se encuentra el archivo Makefile, y ejecutar el siguiente comando en la terminal:

    Mingw32-make -f Makefile

Esto formará el archivo ejecutable, ya luego si desea ejecutarlo puede realizar el siguiente comando:

     Mingw32-make -f run

Finalmente, si desea borrar los archivos creados, solo basta con hacer un:

     Mingw32-make -f clean

Nota: Todos estos comandos deben ser siempre ejecutados desde la carpeta `TAREA_TRES` de lo contrario no servirán.

### Segunda parte
Para la `segunda parte`, por favor ingrese a la carpeta `.\src2` y ejecute desde su terminal lo siguiente:

    g++ -o regulares.exe .\main.cpp

Esto le genera un archivo ejecutable que luego bastaría con hacer lo siguiente para que se ejecute:

    .\regulares.exe


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

    La sobrecarga de plantillas permite que una función sea más genérica y aplicable a una variedad de tipos, proporcionando flexibilidad y reutilización de código. La forma de realizar esto es declarando la plantilla de función con la palabra clave `template` y los corchetes `<` y `>`. Seguido de la defincion de la funcion con el tipo genérico `T` para finalmente hacer el llamado a la función tipo deseado. Un ejemplo de lo anterior es lo siguiente:

        template <typename T>
        T sumar(T a, T b) {
            return a + b;
        }

        int main() {
            int resultadoEntero = sumar(5, 10);
            double resultadoDouble = sumar(3.5, 2.7);

            // Aquí, el compilador generará dos versiones de la función sumar, una para enteros y otra para doubles.
            // Los resultados serán 15 para resultadoEntero y 6.2 para resultadoDouble.
        }



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

    Se refiere a las decisiones y enfoques adoptados por un programador o un equipo de desarrollo para gestionar situaciones excepcionales (errores o condiciones inesperadas) en un programa.  Son importantes de considerar a la hora de diseñar software debido a que proporcionan robutez y mantenemiento del mismo.



- **7. Noexcept:** Explica el propósito de la palabra clave **noexcept** y cómo se utiliza en C++.

    El operador `noexcept` es un operador en tiempo de compilación que se utiliza para comprobar si una expresión generará una excepción [[1]](https://www.geeksforgeeks.org/noexcept-operator-in-cpp-11/).

    Sintaxis del operador noexcept

        noexcept (expresión)

    Parámetros
    expresión : Es la expresión que queremos evaluar.

    Valor de retorno
    La función no devuelve ningún valor. El resultado es verdadero si se garantiza que la expresión no generará excepciones; de lo contrario, el resultado es falso.


### STL (Standar Template Library):

- **8. Contenedores STL:** Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.

    `1. Contenedor de vector`: es un contenedor dinámico que proporciona un array de tamaño variable que puede crecer o decrecer. 

    Se utiliza cuando se necesita acceso aleatorio a los elementos y la frecuencia de inserción y eliminación de elementos no es alta.

    `2. Contenedor de array`: tiene algunas de las ventajas de vector, pero la longitud no es tan flexible [[2]](https://www.geeksforgeeks.org/noexcept-operator-in-cpp-11/). 

    Se utiliza cuando se conoce de antemano el tamaño máximo de la colección y se quiere garantizar acceso aleatorio eficiente.
    
    `3. Contenedor de deque`: permite inserciones y eliminaciones rápidas al principio y al final del contenedor [[2]](https://www.geeksforgeeks.org/noexcept-operator-in-cpp-11/).

    Se utiliza para modelar situaciones en las que los elementos deben procesarse en el orden en que llegan, como en algoritmos de búsqueda en amplitud. 

    `4. Contenedor de list`: es una lista doblemente vinculada que permite el acceso bidireccional e inserciones y eliminaciones rápidas en cualquier parte del contenedor, pero no permite tener acceso de forma aleatoria a un elemento en el contenedor [[2]](https://www.geeksforgeeks.org/noexcept-operator-in-cpp-11/). 

    Útil cuando se realizan frecuentes inserciones o eliminaciones en cualquier posición de la lista.

    `5. Contenedor de set`: es un contenedor ascendente de elementos únicos (el valor también es la clave) [[2]](https://www.geeksforgeeks.org/noexcept-operator-in-cpp-11/). 

    Útil cuando se necesita mantener una colección ordenada de elementos únicos y se realizan operaciones frecuentes de búsqueda.



- **9. Iterador en STL:** Explique el concepto de iteradores en STL y cómo se utilizan para acceder a elementos en contenedores.

    Un iterador es un objeto similar a un puntero que representa la posición de un elemento en un contenedor. Se utiliza para iterar sobre elementos en un contenedor.

    Dado que es un puntero, es necesario utilizar las siguientes funciones para acceder a los elementos que contiene:

    - `nums.begin()` apunta al primer elemento del vector, es decir, el índice 0.
    - `nums.begin() + i` apunta al elemento en el índice i.
    - `nums.end()` apunta a un elemento más allá del elemento final en el vector.


- **10. Algoritmos STL:** Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones básicas.

    Para el primer ejemplo, se utiliza `std::sort` que ordena los elementos del rango (first,last)en orden ascendente [[3]](https://cplusplus.com/reference/algorithm/sort/)
        
        #include <iostream>
        #include <vector>
        #include <algorithm>

        int main() {
            std::vector<int> numeros = {5, 2, 8, 3, 1, 4};

            // Ordenar el vector
            std::sort(numeros.begin(), numeros.end());

            // Imprimir el vector ordenado
            for (const auto& numero : numeros) {
                std::cout << numero << " ";
            }

            return 0;
        }

    Segundo ejemplo, se utiliza `std::find`que busca la primera aparación dentro de un rango establecido.

        #include <iostream>
        #include <vector>
        #include <algorithm>

        int main() {
            std::vector<int> numeros = {5, 2, 8, 3, 1, 4};
            int valorBuscado = 3;

            // Buscar el valor en el vector
            auto resultado = std::find(numeros.begin(),     
            numeros.end(), valorBuscado);

            // Verificar si se encontró el valor
            if (resultado != numeros.end()) {
                std::cout << "Se encontró el valor " << 
                valorBuscado << " en la posición " << 
                (resultado -  umeros.begin()) << std::endl;
            } else {
                std::cout << "El valor " << valorBuscado << 
                " no se encontró en el vector." << std::endl;
            }

            return 0;
        }

    Para el tercer ejemplo, se utiliza `std::accumulate`Devuelve el resultado de acumular todos los valores en el rango (first,last) [[4]](https://cplusplus.com/reference/numeric/accumulate/).

        #include <iostream>
        #include <vector>
        #include <numeric>

        int main() {
            std::vector<int> numeros = {1, 2, 3, 4, 5};

            // Calcular la suma de los elementos
            int suma = std::accumulate(numeros.begin(), 
            numeros.end(), 0);

            // Imprimir la suma
            std::cout << "La suma de los elementos es: " << 
            suma << std::endl;

            return 0;
        }


- **11. Algoritmos Personalizados:** ¿Cómo podría utilizar un algoritmo personalizado con la STL?

    Para utilizar un algoritmo personalizado con la STL (Standard Template Library) en C++, primero es necesario definir un propio predicado (una función o functor que devuelve un valor booleano) y luego usarlo con algoritmos como std::for_each, std::transform, std::remove_if, entre otros.

### Expresiones Regulares:
- **12. Definición de Expresiones Regulares:** Defina qué son las expresiones regulares y proporcione un ejemplo simple.

    Las expresiones regulares, también llamadas regex o regexp, son patrones empleados para buscar y modificar cadenas de texto de manera más versátil y eficiente. Estos patrones posibilitan la búsqueda de secuencias específicas dentro de un texto, la validación de cadenas, la realización de sustituciones y diversas operaciones adicionales.

    Un ejemplo cotidiano del uso de expresiones regulares sería la validación de un número de teléfono. Es posible utilizar expresiones para asegurarse de que el numero tiene el formato correcto


- **13. Caracteres Especiales:** Enumere al menos tres caracteres especiales comúnmente utilizados en expresiones regulares y describa sus funciones.


    `Punto (.):` El punto se corresponde con cualquier carácter, a excepción de un salto de línea. Por ejemplo, al utilizar la expresión regular "ca.", se logrará una coincidencia con palabras como "cat", "car", "cap", entre otras.

    `Asterisco ():` El asterisco indica cero o más repeticiones del elemento previo. Por ejemplo, la expresión regular "cat" coincidirá con secuencias como "ct", "cat", "caat", "caa...t", y así sucesivamente.

    `Más (+):` El símbolo de más representa al menos una repetición del elemento anterior.

- **14. Uso de Expresiones Regulares en C++:** ¿Cómo se utilizan las expresiones regulares en C++? Proporciona un ejemplo.

    En C++, normalmente se trabaja con la biblioteca `regex` para trabajar con expresiones regulares, dado que proporciona una clase que representa expresiones regulares , que son una especie de minilenguaje utilizado para realizar coincidencias de patrones dentro de cadenas [[5]](https://en.cppreference.com/w/cpp/regex).

    Un ejemplo es lo siguiente:

        #include <iostream>
        #include <regex>
        #include <string>

        int main()
        {
        const std::regex patron("(0+1+0+)");
        const std::string palabra1("00010");
        const std::string palabra2("abc00010def011110ghi");

        // ¿Coincide la palabra con el patrón?
        std::cout << std::boolalpha << std::regex_match(palabra1, patron) << std::endl;
        std::cout << std::boolalpha << std::regex_match(palabra2, patron) << std::endl;
        
        return 0;
        }
- **15. Validación de Patrones:** ¿Por qué las expresiones regulares son útiles para la validación de patrones en cadenas de texto?

    Son útiles por su flexibilidad en la busqueda de patrones, eficiencia y rapidez y por su reutilización de patrones.
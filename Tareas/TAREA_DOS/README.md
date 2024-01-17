## Universidad de Costa Rica
### IE0217 - Estructuras Abstractas de Datos y Algoritmos para Ingeniería
### Tarea 2

## Instrucciones de ejecucción

Para poder ejecutar este código se debe estar ubicado dentro de la carpeta `src` y ejecutar lo siguiente en la terminal para crear el ejecutable.

    g++ -o material.exe .\main.cpp .\Libro.cpp .\Noticia.cpp .\MaterialLectura.cpp .\MaterialAudiovisual.cpp .\Pelicula.cpp .\MaterialOrdenado.cpp .\Podcast.cpp

Una vez creado el ejecuta, basta con correrlo dentro de la carpeta.

    .\material.exe

## Parte teórica

1. **Conceptos Fundamentales:** Define qué es la programación orientada a objetos y explica sus principios fundamentales.

    La programación orientada a objetos es un modelo de programación en el que el diseño de software se organiza alrededor de datos u objetos, en vez de usar funciones y lógica [[1]](https://universidadeuropea.com/blog/programacion-orientada-objetos/).

2. **Herencia:** Explica el concepto de herencia en programación orientada a objetos y proporciona un ejemplo práctico.

    La herencia permite nuevas clases basadas de unas ya existentes a fin de reutilizar el código, generando así una jerarquía de clases dentro de una aplicación. Si una clase deriva de otra, esta hereda sus atributos y métodos y puede añadir nuevos atributos, métodos o redefinir los heredados.

    Ejemplo, suponiendo que se tiene una clase base llamada cuadrúpedos, con métodos como correr y caminar. Si además se tiene la clase perro, tiene sentido que comparta métodos con la clase cuadrúpedos, ya que un perro puede caminar y correr. Por lo tanto, es más eficiente que la clase perro herede métodos de la clase cuadrúpedos, pues esto resulta ser mejor opción que volver a programarlos. En esto radica la utilidad y eficacia de la herencia.



2. **Encapsulamiento:** ¿Qué es el encapsulamiento en OOP y por qué es importante? Proporciona ejemplos de cómo se implementa en C++.

    El encapsulamiento permite ocultar los detalles internos de una abstracción y exponer solo lo necesario a través de una interfaz clara y definida. Esto mejora la modularidad del código, facilita el mantenimiento y evita que el código externo dependa demasiado de la implementación interna, lo que favorece la flexibilidad y el cambio [[2]](https://styde.net/encapsulamiento-en-la-programacion-orientada-a-objetos/).


    Un ejemplo sería lo siguiente:

        private decimal _velocidadActual { get; set; }
        public decimal VelocidadActual 
        {
            get{
                return _velocidadActual + 2;
            }
            set{
                _velocidadActual = value;
            }
        }

    En el ejemplo anterior, hay dos propiedades, pero solo se tiene acceso a una. ¿Por qué? Este ejemplo hace referencia a un caso real: los coches suelen marcar un par de kilómetros por hora más de los reales. Por lo tanto, encapsulamos esa lógica dentro del setter, el cual está oculto para el consumidor que vería en su cuentakilómetros la velocidad con los dos kilómetros por hora extra. Por tanto, es posible decir que es encapsular es ocultar información con algún fin, ya sea porque es innecesario o porque no se desea que se sepa [[3]](https://www.netmentor.es/entrada/encapsulamiento-poo).

3. **Polimorfismo:** Describe el polimorfismo y proporciona ejemplos de polimorfismo de tipo y polimorfismo de operador en C++.

    La palabra `polimorfismo` quiere decir "muchas formas" y hace referencia a que un método o función puede adoptar distantas formas dependiendo los paramétros que se pasen.

    Ejemplo de `tipo`, si se tiene una clase animal, y existen dos clases derivadas llamadas perro y gato. Ambas subclases pertenecen al tipo animal, por lo cual se les puede tratar a ambas clases como si fueran un animal.

    Ejemplo de `operador`, si tiene una clase Número con un operador de suma (+), el polimorfismo de operador permite que se pueda sumar dos objetos de tipo Número de la misma manera en que sumarías dos números primitivos.

5. **Abstracción:** ¿Cómo se relaciona la abstracción con la programación orientada a objetos? Proporciona ejemplos de cómo aplicar la abstracción en un contexto de programación.

    La `abstracción` permite crear un modelo conceptual de un objeto o concepto y luego utilizar ese modelo para crear objetos más específicos que heredan las características y comportamientos del modelo conceptual. Esto permite reutilizar código y simplificar la creación de objetos complejos [[4]](https://www.cursosdesarrolloweb.es/blog/abstraccion-programacion-orientada-objetos).

    Ejemplo, crear una clase `abstracta` llamada "Vehicle" que tenga propiedades como "brand" y "model" y métodos como "start" y "stop". Esta clase abstracta no puede ser instanciada por sí misma, pero puede ser extendida por otras clases más específicas como "Car" o "Motorcycle", que pueden implementar los métodos y propiedades de la clase "Vehicle" de manera específica para cada tipo de vehículo [[4]](https://www.cursosdesarrolloweb.es/blog/abstraccion-programacion-orientada-objetos).

6. **Clases y Objetos:** Diferencia entre una clase y un objeto en programación orientada a objetos. Proporciona un ejemplo de cada uno.

    Una `clase` es un molde para crear objetos. Un `objeto` es una instancia de una clase. Ejemplo, si se tiene una `clase` gato, se puede crear una instancia de este llamado Esfinge, el cual es un `objeto` que hereda los mismos métodos y atributos de la clase de la cual forma parte.

7. **Métodos Virtuales:** Explica la importancia de los métodos virtuales en C++ y cómo se utilizan en la implementación de polimorfismo.

    Los `métodos virtuales` permiten que las clases base definan métodos que pueden ser redefinidos por las clases derivadas, lo que permite lograr el polimorfismo y la vinculación dinámica en tiempo de ejecución [[5]](https://baulderasec.wordpress.com/programando-2/programacion-c-por-la-practica/capitulo-xi/metodos-virtuales/).

    Es posible utilizar el polimorfismo para invocar el método virtual en tiempo de ejecución. Esto se hace a través de un puntero o referencia a la clase base que apunte a un objeto de la clase derivada. Por ejemplo [[5]](https://baulderasec.wordpress.com/programando-2/programacion-c-por-la-practica/capitulo-xi/metodos-virtuales/):

        Base* ptr = new Derivada();
        # Llama al método virtual redefinido en la clase privada
        ptr->metodoVirtual();

8. **Constructores y Destructores:** ¿Cuál es el propósito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso.

    Los constructores y destructores son funciones de miembros especiales de las clases que se utilizan para construir y destruir objetos de clase. La `construcción` puede implicar la asignación de memoria y la inicialización de objetos. La `destrucción` puede implicar la limpieza y desasignación de memoria para objetos [[6]](https://www.ibm.com/docs/es/i/7.5?topic=only-overview-constructors-destructors-c).


9. **Sobrecarga de Operadores:** Explica qué es la sobrecarga de operadores y proporciona un ejemplo de cómo se implementa en C++.

    La `sobrecarga de operadores` en C++ constituye una capacidad de la programación orientada a objetos que habilita a los programadores para especificar el comportamiento de los operadores del lenguaje al trabajar con objetos de una clase personalizada. En otras palabras, permite que operadores como +, -, *, /, y otros, sean empleados con objetos definidos por el usuario, y los resultados de estas operaciones pueden ser personalizados por el programador.

    Por ejemplo, si se realiza la operación de "hombre + mujer", el compilador no entiende a qué se está refiriendo dicha operación. Por ello, es necesario utilizar sobrecarga de operadores para que, al realizar dicha operación de tipos, el compilador entienda qué es lo que debe hacer, como devolver "un hijo".


10. **Templates:** Describe el concepto de templates en C++. ¿En qué situaciones sería útil utilizar templates?

    Una `plantilla` es una construcción que genera un tipo o función normal en tiempo de compilación en función de los argumentos que proporciona el usuario para los parámetros de la plantilla [[7]](https://learn.microsoft.com/es-es/cpp/cpp/templates-cpp?view=msvc-170).

11. ¿Qué es la memoria dinámica en C++ y cuándo se utiliza comúnmente?

    La `memoria dinámica` es un espacio de almacenamiento que se puede solicitar en tiempo de ejecución. Además de solicitar espacios de almacenamiento, también se puede liberar (en tiempo de ejecución) cuando se deje de necesitar [[?]](https://codigomaldito.blogspot.com/2006/01/memoria-dinamica-new-y-delete.html).

    Normalmente, se utiliza para almacenar grandes volúmenes de datos, cuya cantidad exacta se desconoce al implementar el programa .


12. Explique la diferencia entre new y malloc en C++. ¿Cuándo debería utilizar uno sobre el otro?

    `new` se utiliza para asignar memoria dinámicamente para un objeto, mientras que `malloc` se utiliza para asignar un bloque de memoria de tamaño específico, además devuelve un puntero void* al inicio de ese bloque.

    `new` es útil cuando se trabaja con objetos, dado que realiza la inicialización de manera automática, mientras que `malloc` se usa cuando se quiere llevar un mejor control sobre el tamaño de los bloque de memoria.

13. ¿Qué es una fuga de memoria (memory leak) y cómo puede evitarse en programas en C++?

    `Una memory leak` ocurre cuando una aplicación no libera la memoria que ya no necesita, lo que resulta en una acumulación progresiva de memoria no utilizada [[9]](https://keepcoding.io/blog/que-es-un-memory-leak-y-como-evitarlo/).

    La formas de evitarlo es realizando un seguimiento del uso de la memoria, liberando recursos correctamente, evitando ciclos de referencia y realizando pruebas exhaustivas [[9]](https://keepcoding.io/blog/que-es-un-memory-leak-y-como-evitarlo/).

14. Explique el concepto de punteros inteligentes (smart pointers) y proporcione ejemplos de su uso.

     Un `puntero inteligente` es una clase que contiene y administra un puntero a través de una técnica popular de C++ llamada "La adquisición de recursos es inicialización" (RAII). Permite a los desarrolladores no preocuparse por liberar un puntero y también permite que los punteros sean seguros para excepciones [[10]](https://www.codecademy.com/resources/docs/cpp/smart-pointers).

    Un ejemplo de uso, es cuando varios objetos necesitan compartir la propiedad del objeto Objeto y se quiere que la memoria se libere automáticamente cuando todos los objetos dejan de necesitarlo, una posible solución es usar std::shared_ptr. Este puntero inteligente realiza un seguimiento del número de referencias y libera la memoria solo cuando la última referencia se libera.

15. ¿Cuál es la diferencia entre delete y delete[] en C++? ¿En qué contexto se utilizaría cada uno?

    `delete` se utiliza para liberar la memoria ocupada por un objeto que ya no es necesario, mientras que `delete[]` se utilizaz para deshacerse del puntero de una matriz y liberar la memoria ocupada por la matriz [[11]](https://programmerbay.com/difference-between-delete-and-delete/).

    Cuantos se tiene un único objeto es necesario utilizar `delete`, y cuando se tiene un arreglo de objetos lo mejor es emplear `delete[]`.

16. ¿Qué es un algoritmo de ordenamiento y por qué son importantes en programación?

    Los `algoritmos de ordenación` son procedimientos o conjuntos de instrucciones que se utilizan para organizar un conjunto de elementos en un orden específico [[12]](https://www.swhosting.com/es/comunidad/manual/algoritmos-de-ordenacion-con-ejemplos-en-c).
    
    Estos algoritmos son ampliamente utilizados en ciencias de la computación y programación debido a su importancia para la eficiencia y optimización de procesos [[12]](https://www.swhosting.com/es/comunidad/manual/algoritmos-de-ordenacion-con-ejemplos-en-c).

17. Explique el funcionamiento del algoritmo de ordenamiento "Bubble Sort". ¿Cuál es su complejidad temporal en el peor caso?

    `El bubble sort` o `Ordenamiento de Burbuja`, compara pares de elementos adyacentes y los intercambia si están en el orden incorrecto. Repite este proceso hasta que todos los elementos estén ordenados [[?]](https://www.swhosting.com/es/comunidad/manual/algoritmos-de-ordenacion-con-ejemplos-en-c). 

     Su complejidad es O(n^2) en el peor de los casos, ya que tiene que comparar cada par de elementos en la lista.


18. Describa el algoritmo de ordenamiento "QuickSort". ¿Cuál es su ventaja principal sobre otros algoritmos de ordenamiento?

    `Quick Sort` o `Ordenamiento Rápido`, elige un elemento llamado "pivote" y divide el conjunto en dos subconjuntos, uno con elementos menores que el pivote y otro con elementos mayores. Luego, aplica el mismo proceso de forma recursiva en cada uno de los subconjuntos [[?]](https://www.swhosting.com/es/comunidad/manual/algoritmos-de-ordenacion-con-ejemplos-en-c).

    La ventaja principal de este algoritmo es que se basa en el principio de "dividir y vencer" lo que quiere decir que divide el problema en pequeños problemas y los va resolviendo hasta resolver el problema inicial.

19. ¿Cuál es la diferencia entre un algoritmo de ordenamiento estable y uno inestable? Proporcione ejemplos de cada uno.

    En un algoritmo estable, los errores implıcitos en los datos de entrada se mantienen en un nivel moderado a medida que se corre el algoritmo; mientras que si es inestable los errores irán aumentando a medida que se computa el algoritmo [[?]](https://repositorio.unican.es/xmlui/bitstream/handle/10902/26245/AlvarezNavarroAriadna-TFG-Matematicas.pdf?sequence=1#:~:text=En%20un%20algoritmo%20estable%2C%20los,que%20se%20computa%20el%20algoritmo.).

20. Hable sobre el algoritmo de ordenamiento "Merge Sort". ¿Cuál es su complejidad temporal y en qué situaciones es preferible su uso?

    `Merge Sort` o `Ordenamiento por Mezcla`, divide el conjunto de elementos en subconjuntos más pequeños, los ordena por separado y luego los fusiona para obtener un conjunto ordenado más grande. Este algoritmo utiliza una estrategia de divide y vencerás [[?]](https://www.swhosting.com/es/comunidad/manual/algoritmos-de-ordenacion-con-ejemplos-en-c).

    La complejidad temporal de Merge Sort es O(n log n) en todos los casos, ya sea en el peor, mejor o caso promedio.

    `Merge sort` resulta ser la opción más viable cuando se trabaja grandes cantidades de datos.









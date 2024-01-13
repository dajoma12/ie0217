## Universidad de Costa Rica
### IE0217 - Estructuras Abstractas de Datos y Algoritmos para Ingeniería
### Tarea 2


## Parte teórica

1. **Conceptos Fundamentales:** Define qué es la programación orientada a objetos y explica sus principios fundamentales.

    La programación orientada a objetos es un modelo de programación en el que el diseño de software se organiza alrededor de datos u objetos, en vez de usar funciones y lógica [[1]](https://universidadeuropea.com/blog/programacion-orientada-objetos/).

2. **Herencia:** Explica el concepto de herencia en programación orientada a objetos y proporciona un ejemplo práctico.

    La herencia permite nuevas clases basadas de unas ya existentes a fin de reutilizar el código, generando así una jerarquía de clases dentro de una aplicación. Si una clase deriva de otra, esta hereda sus atributos y métodos y puede añadir nuevos atributos, métodos o redefinir los heredados.

    Ejemplo, suponiendo que se tiene una clase base llamada cuadrúpedos, con métodos como correr y caminar. Si además se tiene la clase perro, tiene sentido que comparta métodos con la clase cuadrúpedos, ya que un perro puede caminar y correr. Por lo tanto, es más eficiente que la clase perro herede métodos de la clase cuadrúpedos, pues esto es resulta ser mejor que volver a programarlos. En esto radica la utilidad y eficacia de la herencia.



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

    La palabra polimorfismo quiere decir "muchas formas" y hace referencia a que un método o función puede adoptar distantas formas dependiendo los paramétros que se pasen.

    Ejemplo de tipo, si se tiene una clase animal, y existen dos clases derivadas llamadas perro y gato. Ambas subclases pertenecen al tipo animal, por lo cual se les puede tratar a ambas clases como si fueran un animal.

    Ejemplo de operador, si tiene una clase Número con un operador de suma (+), el polimorfismo de operador permite que puedas sumar dos objetos de tipo Número de la misma manera en que sumarías dos números primitivos.

5. **Abstracción:** ¿Cómo se relaciona la abstracción con la programación orientada a objetos? Proporciona ejemplos de cómo aplicar la abstracción en un contexto de programación.

    La abstracción permite crear un modelo conceptual de un objeto o concepto y luego utilizar ese modelo para crear objetos más específicos que heredan las características y comportamientos del modelo conceptual. Esto permite reutilizar código y simplificar la creación de objetos complejos [[4]](https://www.cursosdesarrolloweb.es/blog/abstraccion-programacion-orientada-objetos).

    Ejemplo, crear una clase abstracta llamada "Vehicle" que tenga propiedades como "brand" y "model" y métodos como "start" y "stop". Esta clase abstracta no puede ser instanciada por sí misma, pero puede ser extendida por otras clases más específicas como "Car" o "Motorcycle", que pueden implementar los métodos y propiedades de la clase "Vehicle" de manera específica para cada tipo de vehículo [[4]](https://www.cursosdesarrolloweb.es/blog/abstraccion-programacion-orientada-objetos).

6. **Clases y Objetos:** Diferencia entre una clase y un objeto en programación orientada a objetos. Proporciona un ejemplo de cada uno.

Una clase es un molde para crear objetos. Un objeto es una instancia de una clase. Ejemplo, si se tiene una clase gato, se puede crear una instancia de este llamado Esfinge, el cual es objeto que hereda los mismos métodos y atributos de la clase de la cual forma parte.

7. **Métodos Virtuales:** Explica la importancia de los m´etodos virtuales en C++ y cómo se utilizan en la implementaci´on de polimorfismo.

8. **Constructores y Destructores:** ¿Cuál es el propósito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso.

9. **Sobrecarga de Operadores:** Explica qué es la sobrecarga de operadores y proporciona un ejemplo de cómo se implementa en C++.

10. **Templates:** Describe el concepto de templates en C++. ¿En qué situaciones sería útil utilizar templates?

11. ¿Qué es la memoria dinámica en C++ y cuándo se utiliza comúnmente?

12. Explique la diferencia entre new y malloc en C++. ¿Cuándo debería utilizar uno sobre el otro?

13. ¿Qué es una fuga de memoria (memory leak) y cómo puede evitarse en programas en C++?

14. Explique el concepto de punteros inteligentes (smart pointers) y proporcione ejemplos de su uso.

15. ¿Cuál es la diferencia entre delete y delete[] en C++? ¿En qué contexto se utilizaría cada uno?

16. ¿Qué es un algoritmo de ordenamiento y por qué son importantes en programación?

17. Explique el funcionamiento del algoritmo de ordenamiento "Bubble Sort". ¿Cuál es su complejidad temporal en el peor caso?

18. Describa el algoritmo de ordenamiento "QuickSort". ¿Cuál es su ventaja principal sobre otros algoritmos de ordenamiento?

19. ¿Cuál es la diferencia entre un algoritmo de ordenamiento estable y uno inestable? Proporcione ejemplos de cada uno.

20. Hable sobre el algoritmo de ordenamiento "Merge Sort". ¿Cuál es su complejidad temporal y en qué situaciones es preferible su uso?









## Universidad de Costa Rica
### IE0217 - Estructuras Abstractas de Datos y Algoritmos para Ingeniería
### Tarea 1

- David José Madrigal Miranda, B94456

### Parte Teórica `C++`

**1. ¿Cuál es la principal diferencia entre C y C++?**

La principal diferencia es que C++ se caracteriza por ser un lenguaje de programación orientado a objetos, mientras que C no posee esta caracteríctica.

**2. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado. Proporcione ejemplos de situaciones en las que sería más óptimo utilizar un lenguaje compilado y otras en las que sería más adecuado un lenguaje interpretado.**

- En un lenguaje compilado, la máquina de destino traduce directamente el programa. En un lenguaje interpretado, el código fuente no es directamente traducido por la máquina de destino [[1]](https://www.freecodecamp.org/espanol/news/lenguajes-compilados-vs-interpretados/#:~:text=En%20un%20lenguaje%20compilado%2C%20la,el%20c%C3%B3digo%20y%20lo%20ejecuta.).

- Los lenguajes compilados suelen ser más rápidos que los interpretados debido a que convierten directamente el código a lenguaje máquina.

- Los lenguajes interpretados suelen ser más flexibles, y a menudo ofrecen características como escritura dinámica y tamaño de programa más pequeño. [[2]](https://www.freecodecamp.org/espanol/news/lenguajes-compilados-vs-interpretados/#:~:text=En%20un%20lenguaje%20compilado%2C%20la,el%20c%C3%B3digo%20y%20lo%20ejecuta.).


**3. ¿Qué es un linker en el contexto de un lenguaje de programación compilado? ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?**

En el contexto de un lenguaje de programación compilado, a grandes rasgos, un linker es un enlazador. Su función principal es combinar varios archivos objeto generados por el compilador en un programa ejecutable o biblioteca compartida. Es esencial dado que facilita la creación de programas complejos al unir todas las partes necesarias en un ejecutable funcional.

**4. Describa las diferencias clave entre los tipos de datos derivados y primarios en C++.**

- Los tipos de datos derivados tienen un tipo de dato primario asociado, de ahí su nombre.

- Los datos primarios almacenan valores directamente en la memoria, mientras que los datos derivados pueden almacenar valores o referencias a valores almacenados en otros lugares de la memoria.

**5. Defina qué significa inicializar y declarar una variable**

Declarar una variable significa indicarle a la computadora que existe. Dentro de una variable se puede luego guardar un valor. Inicializar una variable significa declarar una variable y guardar información en ella, todo en la misma línea de código [[4]](https://platzi.com/clases/1814-basico-javascript/26293-variables/#:~:text=Declarar%20una%20variable%20significa%20indicarle%20a%20la%20computadora%20que%20existe.&text=Dentro%20de%20una%20variable%20podemos%20luego%20guardar%20un%20valor.&text=Inicializar%20una%20variable%20significa%20declarar,la%20misma%20l%C3%ADnea%20de%20c%C3%B3digo.).

**6. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?**

En C++, dos funciones pueden tener el mismo nombre si el
número y/o tipo de argumentos pasados es `diferente`.
Estas funciones que tienen el mismo nombre pero `diferentes`
argumentos se conocen como funciones `sobrecargas`. La ventaja de esto es que el código resulta ser más `legible y es posible reutilizar código.

**7. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.**

Un puntero es una variable que almacena la dirección del memoria de un objeto. Se utilizan para asignar nuevos objetos del montón, para pasar funciones a otras funciones, para iterar sobre elementos en matrices u otras estructuras de datos ...etc. [[5]](https://learn.microsoft.com/es-es/cpp/cpp/pointers-cpp?view=msvc-170)

**8. ¿Una variable global almacena el valor original de una operación en una función o una copia? Explique su respuesta. Explique por qué se elige usar variables globales en lugar de locales en ciertos contextos.**

La variable global almacena el valor original de la operación en una función y no en una copia. Esto debido a que cuando se utiliza una variable global la función tiene acceso directo y manipula directamente la variable. Cualquier cambio que haga la función a la variable afecta directamente a la variable original que se encuentra fuera. 

En algunas situaciones es preferible utilizar variables globales debido a que estás exiten fuera del ambiente local de una función por lo que cualquiera puede accesar a su información sin tener que estar declarando la misma dentro de su entorno.


**9. Investigue y explique tres métodos comunes de la biblioteca string en C++.**

- `.find()` se usa para llevar a cabo la busqueda de carácteres o subcadenas dentro del objeto de tipo string creado.

- `.substr()` permite obtener una subcadena a partir de una cadena principal.

- `.size()` se utiliza para obtener el tamaño de la cadena, es decir, el número de caracteres que contiene.


**10. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?**

La principal diferencia es que el bucle `while` se ejecuta siempre y cuando se cumpla la condición de validación para acceder al cuerpo del ciclo. En el caso del bucle `do-while`, el bucle se ejecuta al menos una vez sin importar si se cumple o no la condición.

**11. ¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y públicos dentro de una estructura? Explique su respuesta.**


**12. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.**

Resulta útil para tener un código más ordenado y mejor estructurado. El proposito de cada tipo de archivo es el siguiente:

- `.hpp` Contienen las declaraciones de clases, estructuras, funciones y variables.
- `.cpp` Contienen las implementaciones detalladas de las funciones y métodos declarados en los archivos .hpp. Aquí es donde se escribe el código real que realiza las operaciones definidas en la interfaz.
- `main.cpp` Contiene la función principal main() que se ejecuta cuando el programa inicia. Es el punto de entrada del programa.

**13. Defina qué es el Type Casting en C++ y explique su utilidad. Proporcione ejemplos de situaciones en las que se emplea el Type Casting y cómo se realiza.**

El "Type Casting" en C++ se refiere a la conversión de un tipo de dato a otro. Puede ser necesario cuando se trabaja con variables de diferentes tipos y se necesita realizar operaciones entre ellas o asignar valores de un tipo a otro.

~~~
int entero = 5;
double decimal = entero;  // De int a double
~~~

**14. ¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto.**

La instrucción goto transfiere incondicionalmente el control a la instrucción etiquetada por el identificador especificado [6](https://learn.microsoft.com/es-es/cpp/cpp/goto-statement-cpp?view=msvc-170). 

El uso excesivo de `goto` puede hacer que el código sea difícil de entender y mantener, aumenta la probabilidad de errores, rompe la programación estructurada... etc.

Ejemplos de alternativas es utilizar `break` en ciclos cuando se desea salir de este, o volver a ciclar con `continue`. En el caso de funciones, es recomendable utilizar la alternativa `return`.


**15. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.**

El lugar donde se almacenan depende del tipo de variable y su declaración. En general, hay dos tipos de opciones de almacenamiento, la pila y el heap. 

Las variables locales se almacenan en la pila, que es una región de memoria que se organiza de manera eficiente para gestionar las funciones y sus variables locales. Mientras que las globales se almacenan en una región de datos globales, pero su contenido se guarda en el heap que es una región de memoria menos estructurada y más flexible, pero también es responsabilidad del programador liberar la memoria cuando ya no se necesita.

**16. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?**

Al pasar parámetros por valor, el programa recibe una copia del valor del argumento. Al ser por referencia, recibe una referencia al valor original. Por último, al pasar por puntero, recibe la dirección de memoria del valor original a través de un puntero.

**17. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.**

Cuando se usa un puntero para apuntar a un arreglo en C++, el puntero apunta inicialmente a la dirección de memoria del primer elemento del arreglo. En otras palabras, el valor del puntero es la dirección de memoria del primer elemento del arreglo.

Para acceder a todos elementos de un arreglo se puede utilizar la aritmétrica de punteros. La forma de hacerlo es declarando un puntero que a punte a la primera dirección del arreglo y luego, mediante un ciclo, se aumenta el puntero para ir recorriendo todas las direcciones.

**18. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.**

Los punteros dobles en C++ son utilizados para manejar la dirección de memoria de otro puntero, que a su vez apunta a otra dirección de memoria que contiene el valor deseado. En el caso del manejo de memoria dinámica, resulta ser mayoritariamente eficiente utilizar punteros dobles.


**19. ¿Cuál es la diferencia entre un break y un continue en los bucles de C++?**

La instrucción break : termina la instrucción de iteración contenedora más próxima o la instrucción switch . La instrucción continue : inicia una nueva iteración de la instrucción de iteración contenedora más próxima [7](https://learn.microsoft.com/es-es/dotnet/csharp/language-reference/statements/jump-statements).

**20. ¿Para qué se utiliza la directiva #ifndef?**

Se utiliza para comprobar sino se ha definido un macro. Su acrónimo se puede traducir como "Si no esta definido".

**21. ¿Qué es el puntero this en C++?**

El puntero `this` es una variable predefinida para todas las funciones u operadores miembro de una clase. Este puntero contiene la dirección del objeto concreto de la clase al que se está aplicando la función o el operador miembro. Se puede decir que *this es un alias del objeto correspondiente [8](https://ccia.ugr.es/~jfv/ed1/c++/cdrom3/TIC-CD/web/tema23/teoria_1.htm).  

**22. ¿Qué es un puntero nullptr?**

Representa un valor de puntero nulo. Se usa un valor para indicar que un tipo de identificador de objeto, puntero interior o puntero nativo no apunta a un objeto. [9](https://learn.microsoft.com/es-es/cpp/extensions/nullptr-cpp-component-extensions?view=msvc-170)

**23. ¿Cuál es la diferencia entre un arreglo y una lista en C++?**

Los arreglos son estructuras de datos estáticas, ya que hay que declarar su tamaño antes de utilizarlos. A diferencia de los arreglos, las listas son estructuras de datos que pueden ir creciendo conforme se vaya requiriendo, por eso se considera que es una estructura de datos dinámica [10](https://www.google.com/search?q=diferencia+entre+un+arreglo+y+una+lista+en+C%2B%2B&rlz=1C1SQJL_esCR904CR904&oq=diferencia+entre+un+arreglo+y+una+lista+en+C%2B%2B&gs_lcrp=EgZjaHJvbWUyBggAEEUYOTIKCAEQABiABBiiBDIKCAIQABiABBiiBNIBCDg1NzZqMGo0qAIAsAIA&sourceid=chrome&ie=UTF-8). 

**24. ¿Qué es una función prototipo?**

Es una declaración de función que sirve para indicar al compilador los tipos de retorno y los de los parámetros de una función, de modo que compruebe si son del tipo correcto cada vez que se use esta función dentro del programa, o para hacer las conversiones de tipo cuando sea necesario [11](https://aprendiendoarduino.wordpress.com/tag/prototipos-de-funciones/).

**25. ¿Investigue qué es un memory leak?**

Una memory leak ocurre cuando una aplicación no libera la memoria que ya no necesita, lo que resulta en una acumulación progresiva de memoria no utilizada [12](https://keepcoding.io/blog/que-es-un-memory-leak-y-como-evitarlo/).


## Parte Automatización - Makefile
### Parte Teórica

**1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?**


**2. ¿De qué se compone una regla en un Makefile?**

**3. Defina qué es un target y cómo se relaciona con sus prerequisitos.**

**4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?**

**5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?**

**6. ¿Qué utilidad tiene un @ en un Makefile?**

**7. ¿Para qué se utiliza .PHONY en un Makefile?**


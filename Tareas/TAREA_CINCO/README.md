## Universidad de Costa Rica
### IE0217 - Estructuras Abstractas de Datos y Algoritmos para Ingeniería
### Tarea 5

## Instrucciones de ejecucción
Para poder ejecutar la primera parte de este código se debe estar ubicado dentro de la carpeta `.\src` y ejecutar lo siguiente en la terminal:

    py ManejoArchivos.py

Otra de las posible formas de ejecutarlo es haciendo uso del Makefile, para ello debe estar ubicado dentro de la carpeta `TAREA_CINCO`, carpeta en donde se encuentra el archivo Makefile, y ejecutar el siguiente comando en la terminal:

    make

Esto compilara completamente el programa sin necesidad de buscar los ejecutables. `

Nota: Los comandos del `Makefile` deben ser siempre ejecutados desde la carpeta `TAREA_CINCO` de lo contrario no servirán.

Ahora, con respecto a la segunda parte no se logro hacer que los dos programas se ejecutara en simultaneo por lo que se solicita estar ubicado dentro de las carpeta `.\src`
y realizar un:

    py Estudiantes.py

## Breve introducción a los programas

Para comenzar el archivo `csv` utilizado para la primera parte de esta tarea fue obtenido de la pagina:

    https://www.transtats.bts.gov/DL_SelectFields.aspx?gnoyr_VQ=FJE&QO_fu146_anzr=Nv4%20Pn44vr45

Aclarado lo anterior, la `primera parte` corresponde al código para imprimir datos relevantes del archivo .csv, así como gráficas del mismo. Se espera que cuando se ejecute con make, el usuario pueda visualizar por la terminal los datos que se investigaron, así como un par de gráficos.

La `segunda parte` del código corresponde al análisis de un conjunto de datos utilizando la librería numpy de Python. En el código fuente `Estudiantes.py`, se encuentran unos arrays por los cuales se le pasan los títulos de las materias como columnas y los datos respectivos a cada uno mediante una matriz, donde las filas corresponden a la nota de cada estudiante en cada área (o materia).

## Parte teórica

### Iteradores
1. ¿Qué es un iterador en Python y cuál es su propósito?

    In iterador es un patrón de diseño de comportamiento que permite el recorrido secuencial por una estructura de datos compleja sin exponer sus detalles internos [[1]](https://refactoring.guru/es/design-patterns/iterator/python/example).


2. Explica la diferencia entre un iterable y un iterador.

    `Iterable` se le dice al objeto el cuál se puede iterar, mientras que `Iterador` se le dice al objeto que se utiliza para iterar sobre un iterador. Además, un iterador es un objeto que implementa el método `__next__`, mientras que un iterable es un objeto que implementa el método `__iter__` [[2]](https://recursospython.com/guias-y-manuales/iteradores-iterables-y-la-funcion-next/#:~:text=As%C3%AD%2C%20para%20dar%20una%20primera,bajo%20son%20conocidos%20como%20m%C3%A9todos)

### Excepciones

1. Define qué es una excepción en Python.

    Las excepciones se tratan de una forma de controlar el comportamiento de un programa cuando se produce un error [[3]](https://ellibrodepython.com/excepciones-try-except-finally#:~:text=Las%20excepciones%20en%20Python%20son,cuando%20se%20produce%20un%20error.).

    Esto es muy importante ya que salvo que se trate este error, el programa se parará, y esto es algo que en determinadas aplicaciones no es una opción válida [[3]](https://ellibrodepython.com/excepciones-try-except-finally#:~:text=Las%20excepciones%20en%20Python%20son,cuando%20se%20produce%20un%20error.).

2. ¿Cuál es el propósito de la cláusula try...except en el manejo de excepciones?

    Lo que hay dentro del `try` es la sección del código que podría lanzar la excepción que se está capturando en el `except`. Por lo tanto cuando ocurra una excepción, se entra en el except pero el programa no se para [[4]](https://ellibrodepython.com/excepciones-try-except-finally#:~:text=Las%20excepciones%20en%20Python%20son,cuando%20se%20produce%20un%20error.).

3. Explica la diferencia entre las cláusulas except y finally en el manejo de excepciones, 

    La cláusula `except` se lanza siempre que ocurre un error mientras que `finally` es independiente de esto y se ejecutará siempre que haya sido declarada. Este bloque se suele usar si se quiere ejecutar algún tipo de acción de limpieza [[5]](https://ellibrodepython.com/excepciones-try-except-finally#:~:text=Las%20excepciones%20en%20Python%20son,cuando%20se%20produce%20un%20error.).

### Generadores

1. ¿Qué es un generador en Python y cuál es su ventaja sobre las listas tradicionales?

    Los Python generators son funciones especiales que devuelven un iterator en Python. La forma de crear Python generators es similar a la definición de una función normal. La diferencia está en los detalles: en lugar de una sentencia return, los generadores tienen una sentencia yield [[6]](https://www.ionos.es/digitalguide/paginas-web/desarrollo-web/python-generator/).

    La principal ventaja de los generadores sobre las listas tradicionales radica en su eficiencia de memoria. En lugar de almacenar todos los valores en la memoria, los generadores generan los valores uno a la vez, a medida que se necesitan, lo que puede resultar en un uso de memoria considerablemente menor, especialmente cuando se trabaja con conjuntos de datos grandes o potencialmente infinitos

2. Explica cómo se puede crear un generador usando la función yield.

    Para crear un generador en Python, se utiliza la palabra clave yield en lugar de return dentro de una función. Cuando se llama al generador, este devuelve el valor especificado en la declaración yield. Sin embargo, en lugar de salir de la función, el generador simplemente se suspende, guardando su estado actual. Cuando se llama al generador nuevamente, se reanuda desde el punto en que se detuvo, utilizando la posición guardada [[7]](https://www.ionos.es/digitalguide/paginas-web/desarrollo-web/python-generator/).

3. ¿Cuándo es más apropiado usar generadores en lugar de listas?

    Cuando se manejan volumenes grandes de datos, dado que en lugar de almacenar todos los valores en la memoria, los generadores generan los valores uno a la vez, a medida que se necesitan, lo que puede resultar en un uso de memoria considerablemente menor.

### Pandas

1. ¿Cuál es la diferencia entre una Serie y un DataFrame en Pandas?

    Las series son objetos correspondientes a paneles unidimensionales, mientras que los DataFrames son paneles bidimensionales compuestos por filas y columnas [[8]](https://datascientest.com/es/que-es-un-dataframe#:~:text=A%20diferencia%20de%20las%20Series,Pandas%20indexadas%20por%20un%20valor.).


2. Explica cómo manejar valores nulos o faltantes en un DataFrame.

    Para verificar la existencia de valores faltantes en nuestro DataFrame, se puede aplicar la función `isnull()` a todo el DataFrame. Esto devolverá un DataFrame con la misma forma que el DataFrame original, donde True representa un valor nulo y False representa un valor no nulo [[9]](https://docs.kanaries.net/es/topics/Pandas/pandas-where). Lo anterior resulta útil cuando se quiere conocer si existen valores nulos.

    Ahora, si lo que se quiere es eliminar todos los valores nulos se puede hacer uso de `df.dropna()` el cual dropea todo lo contenga dicho valor [[9]](https://docs.kanaries.net/es/topics/Pandas/pandas-where).

3. ¿Cuál es la diferencia entre loc y iloc en Pandas?

    La diferencia radica en que `loc` permite acceder a filas y columnas mediante etiquetas mientras que `iloc` permite lo mismo pero medio de indices enteros.

## Análisis de la primera parte

Con base en los resultados obtenidos para el primer gráfico, se observa que para el mes de Julio fue donde se dio el mayor pico de viajes aéreos, lo cual tiene sentido dado que es el mes en donde una gran parte de países dan vacaciones a sus empleados y los mismos optan por comenzar a viajar.
## Universidad de Costa Rica
### IE0217 - Estructuras Abstractas de Datos y Algoritmos para Ingeniería
### Tarea 2

## Instrucciones de ejecucción

## Parte teórica

1. Explique la diferencia entre una lista y una tupla en Python.

    Las principal diferencia es que las tuplas en Python son inmutables, lo que significa que una vez creada una tupla, sus elementos no pueden cambiar, en contraposición las listas son mutables, por tanto, se pueden añadir, eliminar o cambiar de posición los elementos que la integran. [[1]](https://www.freecodecamp.org/espanol/news/tuple-vs-list-en-python-cual-es-la-diferencia/)

2. ¿Qué es la sobrecarga de operadores en Python y cómo se implementa?

    La sobrecarga es una herramienta que proporcionan algunos lenguajes de programación, como C++ y Python, la cual permite definir un posible resultado de cierta operación que hace uso de algún operador. Por ejemplo, si se tuvieran dos instancias de una misma clase, al intentar sumar dichas instancias con el operador +, el resultado sería erróneo dado que Python desconoce qué hacer con ellas. Sin embargo, mediante la sobrecarga se le puede hacer entender qué es lo que se espera como resultado al realizar dicha operación.

3. Explique el concepto de "alcanzabilidad” (scope) de una variable en Python.

    El scope hace alusión al 'alcance' de esa variable, es decir, hasta dónde se tiene acceso a ella. Por ejemplo, si se define una variable dentro de un método, esta se conoce como variable local, porque solo existe dentro del mismo. Ningún método externo puede acceder a ella, dado que solo existe dentro de él. En contraposición, se tienen las variables globales cuyo alcance es lo suficientemente grande para que todos los métodos puedan acceder a ellas.

4. ¿Qué es un decorador en Python y cuál es su función principal?

    Un decorador en Python es una función que recibe otra función como parámetro, le añade cosas y retorna una función diferente. Son herramientas muy útiles. Nos permiten envolver una función dentro de otra y modificar el comportamiento de esta última sin modificarla permanentemente [[2]](https://platzi.com/blog/decoradores-en-python-que-son-y-como-funcionan/#:~:text=Un%20decorador%20en%20Python%20es,esta%20%C3%BAltima%20sin%20modificarla%20permanentemente.).

5. ¿Cómo se gestionan las excepciones en Python? Proporcione ejemplos de uso de bloques try, except y finally.

6. ¿Qué son los generadores en Python y para qué se utilizan?

    Los Python generators son funciones especiales que devuelven un iterator en Python. La forma de crear Python generators es similar a la definición de una función normal. La diferencia está en los detalles: en lugar de una sentencia return, los generadores tienen una sentencia yield. [[4]](https://www.ionos.es/digitalguide/paginas-web/desarrollo-web/python-generator/)

    Dado que los generadores de Python funcionan según el principio de “Lazy Evaluation” y solo se evalúan los valores cuando son realmente necesarios, las funciones generadoras son perfectas para trabajar con grandes cantidades de datos. [[4]](https://www.ionos.es/digitalguide/paginas-web/desarrollo-web/python-generator/)

7. Explique la diferencia entre init y call en clases de Python.

    La palabra reservada `__init__` se usa cada vez que se crea una nueva instancia de una clase. Mientras que el método `__call__` se utiliza para implementar un operador de llamada de función.

8. ¿Cómo se organizan los módulos y paquetes en Python? ¿Qué es init.py?

    Los modulos son simplementes archivos que contienen código. Mientras que un paquete es una carpeta que contiene varios módulos. Los paquetes deben contener siempre un `__init__.py`

    El archivo init.py es el archivo que Python ejecuta cuando importamos el paquete. Este archivo puede estar vacío, pero generalmente se utiliza para configurar el paquete y para importar submódulos. [[5]](https://apuntes.de/python/creacion-de-modulos-y-paquetes-en-python-modularidad-y-organizacion/#gsc.tab=0)

9. Explique la diferencia entre métodos append() e extend() en listas de Python.

    El método append() agrega cualquier valor completo, mientras que el método extend() agrega elementos de una estructura iterable. Es decir, append solo es capaz de agregar un elemento, mientras que extend es capaz de agregar todos los elementos del iterable hasta el final. [[6]](https://www.aluracursos.com/blog/append-o-extend-agregar-elementos-a-la-lista-con-python#:~:text=Tenga%20en%20cuenta%20que%2C%20mientras,iterable%2C%20y%20agrega%20cada%20art%C3%ADculo.)

10. ¿Cuál es la diferencia entre un método de clase y un método estático en Python?

    Los métodos de clase se declaran dentro de la clase, se les pone el decorador @classmethod, y se les pasa la palabra cls, por convención, como referencia de la clase. Mientras que los métodos estáticos se declaran como funciones normales, pero se decoran con @staticmethod y no reciben referencia ni de la clase ni de la instancia. [[7]](https://platzi.com/tutoriales/1104-python-2019/5347-la-relacion-que-hay-entre-self-y-cls-con-metodos-estaticos-metodos-de-clase-y-metodos-de-instancia/#:~:text=los%20m%C3%A9todos%20de%20clase%20se,clase%20ni%20de%20la%20instancia)

    Cabe destacar que, aunque los métodos de clase pueden ser llamados mediante una instancia de la clase, también pueden ser llamados directamente con la clase. Por otro lado, los métodos estáticos se pueden llamar directamente con la clase, sin necesidad de instanciarla.

los métodos estáticas se declaran como una función normal pero se decoran con @staticmethod y no reciben referencia ni de la clase ni de la instancia

11. Hable sobre las diferencias entre herencia simple y herencia múltiple en Python.

    La herencia simple indica que se pueden definir nuevas clases solamente a partir de una clase inicial mientras que la herencia múltiple indica que se pueden definir nuevas clases a partir de dos o más clases iniciales. [[8]](http://profesores.fi-b.unam.mx/carlos/java/java_basico3_4.html)

12. ¿Cómo se manejan los errores de importación de módulos en Python?

    Cuando se importa un módulo por primera vez, Python busca el módulo y, si se encuentra, crea un objeto de módulo, inicializándolo. Si no se encuentra el módulo con nombre, se genera un `ModuleNotFoundError` [[9]](https://docs.python.org/es/3/reference/import.html). Por tanto, bastaría con utilizar `try` y `except` para solventar estos probblemas de importación.

13. ¿Cuál es la diferencia entre una clase y un objeto en Python?

    Una clase puede considerarse como un molde que contiene todas las características y acciones que la representan. En contraste, un objeto es una instancia de ese molde; hereda todas las características y acciones de la clase y las incorpora como sus propias.

14. Hable sobre la diferencia entre una clase abstracta y una interfaz en Python.

    Las clases abstractas no pueden ser instanciadas y se utilizan como clases destinadas a ser solo padres de clases hijas. En cambio, una interfaz es un contrato que define un conjunto de métodos o acciones que una clase debe proporcionar. En resumen, las clases hijas están obligadas a definir los métodos y atributos declarados por la clase padre [[10]](https://atareao.es/pyldora/clases-abstractas-interfaces-y-polimorfismo/).

15. Explique el concepto de sobreescritura de métodos en Python y cómo se realiza.

    La sobreescritura de Métodos (override) en Python se refiere a la posibilidad de que una subclase cuente con métodos con el mismo nombre que los de una clase superior pero que definen comportamientos diferentes [[11]](https://www.programadornovato.com/sobreescritura-de-metodos-override-en-python/).

    La forma de realizarlo es sencillamente hacer lo que comúnmente se le dice 'caerle encima', que implica crear una clase con las mismas definiciones pero con resultados diferentes.

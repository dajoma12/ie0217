## Universidad de Costa Rica
### IE0217 - Estructuras Abstractas de Datos y Algoritmos para Ingeniería
### Tarea 5

## Instrucciones de ejecucción

Para poder ejecutar este código primero es necesario checkear si se tiene instalado la biblioteca `kaggle` de Python, para ello se recomienda hacer un:

    pip list

En caso de no tenerla instalada, basta con hacer:

    pip install kaggle

Una vez instalado, es necesario dirigirse a la carpeta ubicada en el directorio `C:\Users\Su_Usuario\.kaggle` y copiar el archivo `kaggle.json` que se obtiene al registrarse en la pagina de kaggle, llendo a `settings` y luego dando `create new token`, esto descargará el archivo que contiene sus credenciales.

## Breve descripción  del programa

Este programa utiliza la clase `DescargarDatos` para obtener un archivo de datos de Kaggle.com y procesarlo. Posteriormente, invoca la clase `Regresion` para realizar una regresión lineal con ciertos datos filtrados. Es importante mencionar que se excluyeron casos especiales que podrían distorsionar los resultados, como aquellos en los que el precio de un automóvil excede su valor nominal (posiblemente indicando una estafa). En esta etapa del programa, se generan y muestran gráficos uno por uno, junto con métricas relevantes en la consola. Después, se emplea la clase `Cluster` para procesar los datos, generar los gráficos pertinentes y calcular el resultado utilizando el método del codo y el coeficiente silhouette. Todo esto se maneja desde la función principal (`main`).

## Parte teórica

### Regresión

1. ¿Qué es la regresión lineal y cómo se diferencia de la regresión no lineal?

    La regresión lineal es una técnica de análisis de datos que predice el valor de datos desconocidos mediante el uso de otro valor de datos relacionado y conocido. Modela matemáticamente la variable desconocida o dependiente y la variable conocida o independiente como una ecuación lineal [[1]](https://aws.amazon.com/es/what-is/linear-regression/).

    La diferencia fundamental entre las regresiones lineal y no lineal, y la base para los nombres de los análisis, son las formas funcionales aceptables del modelo. Específicamente, la regresión lineal requiere parámetros lineales mientras que la no lineal no [[2]](https://support.minitab.com/es-mx/minitab/21/help-and-how-to/statistical-modeling/regression/supporting-topics/nonlinear-regression/understanding-nonlinear-regression/#:~:text=La%20diferencia%20fundamental%20entre%20las,que%20la%20no%20lineal%20no.). 

2. ¿Qué son los coeficientes de regresión y qué información proporcionan sobre la relación entre las variables?

    Representa el valor asociado a cada variable independiente en una ecuación de regresión. El mismo representa el grado y tipo de relación que tiene la variable independiente con la variable dependiente. Por ejemplo, la frecuencia de incendio se puede modelar como una función de radiación solar, vegetación, precipitación y orientación [[3]](https://support.esri.com/es-es/gis-dictionary/regression-coefficient).

3. ¿Qué es el error cuadrático medio (MSE) y cómo se utiliza para evaluar la precisión de un modelo de regresión?

    Es una métrica que calcula el promedio de los errores cuadrados entre las predicciones y los valores
    reales. MSE otorga un peso más significativo a los errores más grandes y es especialmente útil para resaltar las discrepancias entre las predicciones y los valores reales. La penalización cuadrática hace que el MSE sea sensible a valores atípicos.


4. ¿Cuál es la diferencia entre regresión simple y regresión múltiple y cuándo se utiliza cada una?

    La diferencia entre las dos regresiones es que la regresión lineal multiple es una extensión de la regresión lineal simple, que modela la relación entre una variable dependiente y múltiples variables independientes.

    La forma de utilizar una o la otra depende de la cantidad de datos que se quiera analizar, es decir, si se tiene dos o más variable independientes se utiliza la regresión lineal múltiple y sino la otra.

### Clustering:

1. ¿Qué es el clustering y cuál es su objetivo principal en el análisis de datos?

    Es una técnica de aprendizaje no supervisado que tiene como objetivo dividir un conjunto de datos en grupos o clusters basándose en la similitud entre los elementos. En otras palabras, busca identificar patrones naturales y estructuras dentro de los datos sin la necesidad de etiquetas predefinidas.

2. Describa brevemente los algoritmos K-Means y DBSCAN y cómo funcionan.

    El algoritmo K-Means es un método de agrupación que busca dividir un conjunto de datos en k grupos basándose en la similitud de las observaciones, mientras que DBSCAN es un algoritmo de clustering basado en la densidad. Este algoritmo no requiere especificar la cantidad de clusters de antemano y puede identificar clusters de formas y tamaños arbitrarios

3. ¿Qué es la inercia en el contexto del clustering y cómo se utiliza para evaluar la calidad de un agrupamiento?

    La inercia o intertia, en el contexto del K-Means, es la suma de todas las distancias de las observaciones de un clúster a su centroide. Suponiendo que el objetivo es reducir la suma de distancias (cuadrados) de puntos con sus respectivos centroides, cuanto menor sea esta suma total, mejor, ya que indicará una mayor homogeneidad en las observaciones pertenecientes a los clústers creados [[4]](https://planetachatbot.com/aprendizaje-no-supervisado-para-multiples-clases-en-python/).

4. ¿Qué son los centroides y cómo se utilizan en el algoritmo K-Means?

    Los centroides son puntos representativos que se utilizan en algoritmos de clustering, como K-Means, para definir la posición de cada grupo en un espacio de características. En el contexto del algoritmo K-Means, un centroide representa el centro geométrico de un grupo de puntos en un espacio n-dimensional.

5. Escriba la diferencia entre datos estructurados y no estructurados para análisis de datos.

    Los datos estructurados son modelos de datos predefinidos, generalmente solo texto y fáciles de buscar y analizar, mientras que los datos no estructurados no son modelos de datos predefinidos, pueden venir en texto, imágenes, sonido, vídeos u otros formatos, y su búsqueda y análisis es más difícil [[5]](https://ayudaleyprotecciondatos.es/bases-de-datos/diferencias-entre-datos-estructurados-y-no-estructurados/#:~:text=Los%20datos%20estructurados%20son%20modelos,y%20an%C3%A1lisis%20es%20m%C3%A1s%20dif%C3%ADcil.).

### Paquetes en Python (`__init__.py`):

1. ¿Qué es un paquete en Python y cómo se diferencia de un módulo?

    Un paquete es simplemente un directorio que contiene modulos mientras que un módulo es un archivo que contiene definiciones y declaraciones [[6]](https://pythondiario.com/2019/01/modulos-y-paquetes-en-python.html).

2. ¿Cuál es la función del archivo `__init__.py` dentro de un paquete de Python?

    El principal uso de `__init__.py` es inicializar paquetes de Python. Además, se utiliza para realizar configuraciones de importación [[7]](https://pythondiario.com/2013/06/initpy-en-python-que-es-y-como-funciona.html). 

3. ¿Cómo se importa un módulo o función desde un paquete en Python?

    Es posible importar módulos y funciones haciendo uso de la palabra reservada `import` de la siguiente forma:

        import nombre_del_paquete.nombre_del_modulo


4. ¿Qué es la variable `__all__` en el archivo `__init__.py` y cuál es su propósito?

    La variable `__all__` es una lista especial que se puede definir dentro del archivo `__init__.py` de un paquete en Python. Su propósito principal es controlar qué símbolos (módulos, funciones, clases, etc.) se importarán cuando se utilice la sintaxis.
        
        from paquete import *

5. ¿Cuál es la ventaja de organizar el código en paquetes y módulos en Python?

    La ventaja es modularizar el código, delegando responsabilidades a nuevas funciones, métodos, clases y archivos, esto resulta de gran útilidad cuando el código comienza a crecer.

### Python HTTP y Servicios Web (API):

1. ¿Qué es una API y cuál es su función en el contexto de los servicios web?

    Las API son mecanismos que permiten a dos componentes de software comunicarse entre sí mediante un conjunto de definiciones y protocolos[[8]](https://aws.amazon.com/es/what-is/api/#:~:text=API%20de%20Amazon%3F-,%C2%BFQu%C3%A9%20es%20una%20API%3F,meteorolog%C3%ADa%20contiene%20datos%20meteorol%C3%B3gicos%20diarios.)

    Una de las principales funciones de las API es poder facilitarle el trabajo a los desarrolladores y ahorrarles tiempo y dinero [[9]](https://www.xataka.com/basics/api-que-sirve). Mediante las API los desarrolladores pueden aprovechar el trabajo ya realizado por otros, acelerando el desarrollo de nuevas aplicaciones o integraciones y reduciendo los costos asociados con la creación de soluciones completamente personalizadas. 

2. ¿Cuál es la diferencia entre una API RESTful y una API SOAP?

    La API de REST expone los datos. SOAP es independiente y puede funcionar con cualquier protocolo de transporte. REST solo funciona con HTTPS. SOAP solo admite el intercambio de datos XML.

3. Describa los pasos básicos para consumir una API utilizando Python.

    Lo primero es instalar la librería requests de Python

        pip install request

    Luego, hacer la importación de la librería

        import request

    Para finalmente hacer la soliciud de la url

        response = requests.get(url, params=params,
                                headers=headers)

4. ¿Qué es la autenticación de API y por qué es importante?

    La autenticación de API es un proceso mediante el cual se verifica la identidad de un usuario o una aplicación que intenta acceder a una API (Interfaz de Programación de Aplicaciones). Es importante porque ayuda a garantizar la seguridad y la integridad de los datos y los recursos que se están utilizando o manipulando a través de la API.

5. ¿Cuál es el papel de los verbos HTTP (GET, POST, PUT, DELETE) en las solicitudes a una API y HTTP?

    * `POST` Es utilizado para crear nuevos recursos. No es seguro [[10]](https://www.contrive.mobi/aviorapi/HTTPMETHODS.html#:~:text=API&text=The%20primary%20or%20most%2Dcommonly,but%20are%20utilized%20less%20frequently.).

    * `GET` Recuperar la representación de un recurso. Es seguro [[10]](https://www.contrive.mobi/aviorapi/HTTPMETHODS.html#:~:text=API&text=The%20primary%20or%20most%2Dcommonly,but%20are%20utilized%20less%20frequently.).

    * `PUT` Actualiza o crea recursos. No es seguro [[10]](https://www.contrive.mobi/aviorapi/HTTPMETHODS.html#:~:text=API&text=The%20primary%20or%20most%2Dcommonly,but%20are%20utilized%20less%20frequently.).

    * `DELETE` Usado para eliminar recursos. No es seguro [[10]](https://www.contrive.mobi/aviorapi/HTTPMETHODS.html#:~:text=API&text=The%20primary%20or%20most%2Dcommonly,but%20are%20utilized%20less%20frequently.).


    ## Interpretación de los resultados

    ### Regresiones

    Con respecto a los resultados obtenidos, de las regresiones se puede observar que los modelos aparentemente intentan predecir correctamente los resultados. Por ejemplo, tiene sentido que el precio de los autos aumente conforme están más nuevos o que disminuya en función de la cantidad de kilómetros. Sin embargo, al examinar las métricas, estas indican que los modelos no predicen correctamente el comportamiento, ya que se obtuvieron coeficientes de determinación (R^2) muy bajos, siendo el más alto alrededor del 0.23. Se cree que la causa de esto es la falta de datos, debido a que para ciertos valores iniciales y finales, no hay suficientes datos de prueba.

    ### Cluster


    En lo que respecta a los clusters, para el caso de los kilómetros, se puede interpretar que las agrupaciones representan las preferencias de los clientes. La agrupación inferior refleja el máximo kilometraje que un cliente estaría dispuesto a aceptar en un automóvil, mientras que la agrupación superior incluye a aquellos clientes que no consideraron relevante el kilometraje.

    Ahora, para el segundo caso, nuevamente se observan dos divisiones. La primera parece indicar el precio máximo que un cliente de ese grupo estaría dispuesto a pagar por un automóvil del año, mientras que el segundo grupo comprende a todos aquellos clientes que pagaron un precio excesivo por un automóvil de ese año.

    Al evaluar las métricas, se observa que la decisión de utilizar solo dos agrupaciones para visualizar estos datos es correcta, ya que de lo contrario, los índices de desempeño comienzan a disminuir a medida que se aumentan las agrupaciones.




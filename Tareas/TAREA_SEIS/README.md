## Universidad de Costa Rica
### IE0217 - Estructuras Abstractas de Datos y Algoritmos para Ingeniería
### Tarea 5

## Instrucciones de ejecucción

Para poder ejecutar este código primero es necesario checkear si se tiene instalado la biblioteca `kaggle` de Python, para ello se recomienda hacer un:

    pip list

En caso de no tenerla instalada, basta con hacer:

    pip install kaggle

Una vez instalado, es necesario dirigirse a la carpeta ubicada en el directorio `C:\Users\Su_Usuario\.kaggle`

## Breve descripción  del programa


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

2. Describa brevemente los algoritmos K-Means y DBSCAN y cómo funcionan.

3. ¿Qué es la inercia en el contexto del clustering y cómo se utiliza para evaluar la calidad de un agrupamiento?

4. ¿Qué son los centroides y cómo se utilizan en el algoritmo K-Means?

5. Escriba la diferencia entre datos estructurados y no estructurados para análisis de datos.

### Paquetes en Python (`__init__.py`):

1. ¿Qué es un paquete en Python y cómo se diferencia de un módulo?

2. ¿Cuál es la función del archivo `__init__.py` dentro de un paquete de Python?

3. ¿Cómo se importa un módulo o función desde un paquete en Python?

4. ¿Qué es la variable `__all__` en el archivo `__init__.py` y cuál es su propósito?

5. ¿Cuál es la ventaja de organizar el código en paquetes y módulos en Python?

### Python HTTP y Servicios Web (API):

1. ¿Qué es una API y cuál es su función en el contexto de los servicios web?

2. ¿Cuál es la diferencia entre una API RESTful y una API SOAP?

3. Describa los pasos básicos para consumir una API utilizando Python.

4. ¿Qué es la autenticación de API y por qué es importante?

5. ¿Cuál es el papel de los verbos HTTP (GET, POST, PUT, DELETE) en las solicitudes a una API y HTTP?
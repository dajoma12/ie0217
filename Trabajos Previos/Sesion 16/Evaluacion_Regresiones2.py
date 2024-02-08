import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score

# Generar datos de ejemplo
np.random.seed(42)
x = 2 * np.random.rand(100, 1)
y = 4 + 3 * x + np.random.rand(100, 1)

# Dividir los datos en conjunto de entrenamiento y prueba
x_train, x_test, y_train, y_test = train_test_split(
    x, y, test_size=0.2, random_state=42)

# Crear y ajustar el modelo de regresión lineal
modelo = LinearRegression()
modelo.fit(x_train, y_train)

# Realizar prediccioes en el conjunto de pruebas
y_pred = modelo.predict(x_test)

# Calcular el coeficiente de determinación R^2
r2 = r2_score(y_test, y_pred)

# Visualizar los resultados
plt.scatter(x_test, y_test, label='Datos de prueba', color='blue')
plt.plot(x_test, y_pred, label=f'Regresión Lineal (R^2={r2:.2f})',
         color='red')
plt.title('Regresión Lineal y Coeficiente de determinación R^2')
plt.xlabel('x')
plt.ylabel('y')
plt.legend()
plt.show()

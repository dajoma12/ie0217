import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_absolute_error, mean_squared_error
from math import sqrt

# Generar datos de ejemplo
np.random.seed(42)
x = 2 * np.random.rand(100, 1)
y = 4 + 3 * x + np.random.rand(100, 1)

# Dividir los datos en conjunto de entrenamiento y prueba
x_train, x_test, y_train, y_test = \
  train_test_split(x, y, test_size=0.2, random_state=42)

# Crear y ajustar el modelo de regresión lineal
modelo = LinearRegression()
modelo.fit(x_train, y_train)

# Realizar predicciones en el conjunto de prueba
y_pred = modelo.predict(x_test)

# Calcular métricas de evaluación
mae = mean_absolute_error(y_test, y_pred)
mse = mean_squared_error(y_test, y_pred)

rmse = sqrt(mse)

rae = np.sum(np.abs(y_test - y_pred)) / \
  np.sum(np.abs(y_test - np.mean(y_test)))

rse = np.sum((y_test - y_pred)**2) / np.sum((y_test - np.mean(y_test))**2)

# Imprimir resultados
print(f'MAE: {mae::.2f}')
print(f'MSE: {mse::.2f}')
print(f'RMSE: {rmse::.2f}')
print(f'RAE: {rae::.2f}')
print(f'RSE: {rse::.2f}')

# Crear gráfica
plt.scatter(x_test, y_test, label='Datos de prueba', color='blue')
plt.plot(x_test, y_pred, label='Predicciones', color='red')
plt.title('Regresión Lineal y Errores')
plt.xlabel('X')
plt.ylabel('y')
plt.legend()

# Mostar errores en la gráfica
for i in range(len(x_test)):
    plt.plot([x_test[i], x_test[i]],
             [y_test[i], y_pred[i]],
             linestyle='--', color='gray')
plt.show()

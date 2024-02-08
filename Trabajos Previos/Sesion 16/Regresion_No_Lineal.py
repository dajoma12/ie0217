import numpy as np
import matplotlib.pyplot as plt
from sklearn.preprocessing import PolynomialFeatures
from sklearn.linear_model import LinearRegression
from sklearn.datasets import make_pipeline

# Generar datos de ejemplo no lineales
np.random.seed(42)
x = 2 * np.random(100, 1)
y = 0.5 * x**2 + x + 2 + np.random.randn(100, 1)

# Visualizar datos no lineales
plt.scatter(x, y)
plt.title('Datos de Regresión No Lineal')
plt.xlabel('x')
plt.ylabel('y')
plt.show()

# Aplicar regresión polinómica de segundo grado
grado_polinomico = 2
modelo_polinomico = make_pipeline(
    PolynomialFeatures(grado_polinomico), LinearRegression())
modelo_polinomico.fit(x, y)

# Visualizar la regresión polinómica
x_test = np.linspace(0, 2, 100).reshape(100, 1)
y_pred = modelo_polinomico.predict(x_test)

plt.scatter(x, y)
plt.plot(x_test, y_pred, color='red',
         label=f'Regresión Polinómica ({grado_polinomico} grado)')
plt.title('Regresión Polinómica')
plt.xlabel('x')
plt.ylabel('y')
plt.legend()
plt.show()

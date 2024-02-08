import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression

# Generar datos de ejemplo
np.random.seed(42)
x = 2 * np.random.rand(100, 1)

y = 4 + 3 * x + np.random.randn(100, 1)

# Crear un modelo de regresión lineal
modelo = LinearRegression()

# Ajustar el modelo
modelo.fit(x, y)

# Imprimir coeficiente e intercepción
print("Coeficiente:", modelo.coef_[0][0])
print("Intercepción:", modelo.intercept_[0])

# Visualizar la regresión lineal
plt.scatter(x, y)
plt.plot(x, modelo.predict(x), color='red', linewidth=3)
plt.title("Regresión Lineal")
plt.xlabel('x')
plt.ylabel('y')
plt.show()

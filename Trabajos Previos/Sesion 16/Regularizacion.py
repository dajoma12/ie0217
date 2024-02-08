import numpy as np
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression, Lasso, Ridge
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline

# Generar datos de ejemplo no lineales
np.random.seed(42)
x = 2 * np.rand(100, 1)
y = 0.5 * x**2 + x + 2 + np.random.randn(100, 1)

# Dividir los datos en conjunto de entrenamiento y prueba
x_train, x_test, y_train, y_test = train_test_split(
    x, y, test_size=0.2, random_state=42)

# Crear modelo de regresión polinómica de grado 2
modelo_polinomico = make_pipeline(
    PolynomialFeatures(degree=2), LinearRegression())
modelo_polinomico.fit(x_train, y_train)

# Crear modelo Lasso (L1)
modelo_lasso = make_pipeline(PolynomialFeatures(degree=2), Lasso(alpha=0.1))
modelo_lasso.fit(x_train, y_train)

# Crear modelo Ridge (L2)
modelo_ridge = make_pipeline(PolynomialFeatures(degree=2), Ridge(alpha=0.1))
modelo_ridge.fit(x_train, y_train)

# Visualizar los resultados
x_test_sorted, y_pred_polinomico_sorted = \
  zip(*sorted(zip(x_test, modelo_polinomico.predict(x_test))))
x_test_sorted, y_pred_lasso_sorted = \
  zip(*sorted(zip(x_test, modelo_lasso.predict(x_test))))
x_test_sorted, y_pred_ridge_sorted = \
  zip(*sorted(zip(x_test, modelo_ridge.predict(x_test))))

plt.scatter(x_test, y_test, label='Datos de prueba', color='blue')
plt.plot(x_test_sorted, y_pred_lasso_sorted, label='Lasso (L1)', color='red')
plt.plot(x_test_sorted, y_pred_ridge_sorted, label='Ridge (L2)',
         color='orange')
plt.title('Comparación de Modelos con Regularización')
plt.xlabel('x')
plt.ylabel('y')
plt.legend()
plt.show()

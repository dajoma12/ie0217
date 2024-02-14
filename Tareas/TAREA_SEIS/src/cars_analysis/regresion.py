"""
Contiene las implementaciones de los modelos de regresion lineal
y no lineal que se utilizaran en el analisis de datos de vehiculos.
"""
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
import matplotlib.pyplot as plt
import numpy as np
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline
from sklearn.metrics import mean_absolute_error, mean_squared_error, r2_score


class Regression:
    def __init__(self, dataFrame):
        self.X_simple = dataFrame.iloc[:, 0].values.reshape(-1, 1)
        self.Y_simple = dataFrame.iloc[:, 1].values

    def makePrediction(self, xlabel, ylabel, title, color, lineal=True):
        X_train, X_test, y_train, y_test = \
            train_test_split(self.X_simple, self.Y_simple,
                             test_size=0.2, random_state=42)
        model_simple = LinearRegression()

        if lineal:
            model_simple.fit(X_train, y_train)
            y_pred = model_simple.predict(X_test)
            plt.plot(X_test, y_pred, c='black', linewidth=3, label='Predict')
        else:
            gradoPolinomio = 2
            modeloPolinomico = make_pipeline(
                PolynomialFeatures(gradoPolinomio), model_simple)

            modeloPolinomico.fit(X_train, y_train)

            # Generar un rango de valores de X para predecir
            X_rng = np.linspace(X_test.min(), X_test.max(),
                                len(y_test)).reshape(-1, 1)

            y_pred = modeloPolinomico.predict(X_rng)
            plt.plot(X_rng, y_pred, color='black', linewidth=3,
                     label=f'Regresión Polinómica ({gradoPolinomio} grado)')

        # Calcular métricas de evaluación
        mae = mean_absolute_error(y_test, y_pred)
        mse = mean_squared_error(y_test, y_pred)
        r2 = r2_score(y_test, y_pred)

        # Imprimir métricas
        print("--- Métricas ---")
        print(f'MAE: {mae:.2f}')
        print(f'MSE: {mse:.2f}')
        print(f"R^2: {r2:.2f}")

        # Imprimir Gráfico
        plt.scatter(X_test, y_test, c=color, label='Datos Reales')
        plt.legend()
        plt.xlabel(xlabel)
        plt.ylabel(ylabel)
        plt.title(title)
        plt.show()

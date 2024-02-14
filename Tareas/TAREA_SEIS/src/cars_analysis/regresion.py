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
        """
        Inicializa el objeto de Regresión.

        Args:
            dataFrame (DataFrame): El DataFrame que contiene los datos
                                   de entrada.
        """
        # Tomas los primeros datos del data frame para la variable X
        self.X_simple = dataFrame.iloc[:, 0].values.reshape(-1, 1)
        # Toma los segundos datos del data frame para la variable y
        self.Y_simple = dataFrame.iloc[:, 1].values

    def makePrediction(self, xlabel, ylabel, title, color, lineal=True):
        """
        Realiza una predicción utilizando un modelo de regresión.

        Args:
            xlabel (str): Etiqueta del eje x.
            ylabel (str): Etiqueta del eje y.
            title (str): Título del gráfico.
            color (str): Color de los puntos de datos reales.
            lineal (bool, optional): Indica si se usará regresión lineal (True)
                                    o polinómica (False).
        """
        # Asigna los datos de entrenamiento y prueba, siendo la prueba de un
        # 20% de los datos totales
        X_train, X_test, y_train, y_test = \
            train_test_split(self.X_simple, self.Y_simple,
                             test_size=0.2, random_state=42)
        # Crea un objeto tipo regresion Lineal
        model_simple = LinearRegression()

        # En caso de que se quiera una regresión lineal
        if lineal:
            # Se entrena el modelo
            model_simple.fit(X_train, y_train)
            # Se hace la prediccin
            y_pred = model_simple.predict(X_test)
            # Se imprime la prediccin
            plt.plot(X_test, y_pred, c='black', linewidth=3, label='Predict')

        # En caso de que se quiera una regresión no lineal
        else:
            gradoPolinomio = 2  # Grado del polinomio
            # Declara el modelo polinómico
            modeloPolinomico = make_pipeline(
                PolynomialFeatures(gradoPolinomio), model_simple)
            # Entrena el modelo
            modeloPolinomico.fit(X_train, y_train)

            # Generar un rango de valores de X para predecir
            X_rng = np.linspace(X_test.min(), X_test.max(),
                                len(y_test)).reshape(-1, 1)
            # Hace la predicción del modelo
            y_pred = modeloPolinomico.predict(X_rng)
            # Imprime la predicción no lineal
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

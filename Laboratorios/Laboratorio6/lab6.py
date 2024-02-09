import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
import requests
import os
from io import StringIO  

# Cargar datos
# Obtener datos de https://raw.githubusercontent.com/ageron/handson-ml/master/datasets/housing/housing.csv
# y almacenarlos en data/dataset.csv

# La variable tipo string que contiene el URL
url = 'https://raw.githubusercontent.com/ageron/handson-ml/master/datasets/housing/housing.csv'

# Usando  metodo get para obtener los datos
data_web = requests.get(url)

# Se abre el archivo (o se crear en caso de no existir)
# w: write o escribir
# ruta: data/dataset.csv

# Condicion para crear dir 'data' en caso de que no exista
if not os.path.exists('data'):
    os.mkdir('data')

with open('data/dataset.csv', 'w') as datos:
    # escribir los datos obtenidos del URL en el archivo de la ruta
    datos.write(data_web.text)

# print(type(datos))

data = pd.read_csv("data/dataset.csv")

# -----------
#     1
# -----------

# Toma los datos y extrae los valores y hace un reshape
# a este método le gusta convertir
X_simple = data['median_income'].values.reshape(-1, 1)

# Se sacan los datos del eje Y
y_simple = data['median_house_value'].values


# Se entrena el modelo, 20% para el test, la semillas son formas de generar los datos randoms
X_train, X_test, y_train, y_test = train_test_split(X_simple, y_simple, test_size=0.2, random_state=42)

# Se hace una instancia
model_simple = LinearRegression()
# se hace la regresión lienal
model_simple.fit(X_train, y_train)

# Se hace la predicción del modelo
y_pred_simple = model_simple.predict(X_test)

# Se calcula el error mínimo cuadrado medio
mse_simple = mean_squared_error(y_test, y_pred_simple)
print(f"Error cuadrático medio (MSE) en regresión lineal simple: {mse_simple}")

# -----------
#     2
# -----------

# Extrayendo los datos de las columnas de DF
# Var indep
X_multiple = data[['median_income', 'housing_median_age', 'population']]
# Var depen
y_multiple = data['median_house_value'].values

# Se divide las variables para entrenar el modelo y para probar
# se utiliza un 20 % del para la prueba
# usando un seed pseudo aleatorio
X_train_multi, X_test_multi, y_train_multi, y_test_multi = train_test_split(X_multiple, y_multiple, test_size=0.2, random_state=42)

# Se crea el objeto con el modelo de RL
model_multiple = LinearRegression()
# Entrena el modelo
model_multiple.fit(X_train_multi, y_train_multi)

# Se hacen las predicciones del modelo
y_pred_multiple = model_multiple.predict(X_test_multi)

# Se calcula el Error Cuadratico Medio entre el modelo entrenado y con las pruebas
mse_multiple = mean_squared_error(y_test_multi, y_pred_multiple)
# Imprime el valor del MSE en pantalla
print(f"Error cuadrático medio (MSE) en regresión lineal múltiple: {mse_multiple}")

# -----------
#     3
# -----------

from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline

# obtener los valores de la columna median_age
X_nonlinear = data['housing_median_age'].values.reshape(-1, 1)
# obtener los valores de la columna midian_house
y_nonlinear = data['median_house_value'].values

# Se dividen los datos
X_train_nonlinear, X_test_nonlinear, y_train_nonlinear, y_test_nonlinear = train_test_split(X_nonlinear, y_nonlinear, test_size=0.2, random_state=42)

# grados del modelo regresión lineal
degree = 2
# crear modelo de regreseion no lineal con los datos del train
model_nonlinear = make_pipeline(PolynomialFeatures(degree), LinearRegression())
# ajustar el modelo de regresion no lineal
model_nonlinear.fit(X_train_nonlinear, y_train_nonlinear)

# predecir los datos nuevos(prueba el modelos con los datos test)
y_pred_nonlinear = model_nonlinear.predict(X_test_nonlinear)

# calcula el error cuagratico medio
mse_nonlinear = mean_squared_error(y_test_nonlinear, y_pred_nonlinear)
# imprime el modelo
print(f"Error cuadrático medio (MSE) en regresión no lineal: {mse_nonlinear}")

# -----------
#     4
# -----------
from sklearn.linear_model import Ridge, Lasso

# Ridge penaliza con los valores cuadratos, alpha define que tan fuerte es la penalziacion
model_ridge = Ridge(alpha=1.0) # alpha se encarga de definir que tan extricta es la regulacion
# Aplica el modelo a los 
model_ridge.fit(X_train_multi, y_train_multi)

# Lazo castiga con los valores absolutos

model_lasso = Lasso(alpha=1.0)
model_lasso.fit(X_train_multi, y_train_multi)

"""
Ventajas entre los modelos:
Lazo castiga mejor los errores en la regunlacion
"""
# -----------
#     5
# -----------
from sklearn.cluster import KMeans, DBSCAN
import matplotlib.pyplot as plt

# Se extraen las columnas para el gráfico
X_cluster = data[['longitude', 'latitude']]

# Define la cantidad de cluster y el init inicia con semillas aleatorias
kmeans = KMeans(n_clusters=3, random_state=42, n_init=10)
# Colorea los datos de la grafica
data['cluster_kmeans'] = kmeans.fit_predict(X_cluster)

# Radio del vecindario alrededor de un punto 0.5
dbscan = DBSCAN(eps=0.5, min_samples=5)
data['cluster_dbscan'] = dbscan.fit_predict(X_cluster)

# Se imprimen los datos
plt.scatter(data['longitude'], data['latitude'], c=data['cluster_kmeans'], cmap='viridis', marker='.')
plt.title('Clusters usando K-means')
plt.show()

plt.scatter(data['longitude'], data['latitude'], c=data['cluster_dbscan'], cmap='viridis', marker='.')
plt.title('Clusters usando DBSCAN')
plt.show()

"""
Aquí se pueden encontrar las implementaciones de algoritmos de
clustering, como K-Means, que se utilizarán para agrupar los
vehículos según sus características.
"""
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt
from sklearn.metrics import silhouette_score
import numpy as np


class Clustering:
    def __init__(self, data):
        self.data = data

    def makeCluster(self, variable1, variable2, xlabel, ylabel):
        data = self.data
        X_cluster = data[[variable1, variable2]]
        # Guardar los datos de X
        self.X = X_cluster
        kmeans = KMeans(n_clusters=2, random_state=42, n_init=10)
        # Colorea los datos de la grafica
        data['cluster_kmeans'] = kmeans.fit_predict(X_cluster)

        # Se imprimen los datos
        plt.scatter(
            data[variable1],
            data[variable2],
            c=data['cluster_kmeans'],
            cmap='viridis', marker='.')

        plt.title('Clusters usando K-means')
        plt.xlabel(xlabel)
        plt.ylabel(ylabel)
        plt.ylim(top=400000)
        plt.xlim(1994, 2021)
        plt.show()

    def makeElbow(self):
        # Generar datos aletorios
        np.random.seed(42)  # Para reproducibilidad
        # 100 puntos bidimensionales en un rango de 0 a 10
        x = self.X

        # Calcular la inercia para diferentes valores de k
        inertias = []
        for k in range(1, 11):
            Kmeans = KMeans(n_clusters=k, random_state=42)
            Kmeans.fit(x)
            inertias.append(Kmeans.inertia_)

        # Graficar el método del codo
        plt.plot(range(1, 11), inertias, marker='o')
        plt.title('Método del Codo')
        plt.xlabel('Número de Clusters (k)')
        plt.ylabel('Inercia')
        plt.show()

    def makeSihouette(self):
        # Generar datos aleatorios
        np.random.seed(42)  # Para reproducibilidad
        # 100 puntos bidimensionales en un rango de 0 a 10
        x = self.X
        # Calcular el coeficiente de silueta para diferentes valores de k
        silhouette_scores = []
        for k in range(2, 20):
            kmeans = KMeans(n_clusters=k, random_state=42)
            kmeans.fit(x)
            score = silhouette_score(x, kmeans.labels_)
            silhouette_scores.append(score)

        # Graficar el método de la silueta
        plt.plot(range(2, 20), silhouette_scores, marker='o')
        plt.title('Método de la Silueta')
        plt.xlabel('Número de Clusters (k)')
        plt.ylabel('Coeficiente de Silueta')
        plt.show()

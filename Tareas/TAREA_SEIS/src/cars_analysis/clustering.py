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
        """
        Constructor de la clase Clustering.

        Args:
            data: Conjunto de datos a utilizar para clustering.
        """
        self.data = data

    def makeCluster(self, variable1, variable2, xlabel, ylabel):
        """
        Realiza el clustering de los datos utilizando el algoritmo K-Means.

        Args:
            variable1: Nombre de la primera variable a considerar.
            variable2: Nombre de la segunda variable a considerar.
            xlabel: Etiqueta del eje X en la gráfica.
            ylabel: Etiqueta del eje Y en la gráfica.
        """
        # Hace una copia de los datos con el fin de reducir espacio
        data = self.data
        # Asigna los datos al cluster
        X_cluster = data[[variable1, variable2]]
        # Guardar los datos de X
        self.X = X_cluster
        # Agrupa los datos en la cantidad de cluster deseada
        kmeans = KMeans(n_clusters=2, random_state=42, n_init=10)
        # Colorea los datos de la gráfica
        data['cluster_kmeans'] = kmeans.fit_predict(X_cluster)

        # Se imprimen los datos
        plt.scatter(
            data[variable1],
            data[variable2],
            c=data['cluster_kmeans'],
            cmap='viridis', marker='.')
        # Se establecen los titulos de los ejes y del gráfico
        plt.title('Clusters usando K-means')
        plt.xlabel(xlabel)
        plt.ylabel(ylabel)
        # Se visualiza el gráfico
        plt.show()

    def makeElbow(self):
        """
        Realiza la visualización del método del codo
        para determinar el número óptimo de clusters.
        """
        # Generar datos aleatorios
        np.random.seed(42)  # Para reproducibilidad
        # Asigna el contenido de X
        x = self.X

        # Calcular la inercia para diferentes valores de k
        inertias = []
        for k in range(1, 11):
            Kmeans = KMeans(n_clusters=k, random_state=42)
            Kmeans.fit(x)
            inertias.append(Kmeans.inertia_)

        # Graficar el método del codo
        plt.plot(range(1, 11), inertias, marker='o')
        # Se establecen los titulos de los ejes y del gráfico
        plt.title('Método del Codo')
        plt.xlabel('Número de Clusters (k)')
        plt.ylabel('Inercia')
        # Se visualiza el gráfico
        plt.show()

    def makeSihouette(self):
        """
        Realiza la visualización del método de la silueta para
        determinar el número óptimo de clusters.
        """
        # Generar datos aleatorios
        np.random.seed(42)  # Para reproducibilidad
        # Asigna el contenido de X
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
        # Se establecen los titulos de los ejes y del gráfico
        plt.title('Método de la Silueta')
        plt.xlabel('Número de Clusters (k)')
        plt.ylabel('Coeficiente de Silueta')
        # Asigna el contenido de X
        plt.show()

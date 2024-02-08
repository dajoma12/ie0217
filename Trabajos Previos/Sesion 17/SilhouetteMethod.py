from sklearn.cluster import KMeans
from sklearn.metrics import silhouette_score
import matplotlib.pyplot as plt
import numpy as np

# Generar datos aleatorios
np.random.seed(42)  # Para reproducibilidad
# 100 puntos bidimensionales en un rango de 0 a 10
x = np.random.rand(100, 2) * 10

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

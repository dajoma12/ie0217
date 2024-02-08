from sklearn.cluster import KMeans
import numpy as np
import matplotlib.pyplot as plt

# Generar datos aletorios
np.random.seed(42)  # Para reproducibilidad
# 100 puntos bidimensionales en un rango de 0 a 10
x = np.random.rand(100, 2) * 10

# Calcular la inercia para diferentes valores de k
inertias = []
for k in range(1, 11):
    Kmeans = KMeans(n_clusters=k, random_state=42)
    Kmeans.fit(x)
    inertias.append(Kmeans.inertia_)

# Graficar el método del codo
plt.plt(range(1, 11), inertias, marker='o')
plt.title('Método del Codo')
plt.xlabel('Número de Clusters (k)')
plt.ylabel('Inercia')
plt.show()

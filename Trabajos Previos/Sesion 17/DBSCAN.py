import matplotlib.pyplot as plt
from sklearn.datasets import make_moons
from sklearn.cluster import DBSCAN

# Generar datos de ejemplo (luna creciente)
x, _ = make_moons(n_samples=200, noise=0.05, random_state=42)

# Configurar y ajustar el modelo DBSCAN
dbscan = DBSCAN(eps=0.3, min_samples=5)
dbscan_labels = dbscan.fit_predict(x)

# Visualizar resultados
plt.scatter(
    x[:, 0], x[:, 1], c=dbscan_labels, cmap='viridis', edgecolors='k', s=50)
plt.title('Resultados del Clustering DBSCAN')
plt.xlabel('Característica 1')
plt.ylabel('Característica 2')
plt.show()

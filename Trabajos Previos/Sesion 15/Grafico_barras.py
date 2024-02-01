import matplotlib.pyplot as plt

# Datos de ejemplo
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Grafico de barras verticales
plt.bar(categorias, valores, color='rotalblue')

# Peronalizacion
plt.xlabel('Categorias')
plt.ylabel('Valores')
plt.title('Grafico de Barras Verticales')

# Mostrar el grafico
plt.show()
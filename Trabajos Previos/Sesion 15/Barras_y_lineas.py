import matplotlib.pyplot as plt

# Datos de ejemplo
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]
tendencia = [5, 10, 8, 13]

# Crear una figura con dos subtramas
fig, axs = plt.subplot(1, 2, figsize=(10, 4))

# Subtrama 1: Gráfico de barras
axs[0].bar(categorias, valores, color='rotalblue')
axs[0].set_title('Grafico de barras')

# Subtrama : Gráfico de línea
axs[1].plot(categorias, tendencia, color='green', marker='o')
axs[1].set_title('Grafico de linea')

# Personalizacion adicional
for ax in axs:
    ax.set_xlabel('Categorias')
    ax.set_ylabel('Valores')

# Ajustar la disposicion
plt.tight_layout()

# Msotrar la figura con ambas subtramas
plt.show()
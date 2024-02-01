import matplotlib.pyplot as plt
import numpy as np

# Datos de ejemplo
categorias = ['A', 'B', 'C', 'D']
valores1 = [15, 8, 12, 10]
valores2 = [12, 10, 15, 7]
tendencia = [11, 9, 13, 9]

# Crear una figura y ejes
fig, ax = plt.subplots()

# Ancho de las barras = 0.35
ancho_barra = 0.35
indice = np.arange(len(categorias))

# Gráfico de barras agrupadas

# Determina la posición de las barras para la Serie. Resta la mitad del ancho de la barra para
# centrarlas en el índice dado.
bar1 = ax.bar(indice - ancho_barra / 2, valores1, ancho_barra, label='Serie 1', color='royalblue')
bar2 = ax.bar(indice + ancho_barra / 2, valores2, ancho_barra, label='Serie 2', color='lightcoral')

# Línea de tendencia
ax.plot(indice, tendencia, label='Tendencia', marker='o', color='green')

# Personalización
ax.set_xlabel('Categorias')
ax.set_ylabel('Valores')
ax.set_title('Gráfico de Barras Agrupadas con Tendencia')
ax.set_xticks(indice)
ax.set_xticklabels(categorias)
ax.legend()

# Añadir etiquetas en las barras
# Itera sobre las dos listas de barras
for bars in [bar1, bar2]:
    # Itera sobre las barras individuales dentro de cada serie
    for rect in bars:
        height = rect.get_height() # Obtiene la altura de la barra actual.
        ax.annotate('{}'.format(height),
                    # Posición de la etiqueta en el centro superior de la barra.
                    xy=(rect.get_x() + rect.get_width() / 2, height),
                    xytext=(0, 3),  # Desplazamiento vertical de la etiqueta
                    # Indica que las coordenadas estan en unidades de puntos
                    textcoords='offset points', 
                    ha='center', va='bottom')

# Mostrar el gráfico
plt.grid(axis='y', linestyle='--', alpha=0.7)
plt.tight_layout()
plt.show()

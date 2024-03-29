import matplotlib.pyplot as plt

# Datos de ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Crear un gráfica de línea
plt.plot(x, y, label='Datos de ejemplo')

# Personalizacion
plt.xlabel("Eje X")
plt.ylabel('Eje Y')
plt.title('Gráfico de línea con Etiquetas y Titulo')
plt.legend()

# Mostrar el gráfico
plt.show()
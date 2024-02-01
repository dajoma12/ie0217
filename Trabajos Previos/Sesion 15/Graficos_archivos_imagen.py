import matplotlib.pyplot as plt

# Datos de ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Crear un gráfica de línea
plt.plot(x, y)

# Personalizacion
plt.xlabel("Eje X")
plt.ylabel('Eje Y')
plt.title('Gráfico de línea simple')

# Guardar el gráfico como imagen (por ejemplo, en formato PNG)
plt.savefig('grafico.png')

# Mostrar el gráfico
plt.show()
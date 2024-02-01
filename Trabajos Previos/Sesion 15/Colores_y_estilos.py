import matplotlib.pyplot as plt

# Datos de ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Crear un gráfica de línea
plt.plot(x, y, color='blue', linestyle='--', marker='o', label='Serie A')

# Personalizacion adicional, como etiquetas de ejes y titulos
plt.xlabel("Eje X")
plt.ylabel('Eje Y')
plt.title('Gráfico Personalizado')
plt.legend()

# Mostrar el gráfico
plt.show()
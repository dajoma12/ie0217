import matplotlib.pyplot as plt

# Datos de ejemplo
datos = [15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90]

# Gráfico de caja
plt.boxplot(datos)

# Persinalización
plt.ylabel('Valores')
plt.title('Gráfico de Caja')

# Mostrar el gráfico
plt.show()
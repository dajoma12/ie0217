import pandas as pd
import numpy as np
import matplotlib.pyplot as plt


class Prestamo:
    def __init__(self, monto_prestamo, tasa_interes_anual, cuotas):
        self.monto_prestamo = monto_prestamo
        self.tasa_interes_anual = tasa_interes_anual
        self.cuotas = cuotas  # Declara la cuotas
        self.amortizacion = self.calcular_amortizacion()

    def calcular_amortizacion(self):
        try:
            tasa_interes_mesual = self.tasa_interes_anual / 12 / 100
            # Formula para calcular la cuota mensual del prestamo
            cuota_mensual = (tasa_interes_mesual * self.monto_prestamo) / (1 - (1 + tasa_interes_mesual)**-self.cuotas)

            # Lo que sobra
            saldo_restante = self.monto_prestamo

            # Utilizado para guardar los resultados
            amortizacion = []

            for cuota in range(1, self.cuotas + 1):
                # La cantidad de interes pendiente
                interes_pendiente = saldo_restante * tasa_interes_mesual
                # Calcula amortización principal
                amortizacion_principal = cuota_mensual - interes_pendiente
                # Esto es lo que le quita al valor inicial
                saldo_restante -= amortizacion_principal
                amortizacion.append({'Cuota': cuota,
                                     'Interes': interes_pendiente,
                                     'Amortizacion': amortizacion_principal,
                                     'Saldo Restante': saldo_restante})

            return amortizacion

        except ZeroDivisionError:
            print("Error: La cantidad de cuotas no puede ser cero")
            # Lo que sea que retorne el metodo es lo que se guarda
            # en amortizacion por lo cual conviene devolver una lista vacía
            return []

    def generar_reporte(self, archivo_salida):
        try:
            # Crea un data frame
            df = pd.DataFrame(self.amortizacion)
            df.to_csv(archivo_salida, index=False)
            print(f'Reporte generado con éxito: {archivo_salida}')

        # Aqui pasan cosas extrañas
        except Exception as e:
            print(f'Ocurrió un error al generar el reporte: {str(e)}')

    def graficar_amortizacion(self):
        # Crea un data frame
        df = pd.DataFrame(self.amortizacion)

        # Utilizado para guardar barras apiladas
        data = np.array([df['Interes'], df['Amortizacion']])

        # Realiza un gráfico de barras
        plt.bar(df['Cuota'], data[0], label='Interés')
        plt.bar(df['Cuota'], data[1], bottom=data[0], label='Amortización')
        # Título del eje x
        plt.xlabel('Número de cuota')
        # Título del eje y
        plt.ylabel('Monto ($)')
        # Título
        plt.title('Amortización e Interés por Cuota')
        plt.legend()
        plt.show()


def main():
    # 1 Pedir el monto al usuario
    try:
        monto = float(input("Ingrese el monto del prestamo: "))
        # 2 Pedir la tasa de interes anual (%)
        tasa_interes_anual = float(input("Ingrese la tasa de interes anual en %: "))
        # 3 Pedir la cantidad de cuotas
        cuota = int(input("Ingrese la cantidad de cuotas: "))

        print('------------------------')

    except ValueError:
        print("Error: Tipo de dato inválido")

    # 4 Instanciar el préstamo
    prestamo = Prestamo(monto, tasa_interes_anual, cuota)

    # 5 Generar el reporte
    prestamo.generar_reporte('reporte.csv')
    # 6 Imprimir información, monto, tasa, cuotas..
    print(f"El monto ingresado es de: {prestamo.monto_prestamo}")
    print(f"La tasa de interes es: {prestamo.tasa_interes_anual}")
    print(f"La cantidad de cuotas es: {prestamo.cuotas}")

    # 7 Graficar la amortización
    try:
        prestamo.calcular_amortizacion()
        prestamo.graficar_amortizacion()
    except Exception as e:
        print(f"Algo malo paso: {str(e)}")

    # 8 Manejo de excepciones ValueError y genérico


if __name__ == "__main__":
    main()

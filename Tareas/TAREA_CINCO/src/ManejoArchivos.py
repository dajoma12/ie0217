import pandas as pd
from IteradorPersonalizado import FiltroAerolineaIterator
import matplotlib.pyplot as plt


class ManejoArchivos:

    def __init__(self):
        self.data = self.procesarDatos()
        self.grafico1 = ''
        self.grafico2 = ''

    def procesarDatos(self):
        try:
            data = pd.read_csv("Datos.csv")
            columasEliminar = [
                'Codigo_Aerolinea',
                'ID_Aeropuerto_Origen',
                'ID_Aeropuerto_Destino',
                'Carga_Util']

            lista = ['Numero_Pasajeros',
                     'Asientos_Disponibles',
                     'Salidas_Programadas',
                     'Salidas_Realizadas']
            for nombre in lista:
                data[nombre] = data[nombre].astype(int)

            data.drop(columasEliminar, axis=1, inplace=True)
            return data.dropna()
        except Exception as e:
            print(f"Ha ocurrido un error: {str(e)}")

    def generarDatos(self, cantidad_informes):
        data = self.data

        def generar_informe():
            suma_valores = {}
            contador = 0
            for index, fila in data.iterrows():
                aerolinea = fila['Nombre_Aerolinea']
                pasajeros = fila['Numero_Pasajeros']
                salidas = fila['Salidas_Realizadas']

                if aerolinea in suma_valores:
                    suma_valores[aerolinea]['Numero_Pasajeros'] += pasajeros
                    suma_valores[aerolinea]['Salidas_Realizadas'] += salidas
                else:
                    suma_valores[aerolinea] = {
                        'Numero_Pasajeros': pasajeros,
                        'Salidas_Realizadas': salidas
                    }

                contador += 1
                if contador >= cantidad_informes:
                    break

            yield from suma_valores.items()

        return generar_informe()

    def filtrarAerolinea(self, aerolinea, n):
        iterador = FiltroAerolineaIterator(self.data, aerolinea)
        i = 0
        for dato in iterador:
            if (i != n):
                print(f"\n--- Dato {i+1} ---")
                print(dato)
                i += 1
            else:
                return

    def analizarDatos(self):
        data = self.data

        print('\n--- Tendencia de salidas aereas por mes ---\n')
        tendencias_por_mes = data.groupby('Mes')['Salidas_Realizadas'].sum()
        self.grafico1 = tendencias_por_mes
        print(tendencias_por_mes)

        print('\n--- Cantidad de pasajeros por aerolinea ---\n')
        patronesAerolinea = data.groupby('Nombre_Aerolinea')['Numero_Pasajeros'].sum()
        self.grafico2 = patronesAerolinea
        print(patronesAerolinea)

        print('\n--- Viajes a Costa Rica ---\n')
        CostaRica = data[data['Pais_Destino'] == 'Costa Rica']
        cantidadViajes = CostaRica['Salidas_Realizadas'].sum()
        pasajeros = CostaRica['Numero_Pasajeros'].sum()
        pasajerosXMes = CostaRica.groupby('Mes')['Numero_Pasajeros'].sum()

        print("La cantidad de viajes fue de:", cantidadViajes)
        print("El numero total de pasajeros fue de:", pasajeros)

        print('\n--- La cantidad de pasajeros por mes al pais ---\n')
        print(pasajerosXMes)

    def graficarDatos(self):
        grafico1 = self.grafico1
        grafico2 = self.grafico2

        # Graficar los datos
        grafico1.plot(kind='bar', color='skyblue')
        plt.title('Tendencia de salidas aéreas por mes')
        plt.xlabel('Mes')
        plt.ylabel('Salidas Realizadas')
        plt.xticks(rotation=45)
        plt.grid(True)
        plt.tight_layout()

        plt.show()


def main():
    print('\n-------- Datos del Bureau of Transportation Statistics --------')
    archivo = ManejoArchivos()

    # Llamada al método
    archivo.analizarDatos()

    print("\n--- Informes detallados ---\n")
    # Llamar al método generarDatos() con la cantidad deseada de informes
    generador_informe = archivo.generarDatos(cantidad_informes=10)
    # Iterar sobre el generador para obtener los informes detallados
    for aerolinea, valores in generador_informe:
        print(f'Aerolínea: {aerolinea}, Valores: {valores}')

    print("\n--- Filtro por aerolinea ---")
    # Llama al método
    archivo.filtrarAerolinea('Cape Air', 3)
    
    archivo.graficarDatos()


if __name__ == '__main__':
    main()

import pandas as pd
from IteradorPersonalizado import FiltroAerolineaIterator
import matplotlib.pyplot as plt


class ManejoArchivos:
    """
    Clase para el manejo de archivos de datos y análisis.
    """
    def __init__(self):
        """
        Constructor de la clase.
        """
        self.data = self.procesarDatos()  # Inicializa con los datos limpios
        self.grafico1 = ''  # Inicializa con datos vacios
        self.grafico2 = ''  # Inicializa con datos vacios

    def procesarDatos(self):
        """
        Procesa los datos del archivo CSV.

        Returns:
            DataFrame: Los datos procesados.
        """
        try:
            # Lee el archivo .csv
            data = pd.read_csv("../TAREA_CINCO/src/Datos.csv")
            # Declara un array de strings
            columasEliminar = [
                'Codigo_Aerolinea',
                'ID_Aeropuerto_Origen',
                'ID_Aeropuerto_Destino',
                'Carga_Util']
            # Declara un arrary de strings
            lista = ['Numero_Pasajeros',
                     'Asientos_Disponibles',
                     'Salidas_Programadas',
                     'Salidas_Realizadas']
            # Cambia el tipo de cada columas del array
            for nombre in lista:
                data[nombre] = data[nombre].astype(int)
            # Elimina las columnas del array
            data.drop(columasEliminar, axis=1, inplace=True)
            # Elimina los datos vacios
            return data.dropna()
        except Exception as e:
            print(f"Ha ocurrido un error: {str(e)}")

    def generarDatos(self, cantidad_informes):
        """
        Genera informes a partir de los datos.

        Args:
            cantidad_informes (int): La cantidad de informes a generar.

        Returns:
            Generator: Un generador que produce informes.
        """
        data = self.data  # Declara una variable con los datos

        def generar_informe():
            # Crea un diccionario
            suma_valores = {}
            # Inicializa un contador con cero
            contador = 0
            # Itera por los indices i columnas de iterrows
            for index, fila in data.iterrows():
                aerolinea = fila['Nombre_Aerolinea']
                pasajeros = fila['Numero_Pasajeros']
                salidas = fila['Salidas_Realizadas']

                # Si el valor se encuentra
                if aerolinea in suma_valores:
                    # hace una suma de pasajeros
                    suma_valores[aerolinea]['Numero_Pasajeros'] += pasajeros
                    # hace una sema de las salidas
                    suma_valores[aerolinea]['Salidas_Realizadas'] += salidas
                # Sino se encuentra
                else:
                    # agrega o mantiene
                    suma_valores[aerolinea] = {
                        'Numero_Pasajeros': pasajeros,
                        'Salidas_Realizadas': salidas
                    }
                # aumenta en 1 el contador
                contador += 1
                # en caso que el contador llegue a cero finaliza
                if contador >= cantidad_informes:
                    break
            # devuelve el iterador
            yield from suma_valores.items()
        # devuelve el iterador
        return generar_informe()

    def filtrarAerolinea(self, aerolinea, n):
        """
        Filtra los datos por aerolínea.

        Args:
            aerolinea (str): El nombre de la aerolínea.
            n (int): El número máximo de resultados a mostrar.
        """
        # instancia el iterador
        iterador = FiltroAerolineaIterator(self.data, aerolinea)
        i = 0
        # por cada dato del iterador
        for dato in iterador:
            # en caso que la cantidad de iteraciones no sea n
            if (i != n):
                print(f"\n--- Dato {i+1} ---")
                print(dato)
                i += 1
            # en caso contrario, finaliza
            else:
                return

    def analizarDatos(self):
        """
        Analiza los datos y muestra tendencias.
        """
        data = self.data

        print('\n--- Tendencia de salidas aereas por mes ---\n')
        # agrupa por salidas y mes
        tendencias_por_mes = data.groupby('Mes')['Salidas_Realizadas'].sum()
        self.grafico1 = tendencias_por_mes  # guarda los datos
        print(tendencias_por_mes)

        print('\n--- Cantidad de pasajeros por aerolinea ---\n')
        patronesAerolinea = data.groupby('Nombre_Aerolinea')['Numero_Pasajeros'].sum()
        # agrupa por nombre y numeros de pasajeros
        self.grafico2 = patronesAerolinea  # guarda los datos
        print(patronesAerolinea)

        print('\n--- Viajes a Costa Rica ---\n')
        CostaRica = data[data['Pais_Destino'] == 'Costa Rica']
        # agrupa por cantidad de salidas a costa rica
        cantidadViajes = CostaRica['Salidas_Realizadas'].sum()
        # agrupa por numero de pasajeros a costa rica
        pasajeros = CostaRica['Numero_Pasajeros'].sum()
        pasajerosXMes = CostaRica.groupby('Mes')['Numero_Pasajeros'].sum()

        print("La cantidad de viajes fue de:", cantidadViajes)
        print("El numero total de pasajeros fue de:", pasajeros)

        print('\n--- La cantidad de pasajeros por mes al pais ---\n')
        print(pasajerosXMes)

    def graficarDatos(self):
        """
        Grafica los datos.
        """
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

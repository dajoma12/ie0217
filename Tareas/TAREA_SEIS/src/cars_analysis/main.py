"""
Este es el script principal que coordinará y ejecutará el
análisis de datos. Aquí se importarán y utilizarán las funciones
y clases definidas en regression.py y clustering.py, además de
cualquier otra operación que se desee realizar para el análisis.
"""
from regresion import Regression
from clustering import Clustering
from descargarDatos import DownloadClean


def main():
    # Declara archivo como un objeto de la clase
    archivo = DownloadClean()
    # Decarga el archivo
    archivo.descarga()
    # Guarda el archivo limpio dentro de una variable
    df = archivo.limpieza()

    # Precio del carro por kilometraje con algunos valores filtrados
    sellingKm = df.loc[
        (df['km_driven'] < 2.5e5) & (df['selling_price'] < 3e6),
        ['km_driven', 'selling_price']]

    # Precio del carro por año con algunos valores filtrados
    sellingYear = df.loc[(df['selling_price'] < 3e6),
                         ['year', 'selling_price']]

    # Instancia el primer modelo
    modelo1 = Regression(sellingYear)
    # Datos del modelo
    xlabel = 'Año de venta'
    ylabel = 'Precio del auto'
    title = 'Tendencia de precio con base en los años'
    # Realiza las predicciones lineales y no lineales
    modelo1.makePrediction(xlabel, ylabel, title, color='green', lineal=True)
    modelo1.makePrediction(xlabel, ylabel, title, color='green', lineal=False)

    # Instancia el segundo modelo
    modelo2 = Regression(sellingKm)
    # Datos del modelo
    xlabel = 'Kilometros'
    ylabel = 'Precio del auto'
    title = 'Tendencia de precio con base en los Km'
    # Realiza las predicciones lineales y no lineales
    modelo2.makePrediction(xlabel, ylabel, title, color='orange', lineal=True)
    modelo2.makePrediction(xlabel, ylabel, title, color='orange', lineal=False)

    # Instancia un objeto de tipo cluster
    manager = Clustering(df)
    # Datos de los gráficos
    variable1 = 'km_driven'
    variable2 = 'year'
    xlabel = 'Año'
    ylabel = 'Kilometraje'
    manager.makeCluster(variable2, variable1, xlabel, ylabel)
    manager.makeElbow()
    # Llamado a los métodos
    manager.makeSihouette()

    # Instancia otro objeto de tipo cluster
    manager2 = Clustering(df)
    # Datos de los gráficos
    variable1 = 'selling_price'
    variable2 = 'year'
    xlabel = 'Año'
    ylabel = 'Precio de venta'
    # Llamado a los métodos
    manager2.makeCluster(variable2, variable1, xlabel, ylabel)
    manager2.makeElbow()
    manager2.makeSihouette()


if __name__ == '__main__':
    main()

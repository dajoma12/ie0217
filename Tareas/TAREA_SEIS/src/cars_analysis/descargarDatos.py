from kaggle.api.kaggle_api_extended import KaggleApi
import pandas as pd


class DownloadClean:
    """
    Clase para descargar y limpiar datos de Kaggle.
    """

    def descarga(self):
        """
        Método para descargar un archivo desde Kaggle.
        Este método utiliza la API de Kaggle para autenticarse y descargar
        un archivo desde un conjunto de datos específico.

        Args:
            self: La instancia de la clase.

        Returns:
            None
        """
        # Credenciales de autentificación
        api = KaggleApi()
        api.authenticate()

        # Datos de archivo
        ruta = 'akshaydattatraykhare/car-details-dataset'
        fileName = 'CAR DETAILS FROM CAR DEKHO.csv'
        path = '../'
        try:
            # Descarga el archivo buscado en la ruta dada
            api.dataset_download_file(ruta, fileName, path)
            print(f"El archivo {fileName} ha sido descargado.")

        # En caso de que falle lanza una excepción
        except Exception as e:
            print(f"Ha ocurrido un error: {str(e)}")

    def limpieza(self):
        """
        Método para limpiar un archivo CSV.
        Este método lee un archivo CSV, elimina datos duplicados y nulos,
        y devuelve el DataFrame limpio.

        Args:
            self: La instancia de la clase.

        Returns:
            DataFrame: El DataFrame limpio.
        """
        try:
            # Declaración del nombre del archivo
            nombreArchivo = 'CAR%20DETAILS%20FROM%20CAR%20DEKHO.csv'
            # Lee el archivo
            df = pd.read_csv(f'../{nombreArchivo}')
            # Elimina datos duplicados
            df.drop_duplicates(inplace=True)
            # Elimina datos nulos
            df.dropna(inplace=True)
        except Exception as e:
            print(f"Ha ocurrido un error: {str(e)}")

        return df


if __name__ == '__main__':
    DownloadClean().limpieza()

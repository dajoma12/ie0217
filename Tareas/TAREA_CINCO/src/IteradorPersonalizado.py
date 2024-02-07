class FiltroAerolineaIterator:
    """
    Clase que implementa un iterador para filtrar datos por aerolínea.
    """
    def __init__(self, dataframe, aerolinea):
        """
        Constructor de la clase.

        Args:
            dataframe (DataFrame): El DataFrame que contiene los datos.
            aerolinea (str): El nombre de la aerolínea a filtrar.
        """
        self.dataframe = dataframe  # Se inicializa el dataframe
        self.aerolinea = aerolinea  # Se inicializa la aerelonia
        self.index = 0  # Inicializa el indice con cero

    def __iter__(self):
        """
        Método especial que permite la iteración sobre el objeto.

        Returns:
            FiltroAerolineaIterator: El propio objeto iterador.
        """
        return self

    def __next__(self):
        """
        Método especial que obtiene el siguiente elemento en la iteración.

        Returns:
            DataFrame: La siguiente fila del DataFrame que cumple el criterio
            de filtrado.

        Raises:
            StopIteration: Cuando no hay más elementos que cumplen el criterio
            de filtrado.
        """
        # Itera por todos los elementos del array
        while self.index < len(self.dataframe):
            # busca el elemento del campo index
            dato = self.dataframe.iloc[self.index]
            self.index += 1
            # si el elemento corresponde devuelve el dato
            if dato['Nombre_Aerolinea'] == self.aerolinea:
                # finaliza la iteracion
                return dato
        # lanza un excepcion
        raise StopIteration

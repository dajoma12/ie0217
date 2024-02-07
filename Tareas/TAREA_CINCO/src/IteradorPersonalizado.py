class FiltroAerolineaIterator:
    def __init__(self, dataframe, aerolinea):
        self.dataframe = dataframe
        self.aerolinea = aerolinea
        self.index = 0

    def __iter__(self):
        return self

    def __next__(self):
        while self.index < len(self.dataframe):
            dato = self.dataframe.iloc[self.index]
            self.index += 1
            if dato['Nombre_Aerolinea'] == self.aerolinea:
                return dato
        raise StopIteration

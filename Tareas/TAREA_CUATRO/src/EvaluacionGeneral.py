from TiposAlegias import TiposAlergias


class EvaluacionGeneral:
    """
    @brief Clase que representa una evaluación general de alergias.

    Esta clase calcula y muestra la puntuación general y las alergias
    con nombre pero sin valor, así como las alergias con valor pero sin nombre.
    """
    def __init__(self, listaEvaluada, listaSinNombre, listaSinValor):
        """
        @brief Constructor de la clase EvaluacionGeneral.

        @param listaEvaluada: Lista de alergias a evaluar.
        @param listaSinNombre: Lista de alergias con valor pero sin nombre.
        @param listaSinValor: Lista de alergias con nombre pero sin valor.
        """        
        self.listaEvaluada = listaEvaluada
        self.listaSinNombre = listaSinNombre
        self.listaSinValor = listaSinValor
        self.puntuacion = 0

    def puntuacionGeneral(self):
        """
        @brief Calcula la puntuación general sumando los valores de las
                alergias evaluadas.
        """
        for alergia in self.listaEvaluada:
            self.puntuacion += alergia.valor

    def imprimirInformacion(self):
        """
        @brief Imprime la puntuación general, las alergias con nombre pero
               sin valor, y las alergias con valor pero sin nombre.
        """
        print(f"La puntuacion general es de: {self.puntuacion}")

        print("Las alergías con nombre pero sin valor son: ")
        for alergia in self.listaSinValor:
            print(alergia)

        print("Las alergías con valor pero sin nombre son: ")
        for alergia in self.listaSinNombre:
            print(alergia)


if __name__ == '__main__':
    # Crear instancias de TiposAlergias para simular diferentes situaciones
    tipos_alergias = TiposAlergias("Huevos", 1)
    tipos_alergias.validarAlergia()
    tipos_alergias = TiposAlergias(None, 4)
    tipos_alergias.validarAlergia()
    tipos_alergias = TiposAlergias(None, None)

    # Obtener listas de alergias validas, sin nombre y sin valor
    validas = tipos_alergias.alergiasValidas
    sinNombre = tipos_alergias.nombreNoEncontrado
    sinValor = tipos_alergias.valorNoEncontrado

    # Crear instancia de EvaluacionGeneral y realizar la evaluación
    evalua = EvaluacionGeneral(validas, sinNombre, sinValor)
    evalua.puntuacionGeneral()
    evalua.imprimirInformacion()

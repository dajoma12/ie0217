from TiposAlegias import TiposAlergias


class EvaluacionGeneral:
    def __init__(self, listaEvaluada, listaSinNombre, listaSinValor):
        self.listaEvaluada = listaEvaluada
        self.listaSinNombre = listaSinNombre
        self.listaSinValor = listaSinValor
        self.puntuacion = 0

    def puntuacionGeneral(self):
        for alergia in self.listaEvaluada:
            self.puntuacion += alergia.valor

    def imprimirInformacion(self):
        print(f"La puntuacion general es de: {self.puntuacion}")

        print("Las alergías con nombre pero sin valor son: ")
        for alergia in self.listaSinValor:
            print(alergia)

        print("Las alergías con valor pero sin nombre son: ")
        for alergia in self.listaSinNombre:
            print(alergia)


if __name__ == '__main__':
    tipos_alergias = TiposAlergias("Huevos", 1)
    tipos_alergias.validarAlergia()

    tipos_alergias = TiposAlergias(None, 4)
    tipos_alergias.validarAlergia()

    tipos_alergias = TiposAlergias(None, None)

    validas = tipos_alergias.alergiasValidas
    sinNombre = tipos_alergias.nombreNoEncontrado
    sinValor = tipos_alergias.valorNoEncontrado

    evalua = EvaluacionGeneral(validas, sinNombre, sinValor)
    evalua.puntuacionGeneral()
    evalua.imprimirInformacion()

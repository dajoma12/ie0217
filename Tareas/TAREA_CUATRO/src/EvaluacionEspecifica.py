from Alergias import Alergia


class EvaluacionEspecifica:
    def __init__(self, puntuacion, lista):
        self.puntuacion = puntuacion
        self.lista = lista

    def evaluar_puntuacion(self):
        # este es el número que queremos convertir a binario
        numero_decimal = self.puntuacion
        # la lista para guardar los módulos
        banderas = []
        # mientras el número de entrada sea diferente de cero
        while numero_decimal != 0:
            # se obtiene el módulo y se almacena
            banderas.append(numero_decimal % 2)
            # el cociente pasa a ser el número de entrada
            numero_decimal //= 2

        valor = 0
        alergias = []
        for i in range(len(banderas)):
            if (banderas[i] == 1):
                valor = 2**i
                for k in range(len(self.lista)):
                    if (valor == self.lista[k].valor):
                        alergias.append(self.lista[k].nombre)
        print(alergias)


if __name__ == '__main__':
    # Ejemplo de uso
    alergia50 = Alergia()
    listaAlergias = alergia50.alergias
    # Imprimir todas las alergias
    alergia50.imprimir_alergias()
    evaluar = EvaluacionEspecifica(7, listaAlergias)
    evaluar.evaluar_puntuacion()

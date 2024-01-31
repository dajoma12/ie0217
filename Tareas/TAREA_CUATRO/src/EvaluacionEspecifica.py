from Alergias import Alergia
import timeit
import cProfile


class EvaluacionEspecifica:
    """
    @brief Clase que realiza una evaluación específica de alergias según una
             puntuación dada.

    Evalúa la puntuación convertida a binario y determina las alergias
             asociadas.
    """

    def __init__(self, puntuacion, lista):
        """
        @brief Constructor de la clase EvaluacionEspecifica.

        @param puntuacion: Puntuación a evaluar.
        @param lista: Lista de alergias disponibles.
        """
        self.puntuacion = puntuacion
        self.lista = lista

    def evaluar_puntuacion(self):
        """
        @brief Evalúa la puntuación convertida a binario y determina
                 las alergias asociadas.
        """
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

        valor = 0  # Se declara el valor inicial
        alergias = []  # Lista que contiene los resultados
        # Se itera por cada una de las banderas
        for i in range(len(banderas)):
            # Si la bandera esta levantada
            if (banderas[i] == 1):
                # En cuentra el valor en decimal
                valor = 2**i
                # Y busca si esta dentro de la lista
                for k in range(len(self.lista)):
                    if (valor == self.lista[k].valor):
                        # Si esta lo agrega a la lista valida
                        alergias.append(self.lista[k].nombre)

        print("\nEs alérgico a:")
        # Ciclo que imprime las alergias
        for alergia in alergias:
            print(alergia)


def evaluar_tiempo():
    """
    @brief Metodo utilizado para evaluar los tiempos de ejecucion
            de la clase EvaluacinEspecifica.
    """
    alergia50 = Alergia()
    listaAlergias = alergia50.alergias
    alergia50.imprimir_alergias()
    evaluar = EvaluacionEspecifica(1000000, listaAlergias)
    evaluar.evaluar_puntuacion()


if __name__ == '__main__':
    # tiempo_de_ejecucion = timeit.repeat(evaluar_tiempo, repeat=3, number=1)

    # # Imprimir el tiempo de ejecución
    # print("Tiempos de ejecución: {}".format(tiempo_de_ejecucion))

    # Perfilar el método evaluar_puntuacion() usando cProfile
    cProfile.run("evaluar_tiempo()")

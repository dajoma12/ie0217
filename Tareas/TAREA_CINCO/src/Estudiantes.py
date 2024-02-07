import numpy as np


class Estudiantes:
    """
    Clase para realizar operaciones con datos de estudiantes.
    """
    def __init__(self, datos, materias):
        """
        Constructor de la clase.

        Args:
            datos (numpy.ndarray): Matriz de notas de los estudiantes.
            materias (numpy.ndarray): Array con el nombre de las materias.
        """
        self.datos = datos
        self.materias = materias

    def operacionConNumpy(self):
        """
        Realiza operaciones utilizando la biblioteca NumPy.
        """
        print("\nEl promedio de notas por estudiante")
        for i in range(len(self.datos)):
            print(f"Estudiante {i+1}: {np.mean(self.datos[i])}")

        print("\nEl promedio de notas por materia")
        for i in range(len(self.datos)):
            print(f"{self.materias[i]}: {np.mean(self.datos[:, i])}")

        print("\nLa calificacion maxima de cada estudiante")
        for i in range(len(self.datos)):
            print(f"Estudiante {i+1}: {np.max(self.datos[i])}")

        print("\nSuma total de calificiones por asignatura")
        for i in range(len(self.datos)):
            print(f"{self.materias[i]}: {np.sum(self.datos[:, i])}")


def main():
    """
    La matriz datos tiene como columnas las notas
    de cada estudiantes y de filas las materias en
    orden matematematicas, ingles, español, sociales
    y computación.
    """
    notas = np.array(
        [[40, 80, 70, 60, 50],
         [50, 60, 70, 80, 90],
         [80, 90, 70, 50, 60],
         [60, 80, 70, 50, 90],
         [80, 60, 70, 90, 50]])

    materias = np.array([
        'Matematicas',
        'Ingles',
        'Frances',
        'Sociales',
        'Natacion'
    ])

    estudiantes = Estudiantes(notas, materias)
    estudiantes.operacionConNumpy()


if __name__ == '__main__':
    main()

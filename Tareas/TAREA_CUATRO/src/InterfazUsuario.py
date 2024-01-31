from EvaluacionEspecifica import EvaluacionEspecifica
from EvaluacionGeneral import EvaluacionGeneral
from TiposAlegias import TiposAlergias
from Alergias import Alergia


class Interfaz:
    """
    @brief Clase que representa la interfaz de usuario para interactuar con
             la evaluación de alergias.

    Permite al usuario realizar diferentes acciones relacionadas con la
             evaluación de alergias.
    """

    def menu(self):
        """
        @brief Función que muestra el menú principal y procesa la opción
             seleccionada por el usuario.
        """
        while True:
            print("\n--- Disponemos de las siguientes opciones ---")
            print("1. Ver a qué alergias es sensible")
            print("2. Calcular su puntuación")
            print("3. Ampliar la lista de alergias conocidas")
            print("4. Finalizar el programa...")

            opcion = int(input("Ingrese la opción deseada: "))

            # En caso de que ingresa la opcion 4 finaliza el programa
            if opcion != 4:
                self.procesarOpcion(opcion)
            else:
                print("Cerrando programa...")
                return

    def procesarOpcion(self, opcion):
        """
        @brief Función que procesa la opción seleccionada por el usuario.

        @param opcion: Opción seleccionada por el usuario.
        """
        if opcion == 1:
            print("\n*** Eligio la primera opción ***")
            self.primeraOpcion()
        elif opcion == 2:
            print("\n*** Eligio la segunda opción ***")
            self.segundaOpcion()
        elif opcion == 3:
            print("\n*** Eligio la tercera opción ***")
            self.terceraOpcion()
        else:
            print("\nOpción inválida!\n")

    def primeraOpcion(self):
        """
        @brief Función que solicita el ingreso de una puntuacion
                y con base en eso determina que alergias afectan
                al usuario.
        """
        puntuacion = int(input("\nIngrese la puntuación: "))
        if type(puntuacion) is int:
            # Obtiene la lista de alergias ingresadas
            listaAlergias = Alergia.alergias
            # Crea una instancia
            EE = EvaluacionEspecifica(puntuacion, listaAlergias)
            # Evalua la puntuacion final
            EE.evaluar_puntuacion()
        else:
            print("\nValor inválido... reiniciando programa")

    def segundaOpcion(self):
        """
        @brief Función que solicita nombres y valores de las alergias
                y con base en eso determina la puntuacion final. Ademas
                imprime los valores y nombres que no se pudieron enlazar
        """
        while True:
            print("\n+++ Disponemos de las siguientes opciones +++")
            print("1. Ingresar una alergia")
            print("2. Ver puntuación")

            opcion = int(input("Ingrese la opción deseada: "))
            if opcion == 1:
                print("\n¿Qué tanto conoce de la alergia?")
                print("1. Tanto el nombre como el valor")
                print("2. Solo el nombre")
                print("3. Solo el valor")

                opcion2 = int(input("\nIngrese la opción deseada: "))

                if opcion2 == 1:
                    nombre = input("Ingrese el nombre: ").capitalize()
                    valor = int(input("Ingrese el valor: "))
                    # crea una instancia con los datos ingresados
                    alergia = TiposAlergias(nombre, valor)
                    # valida la alergia
                    alergia.validarAlergia()
                elif opcion2 == 2:
                    nombre = input("Ingrese el nombre: ").capitalize()
                    # crea una instancia con los datos ingresados
                    alergia = TiposAlergias(nombre, None)
                    # valida la alergia
                    alergia.validarAlergia()
                elif opcion2 == 3:
                    valor = input("Ingrese el valor: ")
                    # crea una instancia con los datos ingresados
                    alergia = TiposAlergias(None, valor)
                    # valida la alergia
                    alergia.validarAlergia()
            elif opcion == 2:
                # Se utiliza para acceder a lo metodos
                tipos_alergias = TiposAlergias(None, None)
                # asigna a variables los resultados de las litas
                validas = tipos_alergias.alergiasValidas
                sinNombre = tipos_alergias.nombreNoEncontrado
                sinValor = tipos_alergias.valorNoEncontrado
                # evalua los resultados
                evalua = EvaluacionGeneral(validas, sinNombre, sinValor)
                print("\n-+- Los resultados son los siguientes -+-")
                evalua.puntuacionGeneral()
                evalua.imprimirInformacion()
                return

    def terceraOpcion(self):
        """
        @brief Función que ingresa una nueva alergia al sistema
                para ello solo solicita el nombre y le asigna un
                nuevo valor potencia de dos.
        """
        print("\n+++ Disponemos de las siguientes opciones +++")
        print("1. Ingresar una nueva alergia")
        print("2. Ver la lista completa de alergias")

        opcion = int(input("Ingrese una opción: "))

        if opcion == 1:
            nombreAlergia = input("Ingrese el nombre de la alergia nueva: ")
            # Obtiene el ultimo valor de la alergia ingresada
            valor = Alergia.alergias[-1].valor
            # le asigna el nombre ingresado y un valor potencia de 2
            Alergia(nombreAlergia, valor * 2)
        elif opcion == 2:
            Alergia.imprimir_alergias()
        else:
            print("\nOpción inválida... reiniciando programa")


if __name__ == "__main__":
    interfaz = Interfaz()
    interfaz.menu()

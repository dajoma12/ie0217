from EvaluacionEspecifica import EvaluacionEspecifica
from EvaluacionGeneral import EvaluacionGeneral
from TiposAlegias import TiposAlergias
from Alergias import Alergia


class Interfaz:

    def menu(self):

        while (True):
            print("\n--- Disponemos de las siguientes opciones ---")
            print("1. Ver a que alergias es sencible")
            print("2. Calcular su puntuacion")
            print("3. Ampliar la lista de alergias conocidas")
            print("4. Finalizar el programa...")

            opcion = int(input("Ingrese la opcion deseada: "))

            if opcion != 4:
                self.procesarOpcion(opcion)

            else:
                print("Cerrando programa...")
                return

    def procesarOpcion(self, opcion):

        if opcion == 1:
            print("\n*** Eligio la primera opcion ***")
            self.primeraOpcion()

        elif opcion == 2:
            print("\n*** Eligio la segunda opcion ***")
            self.segundaOpcion()

        elif opcion == 3:
            print("\n*** Eligio la tercera opcion ***")
            self.terceraOpcion()
        else:
            print("\nOpcion invalida!\n")

    def primeraOpcion(self):
        puntuacion = int(input("\nIngrese la puntuacion: "))
        if type(puntuacion) is int:
            listaAlergias = Alergia.alergias
            EE = EvaluacionEspecifica(puntuacion, listaAlergias)
            EE.evaluar_puntuacion()
        else:
            print("\nValor invalido... reiniciando programa")

    def segundaOpcion(self):

        while (True):
            print("\n+++ Disponemos de las siguientes opciones +++")
            print("1. Ingresar una alergia")
            print("2. Ver puntuacion")

            opcion = int(input("Ingrese la opcion deseada: "))
            if opcion == 1:
                print("\nQue tanto conoce de la alergia?")
                print("1. Tanto el nombre como el valor")
                print("2. Solo el nombre")
                print("3. Solo el valor")

                opcion2 = int(input("\nIngrese la opcion deseada: "))

                if opcion2 == 1:
                    nombre = input("Ingrese el nombre: ").capitalize()
                    valor = int(input("Ingrese el valor: "))
                    alergia = TiposAlergias(nombre, valor)
                    alergia.validarAlergia()

                elif opcion2 == 2:
                    nombre = input("Ingrese el nombre: ").capitalize()
                    alergia = TiposAlergias(nombre, None)
                    alergia.validarAlergia()

                elif opcion2 == 3:
                    valor = input("Ingrese el valor: ")
                    alergia = TiposAlergias(None, valor)
                    alergia.validarAlergia()

            elif opcion == 2:
                tipos_alergias = TiposAlergias(None, None)
                
                validas = tipos_alergias.alergiasValidas
                sinNombre = tipos_alergias.nombreNoEncontrado
                sinValor = tipos_alergias.valorNoEncontrado
                evalua = EvaluacionGeneral(validas, sinNombre, sinValor)
                print("\n-+- Los resultados son los siguientes -+-")
                evalua.puntuacionGeneral()
                evalua.imprimirInformacion()
                return
    
    def terceraOpcion(self):
        print("\n+++ Disponemos de las siguientes opciones +++")
        print("1. Ingresar una nueva alergia")
        print("2. Ver la lista completa de alergias")

        opcion = int(input("Ingrese una opcion: "))

        if opcion == 1:
            nombreAlergia = input("Ingrese el nombre de la alergia nueva: ")
            valor = Alergia.alergias[-1].valor
            Alergia(nombreAlergia, valor*2)

        elif opcion == 2:
            Alergia.imprimir_alergias()
        else:
            print("\nValor invalido... reiniciando programa")


if __name__ == "__main__":
    interfaz = Interfaz()
    interfaz.menu()

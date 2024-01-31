class Alergia:
    """
    @brief Clase que representa una alergia con nombre y valor asociado.

    La clase tiene métodos para imprimir la lista de alergias y
    buscar una alergia específica por nombre.
    """
    alergias = []  # Atributo estático

    def __init__(self, nombre='', valor=''):
        """
        @brief Constructor de la clase Alergia.

        @param nombre: Nombre de la alergia.
        @param valor: Valor asociado a la alergia.
        """
        self.nombre = nombre
        self.valor = valor
        Alergia.alergias.append(self)

    @staticmethod  # Metodo estático
    def imprimir_alergias():
        """
        @brief Método estático para imprimir la lista de alergias.
        """
        print("Lista de alergias:")
        for alergia in Alergia.alergias:
            print(f"Nombre: {alergia.nombre}, Valor: {alergia.valor}")

    def imprimir_alergia_especifica(self, nombre_alergia):
        """
        @brief Método para imprimir información de una alergia específica
                 por nombre.

        @param nombre_alergia: Nombre de la alergia a buscar e imprimir.
        """
        for alergia in Alergia.alergias:
            if alergia.nombre == nombre_alergia:
                print(f"Nombre: {alergia.nombre}, Valor: {alergia.valor}")
                return
        print(f"No se encontró la alergia con el nombre '{nombre_alergia}'.")


# Crear instancias de la clase Alergia
alergia1 = Alergia("Huevos", 1)
alergia2 = Alergia("Cacahuetes", 2)
alergia3 = Alergia("Mariscos", 4)
alergia4 = Alergia("Fresas", 8)
alergia5 = Alergia("Tomates", 16)
alergia6 = Alergia("Chocolate", 32)
alergia7 = Alergia("Polen", 64)
alergia8 = Alergia("Gatos", 128)
alergia9 = Alergia("Sardinas", 256)
alergia10 = Alergia("Gluten", 512)
alergia11 = Alergia("Huevo", 1024)
# ----------------------------------
alergia12 = Alergia("Nueces", 2048)
alergia13 = Alergia("Leche", 4096)
alergia14 = Alergia("Soja", 8192)
alergia15 = Alergia("Miel", 16384)
alergia16 = Alergia("Piña", 32768)
alergia17 = Alergia("Ajo", 65536)
alergia18 = Alergia("Maíz", 131072)
alergia19 = Alergia("Kiwi", 262144)
alergia20 = Alergia("Menta", 524288)
alergia21 = Alergia("Gambas", 1048576)
alergia22 = Alergia("Apio", 2097152)
alergia23 = Alergia("Pescado", 4194304)
alergia24 = Alergia("Manzanas", 8388608)
alergia25 = Alergia("Cilantro", 16777216)
alergia26 = Alergia("Aguacate", 33554432)
alergia27 = Alergia("Zanahorias", 67108864)
alergia28 = Alergia("Berenjenas", 134217728)
alergia29 = Alergia("Lentejas", 268435456)
alergia30 = Alergia("Almendras", 536870912)
alergia31 = Alergia("Canela", 1073741824)
alergia32 = Alergia("Altramuces", 2147483648)
alergia33 = Alergia("Mantequilla", 4294967296)
alergia34 = Alergia("Pepino", 8589934592)
alergia35 = Alergia("Cangrejo", 17179869184)
alergia36 = Alergia("Almejas", 34359738368)
alergia37 = Alergia("Anacardos", 68719476736)
alergia38 = Alergia("Coliflor", 137438953472)
alergia39 = Alergia("Pimienta", 274877906944)
alergia40 = Alergia("Arándanos", 549755813888)
alergia41 = Alergia("Pera", 1099511627776)
alergia42 = Alergia("Cerveza", 2199023255552)
alergia43 = Alergia("Guisantes", 4398046511104)
alergia44 = Alergia("Ciruelas", 8796093022208)
alergia45 = Alergia("Trigo", 17592186044416)
alergia46 = Alergia("Higos", 35184372088832)
alergia47 = Alergia("Centeno", 70368744177664)
alergia48 = Alergia("Pistachos", 140737488355328)
alergia49 = Alergia("Cangrejo de río", 281474976710656)
alergia50 = Alergia("Col", 562949953421312)

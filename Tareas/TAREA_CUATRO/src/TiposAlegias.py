from Alergias import Alergia


class TiposAlergias:
    """
    @brief Clase para validar y clasificar alergias según nombre y valor.

    Tiene atributos estáticos para almacenar alergias válidas,
             nombres no encontrados
    y valores no encontrados.
    """

    alergiasValidas = []
    valorNoEncontrado = []
    nombreNoEncontrado = []

    def __init__(self, nombre, valor):
        """
        @brief Constructor de la clase TiposAlergias.

        @param nombre: Nombre de la alergia a validar.
        @param valor: Valor de la alergia a validar.
        """
        self.nombre = nombre
        self.valor = valor

    def validarAlergia(self):
        """
        @brief Valida una alergia comparándola con las alergias existentes.

        Clasifica la alergia como válida, nombre no encontrado o valor
                 no encontrado.
        """
        listaAlergias = Alergia.alergias

        encontrada = False  # Bandera para verificar si se encontró alguna

        for alergia in listaAlergias:
            if self.nombre == alergia.nombre or self.valor == alergia.valor:
                TiposAlergias.alergiasValidas.append(alergia)
                encontrada = True

        if not encontrada:
            if self.nombre is not None:
                TiposAlergias.nombreNoEncontrado.append(self.nombre)
            if self.valor is not None:
                TiposAlergias.valorNoEncontrado.append(self.valor)


# Ejemplo de uso
if __name__ == "__main__":
    tipos_alergias = TiposAlergias("Huevos", 1)
    tipos_alergias.validarAlergia()

    # tipos_alergias = TiposAlergias("Col", None)
    # tipos_alergias.validarAlergia()

    print("Alergias:", tipos_alergias.alergiasValidas)
    print("Nombres no encontrados:", tipos_alergias.nombreNoEncontrado)
    print("Valores no encontrados:", tipos_alergias.valorNoEncontrado)

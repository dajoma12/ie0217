class Person:
    # Es la clase del objeto creado, antes del __init__ existe otro
    def __init__(self, name, age):
        self.name = name  # Nombre
        self.age = age  # Edad
    
    # Funcion que desplega la información
    def display_info(self):
        print(f"\nname: {self.name}\nAge: {self.age}")
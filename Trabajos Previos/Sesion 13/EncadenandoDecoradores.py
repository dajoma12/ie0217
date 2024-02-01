# Definición del decorador 'star'
def star(func):
    def inner(*args, **kwargs):
        # Imprime una línea de asteriscos antes de llamar a la función decorada
        print("*" * 15)
        # Llama a la función original con los argumentos y palabras clave dados
        func(*args, **kwargs)
        # Imprime otra línea de asteriscos después de llamar a la función decorada
        print("*" * 15)
    return inner

def percent(func):
    def inner(*args, **kwargs):
        # Imprime una línea de porcentajes antes de llamar a la función decorada
        print("%" * 15)
        # Llama a la función original con los argumentos y palabras clave dados
        func(*args, **kwargs)
        # Imprime otra línea de porcentajes después de llamar a la función decorada
        print("%" * 15)
    return inner

@star
@percent
def printer(msg):
    print(msg)

printer("Hello")

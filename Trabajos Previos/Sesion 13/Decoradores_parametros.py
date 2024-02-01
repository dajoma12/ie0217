3# define un decorador
def smart_divide(func):
    # define la funcion
    def inner(a, b):
        print("I am going to divide", a, "and", b)
        # verifica si el denominador es cero
        if b == 0:
            print("Whoops! cannot divide")
            return
        # si es cero llama a la funcion
        return func(a, b)
    
    return inner

@smart_divide
def divide(a, b):
    print(a/b)

divide(2, 5)

divide(2, 0)
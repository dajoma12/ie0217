def outer(x):
    def inner(y):
        return x + y
    return inner

add_five = outer(5)
result = add_five(6)
print(result) # prints 11

# Output: 11


def add(x, y):
    return x + y

def calculate(func, x, y):
    return func(x, y)

result = calculate(add, 4, 6)
print(result) # prints 10

def greeting(name):
    def hello():
        return "Hello, " + name + "!"
    return hello
greet = greeting("Atlantis")
print(greet())  # prints "Hello, Atlantis"

# Output: Hello, Atlantis!
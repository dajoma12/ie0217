class Animal:

    # attribute and method of the parent class
    name = ""

    def eat(self):
        print("I can ear")

# inherit from Animal
class Dog(Animal):

    # new method in subclass
    def display(self):
        # access name atribute of superclass using self
        print("My name is ", self.name)

# create an object of the subclass
labrador = Dog()

# access superclass attribute and method
labrador.name = "Rohu"
labrador.eat()

# call subclass method
labrador.display()
class Animal:

    # attribute and method of the parent class
    name = ""

    def eat(self):
        print("I can ear")

# inherit from Animal
class Dog(Animal):

    # override eat() method
    def eat(self):

        # call the eat() method of the superclass using super()
        # super.eat()

        print("I like to eat bones")

# create an object of the subclass
labrador = Dog()

# access superclass attribute and method

# call the eat() method on the labrador object
labrador.eat()
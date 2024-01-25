import math

# sqrt computes the square root
square_root = math.sqrt(4)

print("Square Root of 4 is", square_root)

# pow() comptes the power
power = pow(2, 3)

print("2 to the power 3 is", power)


def add_numers(a = 7, b = 8):
    sum = a + b
    print("Sum:", sum)

# function call with two arguments
add_numers(2, 3)

# function call with one arguments
add_numers(a = 2)

# function call with no arguments
add_numers()

def display_info(first_name, last_name):
    print('First Name:', first_name)
    print('Last Name:', last_name)

display_info(last_name = 'Cartman', first_name = 'Eric')

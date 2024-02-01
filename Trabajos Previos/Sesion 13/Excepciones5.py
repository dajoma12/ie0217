# define python user-defined  exceptions
class InvalidAgeException(Exception):
    "Raised when the input value is less than 18"
    pass

# yoy need to guess this number
number = 18

try:
    input_num = int(input("Enter a number: "))
    if input_num < number:
        raise InvalidAgeException
    else:
        print("Elegible to vote")

except InvalidAgeException:
    print("Exception occurred: Invalid Age")
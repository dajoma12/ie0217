class SalaryNotInRangeError(Exception):
    """
    Exception raised for errors in the input salary

    Attributes:
        salary -- input salary wich caused the error
        message -- explanation of the error
    """
    def __init__(self, salary, message="Salaty is not in (500, 15000) range"):
        self.salary = salary
        self.message = message
        super.()__init__(self.message)

salary = int(input("Enter salary amount: "))
if not 5000 < salary < 15000:
    raise SalaryNotInRangeError(salary)
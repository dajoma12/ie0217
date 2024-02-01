# programa para tratar errores

try:
    numerator = 10
    denominador = 0

    result = numerator/denominador

    print(result)
except:
    print("Error: Denominator cannot be 0")

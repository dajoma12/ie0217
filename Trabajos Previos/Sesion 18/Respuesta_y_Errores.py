import requests
# # # # # # # # # # # #
# Manejo de Repuesta  #
# # # # # # # # # # # #

response = requests.get('https:/jsonplaceholder.tycode.com/todos/1')
print(response.status_code)
print(response.headers)
print(response.json())  # Si la respuesta es JSON


# # # # # # # # # # #
# Manejo de Errores #
# # # # # # # # # # #

try:
    response = requests.get('https://ejemplo.com/pagina-inexistente')
    response.raise_for_status()  # Genera una excepción si hay un error HTTP
    print(response.text)

except requests.exceptions.HTTPError as err:
    print(f"Error HTTP: {err}")

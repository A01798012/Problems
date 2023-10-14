#!/usr/bin/env python3
import requests
import matplotlib.pyplot as plt

# Definir el nombre de usuario y la URL de la API
user_handle = "dunishaaa"
api_url = "https://codeforces.com/api/user.status?handle={}".format(user_handle)

# Hacer la solicitud GET a la API de Codeforces
response = requests.get(api_url)

# Parsear los datos JSON de la respuesta
data = response.json()

# Crear un diccionario vacío para almacenar los ratings de cada problema
problem_ratings = {}

# Iterar a través de cada solución en la respuesta
#print(data["result"][0])
#print(data["result"][0]['problem']['rating'])
for i in range(len(data["result"])):
    # Comprobar si la solución fue aceptada
    if data['result'][i]["verdict"] == "OK" and 'rating' in data["result"][i]['problem']:
        # Obtener el identificador y el rating del problema
        problem_id = str(data['result'][i]["problem"]["contestId"]) + data['result'][i]["problem"]["index"]
        rating = data["result"][i]['problem']['rating']
        # Añadir el rating del problema al diccionario de ratings
        problem_ratings[problem_id] = rating

# Crear una lista de ratings de problemas ordenados de forma ascendente
sorted_ratings = sorted(problem_ratings.values())
# Crear una lista de las frecuencias de cada rating
frequencies = []
count = {}
for i in sorted_ratings:
    if(i in count):
        count[i] += 1
    else:
        count[i] = 1

# Crear una lista de los nombres de cada rating
labels = [str(rating) for rating in sorted(set(sorted_ratings))]
for i in labels:
    frequencies.append(count[int(i)])
# Crear la gráfica de barras
plt.bar(labels, frequencies)

# Establecer el título y las etiquetas de los ejes
plt.title(f"#{sum(frequencies)} problemas resueltos")
plt.xlabel("Rating")
plt.ylabel("#")

# Mostrar la gráfica
plt.savefig('problem_ratings.png')

##plt.show()

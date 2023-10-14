#!/usr/bin/env python3

def naricisista(number):

    numero = []

    for i in number:
        numero.append(int(i))

    numeroF = 0

    for i in range(len(numero)):
        numeroF += 10**i * numero[-i - 1]

    nr = 0

    for i in numero:
        nr += i**len(numero)

    if(nr == numeroF):
        return "Es Narcisista"
    else:
        return "No es Narcisista"



naricisista("153")
naricisista("8208")

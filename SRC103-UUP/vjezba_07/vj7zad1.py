"""
Napisati funkciju koja generira cijeli broj u rasponu od 1 do 100. Funkcija generira parni ili neparni broj
ovisno o dobivenom parametru p = 'par' ili 'nepar'. Funkcija se oslanja na funkciju random.randint().
"""

from random import randint


def rand_parni(p):
    if p == "par":
        p = True
    elif p == "nepar":
        p = False
    else:
        p = True  # err param

    while True:
        broj = randint(1, 100)
        if broj % 2 == 0 and p:
            return broj
        elif not (broj % 2 == 0 or p):
            return broj


print(rand_parni(False))
print(rand_parni("par"))
print(rand_parni("nepar"))
print(rand_parni("njsjdkfsdfsdfsfspar"))

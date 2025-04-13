"""
Napisati funkciju koja čita dva po dva broja dok god korisnik ne
upiše jedan negativni i jedan pozitivni broj. Funkcija nakon toga
vraća ta dva broja.
"""


def function():
    while True:
        x = int(input("x: "))
        y = int(input("y: "))

        if (x > 0) != (y > 0):
            return x, y


print(function())

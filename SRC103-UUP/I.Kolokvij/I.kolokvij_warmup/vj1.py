"""
Napisati funkciju koja prima broj kao parametar i ispisuje zvjezdice
i razmake sve u jednom redu. Funkcija za svaki bit broja postavljen
na 1 ispisuje zvjezdicu, a za svaki bit postavljena na 0 ispisuje
razmak.
"""


def temp(broj):
    while broj > 0:
        if broj & 1 == 1:
            print("*", end="", sep="")
        else:
            print("-", end="", sep="")
        broj = broj >> 1
    print("\n")

"""
Napisati funkciju koja prima listu brojeva i vraća boolean. Funkcija vraća True samo ako su sve
vrijednosti u listi poredane po veličini (rastući niz).
"""


def function(list=[]):
    prev = list[0]

    for i in list:
        if prev > i:
            return False
        prev = i
    return True


print(function([1, 2, 3]))
print(function([1, 3, 3, 213]))
print(function([1, 3, 2]))

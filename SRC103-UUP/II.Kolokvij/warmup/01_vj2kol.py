"""
1. Napisati funkciju koja prima listu brojeva.
Funkcija vraća listu koja sadrži svaki broj samo jednom.
Npr. za listu [6,5,6,4,8,4], funkcija vraća [6,5,4,8].
"""


def function(list_a):
    list_b = []
    for i in list_a:
        if i not in list_b:
            list_b.append(i)
    return list_b


print(function([6, 5, 6, 4, 8, 4]))

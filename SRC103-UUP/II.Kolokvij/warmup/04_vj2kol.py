"""
Napisati funkciju koja prima listu brojeva i listu stringova.
Funkcija ispisuje samo stringove na indeksima zadanim u listi brojeva.
"""


def function(list_a, list_b):
    for i in list_a:
        print(list_b[i])


function(
    [0, 2, 3],
    ["a", "b", "c", "d", "e", "f", "g"],
)

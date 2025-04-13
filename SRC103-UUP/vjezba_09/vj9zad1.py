"""
Napisati funkciju koja prima listu brojeva i ispisuje samo parne elemente. Napisati drugu funkciju koja
prima listu brojeva i ispisuje samo elemente na parnim indeksima.
"""


def function(list=[]):
    for i in list:
        if i % 2 == 0:
            print(i, end=", ")


def function_two(list=[]):
    for i in range(len(list)):
        if i % 2 == 0:
            print(list[i], end=", ")


function([1, 2, 3, 4, 5, 6, 7, 8, 9, 0])
print()
function_two([1, 2, 3, 4, 5, 6, 7, 8, 9, 0])

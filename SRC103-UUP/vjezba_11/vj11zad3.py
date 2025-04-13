"""
Napisati funkciju koja prima listu brojeva i vraća listu booleana. Svaki element u listi booleana (osim
prvog) će odgovarati jednom elementu u listi brojeva. Element će biti True ako je broj na istom
indeksu veći od broja na prethodnom indeksu.
"""

"""
list_a = [1, 2, 3, 1, 0]
[None, 2>1, 3>1, 1>3, 0>1]
list_b = [None, True, True, False, False]
"""


def function(list_a):
    list_b = []
    for i in range(1, len(list_a)):
        # print(f"{i}|| {list_a[i]} > {list_a[i-1]}")
        list_b.append(list_a[i] > list_a[i - 1])

    return list_b


print(function([1, 2, 3, 1, 0]))

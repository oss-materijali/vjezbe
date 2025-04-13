"""
Napisati funkciju koja prima listu brojeva i vraća dva booleana. Prvi boolean je True samo ako su sve
vrijednosti u listi jednake, drugi boolean je True samo ako su barem dvije vrijednosti u listi jednake.
"""


def function(list=[]):
    all_equal = True
    atleast_2_equal = 0

    for i in range(len(list)):
        for j in range(len(list)):
            if i == j:
                continue

            if list[i] != list[j]:
                all_equal = False

            if list[i] == list[j]:
                atleast_2_equal += 1

    if atleast_2_equal >= 2:
        atleast_2_equal = True
    else:
        atleast_2_equal = False

    return all_equal, atleast_2_equal


print(function([1, 2, 3]))
print(function([1, 2, 2]))
print(function([1]))
print(function([1, 1, 1]))

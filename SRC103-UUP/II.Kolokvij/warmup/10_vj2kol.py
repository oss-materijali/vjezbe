"""
Napisati funkciju koja prima listu brojeva.
Funkcija vraća listu brojeva iz primljene liste koji su djeljivi sa svim prethodnim brojevima iz primljene liste.
Npr. za listu [ 2, 3, 6, 12, 15 ], funkcija vraća listu [6, 12].
"""


def function(list_a):
    list_b = []

    for i in range(1, len(list_a)):
        temp = True
        for prev in list_a[:i]:
            if list_a[i] % prev != 0:
                temp = False
        if temp:
            list_b.append(list_a[i])

    return list_b


print(function([2, 3, 6, 12, 15]))

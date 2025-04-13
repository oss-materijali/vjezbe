"""
Napisati funkciju koja prima listu brojeva i listu booleana jednake dužine.
Lista booleana ima točno dva elementa postavljena na True.
Ta dva elementa označavaju početak i kraj liste brojeva koju funkcija treba „izbaciti“ iz originalne liste (funkcija vraća novu listu).
Na primjer, za liste [ 6, 2, 8, 4, 9 ] i [ F, T, F, T, F ], funkcija vraća listu [ 6, 9 ].
"""


def function(list_a, list_b):
    list_c = []

    if len(list_a) != len(list_b):
        return "Err: nejednaka duzina listi"

    temp = 0
    for i in range(len(list_b)):
        if list_b[i]:
            list_c.append(list_a[i])
            temp += 1
    if temp != 2:
        return "Err: nema dva true statementa lista booleana"

    return list_c


print(function([6, 2, 8, 4, 9], [False, True, False, True, False]))

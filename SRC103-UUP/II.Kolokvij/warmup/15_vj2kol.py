"""
Napisati funkciju koja prima dvije liste brojeva jednake dužine.
Funkcija vraća novu listu sastavljenu od brojeva koji se uzimaju iz primljenih lista.
Funkcija za svaki element u novoj listi bira manji od dva elementa u pripremljenim listama na istom indeksu.
"""


def function(list_a, list_b):
    list_c = []
    if len(list_a) != len(list_b):
        return "Err: liste nisu jednako duzine"
    for i in range(len(list_a)):
        temp = 0
        if list_a[i] < list_b[i]:
            temp = list_a[i]
        else:
            temp = list_b[i]

        list_c.append(temp)

    return list_c


print(function([1, 0, 2], [2, 0, 1]))

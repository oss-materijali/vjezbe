"""
Napisati funkciju koja prima dva stringa sastavljena od cijelih pozitivnih brojeva odvojenih zarezom.
Oba stringa sadrže isti broj brojeva.
Funkcija vraća string (istog formata) gdje su elementi zbroj dva broja iz prvog i drugog stringa.
Npr. za „3,14,2,10“ i „6,11,5,5“, funkcija vraća „9,25,7,15“.
"""


def function(string_a, string_b):
    list_a = string_a.split(",")
    list_b = string_b.split(",")
    list_c = []

    if len(list_a) != len(list_b):
        return "Err: stringovi nemaju isti broj brojeva"

    for i in range(len(list_a)):  # or list_b
        list_c.append(str(int(list_a[i]) + int(list_b[i])))

    return ",".join(list_c)


print(function("3,14,2,10", "6,11,5,5"))

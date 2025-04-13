"""
Napisati funkciju koja prima dvije liste riječi. Funkcija vraća rječnik koji sadrži riječi iz prve liste kao
ključeve i boolean vrijednosti koja označava da li se riječ pojavljuje u drugoj listi.
"""


def function(list_a, list_b):
    dict_a = {}

    for i in list_a:
        dict_a[i] = i in list_b

    return dict_a


print(function(["a", "b", "c", "d"], ["a", "c"]))

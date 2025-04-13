# temp
"""
Napisati funkciju koja prima rječnik sa stringovima kao ključevima i listama brojeva kao vrijednostima.
Za svaki ključ u rječniku funkcija računa najveći broj iz pridružene liste.
Funkcija vrača rječnik sastavljen od istih ključeva i pridruženih najvećih brojeva.
"""


def function(dict_a):
    temp = 0
    for k, v in dict_a.items():
        for i in v:
            if i > temp:
                temp = i
        dict_a[k] = temp

    return dict_a


dict_a = {
    "ja": [1, 2, 3],
    "mi": [6, 2, 3],
    "vi": [9, 3],
}

print(function(dict_a))

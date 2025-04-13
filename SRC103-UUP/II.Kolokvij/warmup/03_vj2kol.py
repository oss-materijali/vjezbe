# temp
"""
Napisati funkciju koja prima rječnik koji kao ključeve ima brojeve, a kao vrijednosti liste brojeva.
Funkcija vraća True ako je svaki ključ jednak zbroju pridružene liste.
"""


def function(dict_a):
    for k, v in dict_a.items():
        sum_a = 0
        for i in v:
            sum_a += i
        if k != sum_a:
            return False

    return True


dict_a = {
    4: [1, 2, 1],
    7: [7],
    6: [3, 3, 1],
}
dict_b = {
    4: [1, 2, 1],
    7: [7],
    6: [3, 3],
}

print(function(dict_a))
print(function(dict_b))

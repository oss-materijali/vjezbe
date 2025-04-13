"""
Napisati funkciju koja prima rječnik koji kao ključeve ima brojeve, a kao vrijednosti liste brojeva.
Funkcija vraća True ako je svaki ključ jednak prosjeku brojeva u pridruženoj listi.
"""


def function(dict_a):
    for k, v in dict_a.items():
        if len(v) <= 0:
            return "Err: lista ima 0 elemenata"
        sum_a = 0
        for i in v:
            sum_a += i
        if sum_a / len(v) != k:
            return False

    return True


dict_a = {
    1: [1, 1, 1, 1],
    2: [2, 2],
}
dict_b = {
    1: [1, 1],
    2: [2, 2, 3],
}
print(function(dict_a))
print(function(dict_b))

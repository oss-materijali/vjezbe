"""
Napisati program koji od korisnika čita string koji predstavlja tri cijela broja odvojena razmakom.
Ako je string ispravnog formata (npr. "12 45 16"), program ispisuje zbroj brojeva.
U suprotnom program ispisuje poruku grešci.
"""


def function(string_a):
    sum_a = 0

    list_a = string_a.split(" ")
    for i in list_a:
        try:
            i = int(i)
        except ValueError as e:
            return "Greska: " + str(e)
        sum_a += i

    return sum_a


print(function("12 45 16"))
print(function("12 4a 16"))

"""
Napisati rekurzivnu funkciju koja vraća zbroj svih brojeva između dva broja koja dobije kao parametre.
"""


def function(x, y):
    if x == y:
        return x

    if x < y:
        return x + function(x + 1, y)
    else:
        return x + function(x - 1, y)


print(function(1, 5))
print(function(5, 1))

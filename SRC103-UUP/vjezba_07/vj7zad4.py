"""
Napisati rekurzivnu funkciju koja prima kao parametar pozitivan cijeli broj i vraća zbroj svih parnih
brojeva do tog broja.
"""


def function(number, sum=0, is_even=False):
    if number <= 1:
        return sum

    if is_even or number % 2 == 0:
        sum += number
        return function(number - 2, sum, True)
    else:
        return function(number - 1, sum, True)


print(function(10))

"""
Napisati funkciju koja prima cijeli broj i vraća koliko taj broj ima djelitelja. Npr. za 15, funkcija vraća 4
(za 1, 3, 5 i 15). Napisati pomoćnu funkciju djelitelj koja provjerava je li broj djelitelj drugog broja
(funkcija vraća boolean).
"""


def djelitelj(numerator, denominator):
    if numerator % denominator == 0:
        return True
    return False


def number_of_denominator(number):
    counter = 0
    for i in range(1, number + 1):
        if djelitelj(number, i):
            counter += 1
    return counter


print(number_of_denominator(15))

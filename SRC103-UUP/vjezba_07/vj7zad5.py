"""
Napisati rekurzivnu funkciju koja ispisuje sve bitove nekog broja.
"""


def function(number):
    if number <= 0:
        return

    if number & 1:
        print("1", end="")
    else:
        print("0", end="")

    return function(number >> 1)


function(0b10110101)

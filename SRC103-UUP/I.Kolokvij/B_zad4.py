"""
4. Napisati rekurzivnu funkciju koja ra?una potenciju broja 2 (bez
upotrebe ** operatora) za neku pozitivnu, cjelobrojnu potenciju p.
brojem
"""


def function(p, x=2):
    if p == 1:
        return x
    print(p, x)
    return function(p - 1, x + x)


print(function(6))

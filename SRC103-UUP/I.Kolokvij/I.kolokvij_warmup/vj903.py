"""
Napisati rekurzivnu funkciju koja prima dva broja i vraća koliko se
znamenki brojeva razlikuju. Na primjer za brojeve 36415 i 32816, funkcija
vraća 3.
"""


# def function(x, y):
#     counter = 0
#
#     while True:
#         if x % 10 != y % 10:
#             counter += 1
#
#         x = x // 10
#         y = y // 10
#
#         if (x, y) == (0, 0):
#             return counter


def function(x, y):
    if x == 0 and y == 0:
        return 0

    if x % 10 != y % 10:
        difference = 1
    else:
        difference = 0

    return difference + function(x // 10, y // 10)


print(function(36415, 32816))

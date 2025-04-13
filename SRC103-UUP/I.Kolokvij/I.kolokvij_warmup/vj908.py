"""
Napisati rekurzivnu funkciju djelitelji() koja ispisuje sve djelitelje broja 333.
"""


def function(x):
    if x == 1:
        return 1

    if 333 % x == 0:
        print(x)
    return function(x - 1)


# for i in range(333, 0, -1):
#     if 333 % i == 0:
#         print(i)

function(333)

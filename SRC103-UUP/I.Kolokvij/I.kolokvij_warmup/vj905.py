"""
Napisati rekurzivnu proceduru koja uzima broj te ga ispisuje zrcalno. Npr. 12345 ->54321 .
"""


def function(x, reverse_x=0):
    if x == 0:
        return reverse_x

    last_digit = x % 10
    reverse_x = reverse_x * 10 + last_digit

    return function(x // 10, reverse_x)


print(function(12345))
print(function(53217234892))

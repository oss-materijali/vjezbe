"""
Napisati funkciju koja prima dva broja sa jednakim brojem znamenki.
Funkcija vraća koliko je znamenki prvog broja veće od znamenki
drugog broja.
"""


def function(x, y):
    counter = 0

    while True:
        if x % 10 == y % 10:
            counter += 1

        x = x // 10
        y = y // 10

        if x == 0 or y == 0:
            if (x, y) == (0, 0):
                return counter
            return False


print(function(12345, 12345))
print(function(1234, 12345))
print(function(13335, 12345))
print(function(2345, 12345))
print(function(0, 0))
print(function(77220, 17210))

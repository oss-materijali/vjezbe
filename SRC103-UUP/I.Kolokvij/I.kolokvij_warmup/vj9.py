"""
Napisati funkciju koja čita dva po dva broja dok god korisnik ne unese
dva broja koja su oba veća od prethodna dva broja.
Funkcija nakon toga vraća ta dva broja. Prva dva unesena broja se ne vraćaju.
"""


def function():
    first_iteration = True

    x, y = 0, 0

    while True:
        if x < y:
            x, y = y, x
        prev_max_xy = x

        x = int(input("x: "))
        y = int(input("y: "))

        if first_iteration:
            first_iteration = False
            continue

        if x > prev_max_xy and y > prev_max_xy:
            return x, y


print(function())

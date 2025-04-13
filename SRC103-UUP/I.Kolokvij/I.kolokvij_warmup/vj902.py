"""
Napisati funkciju koja prima 2D koordinatu kao par pozitivnih cijelih brojeva.
Funkcija ispisuje sve koordinate između (0,0) i te koordinate.
Na primjer, za (2,3) ispisuje (0,0), (0,1), (0,2), (1,0), (1,1) i (1,2).
"""


def function(x, y):
    if x < 0 or y < 0:
        return False

    print("Izmedju (", x, ",", y, "): ")

    for i in range(x):
        for j in range(y):
            print(i, j)


function(2, 3)

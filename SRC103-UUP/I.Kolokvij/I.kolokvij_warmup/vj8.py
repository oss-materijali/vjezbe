"""
Napisati funkciju koja čita tri po tri broja dok god korisnik ne upiše jedan negativni,
jedan pozitivni i 0 u bilo kojem redoslijedu. Funkcija nakon toga vraća ta tri broja.
"""


def function():
    while True:
        x = int(input("x: "))
        y = int(input("y: "))
        z = int(input("z: "))

        if x * y * z == 0:
            if (x * y) < 0 or (y * z) < 0 or (z * x) < 0:
                return x, y, z


print("kappa chungus: ", function())

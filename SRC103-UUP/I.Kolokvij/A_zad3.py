"""
3. Napisati funkciju koja ?ita dva po dva broja dok god korisnik ne
ijedan
upise jedan negatiunkoia Cin pozitivni brol. Funkcija nakon toge
vra?a ta dva broja.
"""


def function():
    while True:
        x = int(input("x: "))
        y = int(input("y: "))

        if (x < 0) != (y < 0):
            return x, y


function()

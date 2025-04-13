"""
Napisati funkciju veca2() koja vraća veću vrijednost između dvije.
Napisati funkciju veca5() koja vraća najveću vrijednost od 5
vrijednosti a koja ne smije koristiti odluke (npr. if).
"""


def veca2(x, y):
    if x > y:
        return x
    else:
        return y


def veca5(x, y, z, w, q):
    xy = veca2(x, y)
    zw = veca2(z, w)

    xyq = veca2(xy, q)

    return veca2(xyq, zw)


print(veca2(2, 5))
print(veca5(1, 20, 3, 5, 4))

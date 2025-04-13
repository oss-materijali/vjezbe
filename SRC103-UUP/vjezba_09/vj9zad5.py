"""
Napisati funkciju koja prima dvije liste brojeva i koja računa srednju vrijednost brojeva prve liste, a
ispisuje brojeve iz druge liste koji su veći od izračunane srednje vrijednosti.
"""


def function(first=[], second=[]):
    sum = 0
    avg = 0
    for i in first:
        sum += i
    if len(first) != 0:
        avg = sum / len(first)

    for i in second:
        if i > avg:
            print(i, end=" ")

    print("\n")


function([0, 9], [0, 1, 2, 3, 4, 5, 6, 7, 8, 9])
function([], [0, 1, 2, 3, 4, 5, 6, 7, 8, 9])

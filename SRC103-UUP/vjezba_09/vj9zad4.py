"""
Napisati funkciju koja prima dvije liste brojeva i koja ispisuje brojeve iz prve liste koji su djeljivi sa 3, a
ujedno se nalaze i u drugoj listi.
"""


def function(first=[], second=[]):
    for i in first:
        if i % 3 == 0 and (i in second):
            print(i, end=" ")


function([3, 6, 9, 12], [6, 12, 7])

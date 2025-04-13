"""
Napisati funkciju koja prima listu brojeva i listu stringova. Funkcija ispisuje samo stringove na indeksima
zadanim u listi brojeva.
"""


def function(num_list=[], str_list=[]):
    for i in num_list:
        print(str_list[i], end=" ")


function([2, 3, 4], ["A", "B", "C", "D", "E", "F"])

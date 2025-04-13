"""
Napisati funkciju koja prima dvije liste riječi. Funkcija vraća listu riječi koje se pojavljuju u obje liste.
"""


def function(first_list=[], second_list=[]):
    equal_list = []
    for i in first_list:
        if i in second_list:
            equal_list.append(i)
    return equal_list


print(function(["C", "D"], ["A", "B", "C", "D"]))

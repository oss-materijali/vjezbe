"""
Napisati funkciju koja prima listu parova i vraća dvije liste. Prva lista sadrži samo prve elemente parova,
a druga lista druge elemente parova.
"""


def function(tuple_list=[]):
    first_tuple_elem = []
    second_tuple_elem = []

    for i in tuple_list:
        first_tuple_elem.append(i[0])
        second_tuple_elem.append(i[1])

    return first_tuple_elem, second_tuple_elem


print(function([(1, "A"), ("B", 2), (3, "C", "X")]))

"""
Napisati funkciju koja prima jedan string.
String može biti „X plus Y“ ili „X minus Y“, gdje su X i Y dva cijela broja (mogu imati više znamenki ili predznak).
Funkcija vraća zbroj ili razliku brojeva X i Y.
"""


def function(string_a):
    minus = False

    if "plus" in string_a:
        list_a = string_a.split("plus")
    elif "minus" in string_a:
        minus = True
        list_a = string_a.split("minus")
    else:
        return "Err: nema matematicke operacije"

    for i in range(len(list_a)):
        try:
            list_a[i] = int(list_a[i])
        except ValueError:
            return "Err: nevaljan string"

    if minus:
        return list_a[0] - list_a[1]
    return list_a[0] + list_a[1]


print(function("2 plus 2"))
print(function("2 minus 10"))
print(function("2 sjdkafljs 10"))
print(function("2 plus 1a"))

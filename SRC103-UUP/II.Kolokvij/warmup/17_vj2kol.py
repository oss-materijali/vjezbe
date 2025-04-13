"""
Napisati funkciju koja prima string koji predstavlja cijele brojeve odvojene razmakom.
Brojevi mogu biti negativni (imati ’-’ ispred sebe).
Funkcija vraća koliko brojeva je zapisano u stringu.
Primjer stringa: "3 62 -12 8".
"""


def function(string_a):
    list_a = string_a.split(" ")
    for i in list_a:
        try:
            i = int(i)
        except ValueError:
            return "Err: nije valjan string"
    counter = len(list_a)
    return counter


print(function("3 62 -12 8"))

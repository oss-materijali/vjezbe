"""
Napisati funkciju koja prima jedan string i dva broja A i B.
Funkcija vraća True ako string sadrži A samoglasnika i B suglasnika.
Npr. za string „ab cd e“, A=2 i B=3, funkcija vraća True.
"""


def function(string_a, a, b):
    SAMOGLASNICI = "aeiou"
    counter_a = 0
    counter_b = 0

    string_a = string_a.lower()

    for c in string_a:
        if c in SAMOGLASNICI:
            counter_a += 1
        elif c in " ,.":
            pass
        else:
            counter_b += 1

    return counter_a == a and counter_b == b


print(function("ab cd e", 2, 3))
print(function("ab cd b", 2, 3))

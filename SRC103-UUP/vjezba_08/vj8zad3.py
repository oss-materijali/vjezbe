"""
Napisati iterativnu i rekurzivnu verziju funkcije za ispis broja u heksadecimalnom obliku (baza 16).
Napisati pomoćnu funkciju koja će umjesto broja 10, 11, .. 15 ispisati odgovarajuće slovo 'A', 'B' .. 'F'.
"""


def decimal_to_hex_coding(number):
    HEX_CODE = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, "A", "B", "C", "D", "E", "F"]

    if number > 15 or number < 0:
        return None

    return HEX_CODE[number]


def iterative_dec_to_hex(number):
    while number > 0:
        tmp = decimal_to_hex_coding(number & 0xF)
        print(tmp, end="")
        number = number >> 4


def recursive_dec_to_hex(number):
    if number <= 0:
        return
    print(decimal_to_hex_coding(number & 0xF), end="")
    return recursive_dec_to_hex(number >> 4)


iterative_dec_to_hex(0xFF00A9)
print()
recursive_dec_to_hex(0xFD80A1)

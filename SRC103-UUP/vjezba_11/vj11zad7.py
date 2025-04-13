"""
Napisati program koji telefonski broj tipa 0800-CALL-ME pretvara u telefonski broj sastavljen samo od
znamenki i povlaka. Pretvaranje se vrši uz pomoć rječnika koji za svako slovo definira odgovarajuću
znamenku (slovima 'a', 'b' i 'c' odgovara znamenka 1, ...).

0800-CALL-ME
0800-2255-63
"""

TELEPHONE_DICT = {
    "abc": 2,
    "def": 3,
    "ghi": 4,
    "jkl": 5,
    "mno": 6,
    "pqrs": 7,
    "tuv": 8,
    "wxyz": 9,
}


def decode(word):
    if word in "".join(TELEPHONE_DICT.keys()):
        temp = [v for k, v in TELEPHONE_DICT.items() if word in k]
        return temp[0]
    return word


def convert_to_phone_number(number):
    number = number.lower()
    phone_number = []

    for i in number:
        i = decode(i)

        phone_number.append(str(i))

    return "".join(phone_number)


print("0800-CALL-ME")
print(convert_to_phone_number("0800-CALL-ME"))
print("0800-ZA-DOM")
print(convert_to_phone_number("0800-ZA-DOM"))

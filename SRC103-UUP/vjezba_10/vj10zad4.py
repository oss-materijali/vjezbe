"""
Napisati funkciju koja prima string i vraća novi string koji nastaje tako da se iz primljenog stringa
izbace svi zarezi.
"""


def function(str=""):
    new_str = ""
    for i in str:
        if i != ",":
            new_str += i
    return new_str


print(function("a, ,,,,,,,,,,b, c, d,e,f"))

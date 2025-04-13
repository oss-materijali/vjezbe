"""
Napisati funkciju koja prima listu brojeva i dva broja M i N koji predstavljaju broj redaka i dužinu retka.
Funkcija vraća novu matricu (veličine MxN određene brojem redaka i dužinom retka)
koja sadrži sve brojeve iz liste i ostatak popunjen nulama.
"""


def function(list_a, m, n):
    matrix = []

    # makes sure there is no indexing error
    if len(list_a) > m * n:
        return "Err: list bigger than matrix"
    elif len(list_a) < m * n:
        # fills rest of list with zeros
        while len(list_a) < m * n:
            list_a.append(0)

    offset = 0
    for i in range(m):
        temp = []
        for e in list_a[offset : n + offset]:
            temp.append(e)
        offset += n
        matrix.append(temp)

    return matrix


list_a = [1, 2, 3, 4, 5]
print(list_a)
print(function(list_a, 3, 2))
print(function(list_a, 3, 2)[1][1])

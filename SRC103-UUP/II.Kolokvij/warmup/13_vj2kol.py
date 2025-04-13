"""
Napisati funkciju koja prima matricu (listu lista) i vraća listu sastavljenu od svih brojeva u matrici.
"""


def function(matrix):
    list_a = []
    for m in matrix:
        for n in m:
            list_a.append(n)
    return list_a


matrix_a = [
    [1, 2],
    [3, 4],
]

print(function(matrix_a))

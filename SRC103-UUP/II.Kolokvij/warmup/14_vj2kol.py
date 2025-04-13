"""
Napisati funkciju koja prima dvije matrice (liste lista) i
vraća True ako su obje matrice jednake po sadržaju i dimenzijama.
"""


def function(matrix_a, matrix_b):
    return matrix_a == matrix_b


matrix_a = [
    [1, 2],
    [2, 3],
]
matrix_b = [
    [1, 2],
    [2, 3],
]

print(function(matrix_a, matrix_b))

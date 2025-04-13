"""
Napisati funkciju koja prima matricu (liste lista) i
vraća True ako je prva matrica jednaka transponiranoj drugoj matrici (retci i kolone su joj zamijenjene).
"""


def function(matrix):
    t_matrix = []

    for m in range(len(matrix[0])):
        temp = []
        for n in range(len(matrix)):
            temp.append(matrix[n][m])
        t_matrix.append(temp)

    # print(matrix)
    # print(t_matrix)

    return matrix == t_matrix


matrix_a = [
    [1, 2],
    [2, 3],
]
matrix_b = [
    [1, 3],
    [2, 1],
]

print(function(matrix_a))
print(function(matrix_b))

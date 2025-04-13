"""
Napisati funkciju koja prima paran broj N i vraća matricu veličine NxN ispunjenu sa jedinicama i nulama.
Gornja polovica matrice je ispunjena jedinicama.
"""


def function(n):
    if n & 1:
        return "Err: neparan n"
    matrix = []
    for r in range(n):
        temp = []
        for c in range(n):
            if r < n / 2:
                temp.append(1)
            else:
                temp.append(0)

        matrix.append(temp)

    return matrix


print(function(4))
print(function(2))
print(function(5))

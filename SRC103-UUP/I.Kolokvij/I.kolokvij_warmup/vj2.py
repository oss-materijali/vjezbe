"""
Napisati program koji od korisnika čita 3 broja.
Program ispisuje sve brojeve između prvog i drugog unesenog broja koji su djeljivi sa trećim brojem.
"""

x = int(input("x:"))
y = int(input("y:"))
div = int(input("div:"))

if x > y:
    x, y = y, x

if div == 0:
    div = 1

for i in range(x + 1, y):
    if i % div == 0:
        print(i)

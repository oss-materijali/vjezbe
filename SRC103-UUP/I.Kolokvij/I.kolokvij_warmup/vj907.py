"""
Napisati program koji ispisuje broj 7. Visina (= širina) je određena unosom korisnika.
"""


def draw_print(x=""):
    print(x, end="", sep="")


y = int(input("visina: "))
x = y

for j in range(y):
    for i in range(x):
        if j == 0:
            draw_print("*")
            continue
        if y - i - 1 == j:
            draw_print("*")
            continue

        draw_print("-")

    print()

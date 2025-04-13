"""
Napisati program koji ispisuje slovo O, visine 8 i dužine 4.
"""


def draw_print(x=""):
    print(x, end="", sep="")


y = 8
x = 4

for j in range(y):
    for i in range(x):
        if j == 0 or j == y - 1:
            draw_print("*")
            continue
        if i == 0 or i == x - 1:
            draw_print("*")
            continue

        draw_print("-")

    print()

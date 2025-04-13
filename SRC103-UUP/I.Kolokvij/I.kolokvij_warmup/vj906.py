"""
Napisati program koji za neparnu visinu ispisuje slovo S.
"""


def draw_print(x=""):
    print(x, end="", sep="")


height = int(input("visina: "))
width = height

# the coordinates are completely and utterly fucked...
# and should be swapped, but whateve man

for i in range(width):
    for j in range(height):
        if i == 0 or i == height - 1:
            draw_print("*")
            continue
        if height // 2 >= i and j == 0:
            draw_print("*")
            continue
        if height // 2 == i:
            draw_print("*")
            continue
        if height // 2 <= i and j == width - 1:
            draw_print("*")
            continue
        draw_print("-")

    print()

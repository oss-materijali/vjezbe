"""
zvjezdica = 1
minus = 0
rekurzija
"""


def draw_print(x):
    print(x, end="", sep="")


y = 11
x = y - 5

for i in range(x):
    for j in range(y):
        # draw with if statements

        draw_print("-")
    draw_print("\n")

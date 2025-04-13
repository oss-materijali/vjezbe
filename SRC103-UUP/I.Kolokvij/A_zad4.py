"""
4 Napisati program koji od korisnika ?ita (neparnu) visinu slova i
zvjezdicama ispisuje slovo V.
"""


def draw_print(x):
    print(x, end="", sep="")


while True:
    y = int(input("visina: "))
    if y < 0:
        print("Negativna duljina!")
        continue
    break

x = y

for j in range(y):
    for i in range(x):
        # Drawing with if statements

        if i == j // 2:
            draw_print("*")
            continue
        if x - 1 - i == j // 2:
            draw_print("*")
            continue

        draw_print("-")
    draw_print("\n")

"""
2. Napisati program koji od korisnika ?ita (neparnu) visinu slova
zvjezdicama ispisuje slovo F.
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
        if i == 0 or j == 0:
            draw_print("*")
            continue  # border: left, top

        if j == y // 2 and i <= x // 2:
            draw_print("*")
            continue  # middle line, halfed

        draw_print("-")
    draw_print("\n")

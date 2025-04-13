"""
2. Napisati program koiji od korisnika cita (neparnu) visinu slova i
zvjezdicama ispisuje slovo H.
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
        if i == 0 or i == x - 1:
            draw_print("*")
            continue  # print | ... |

        if j == y // 2:
            draw_print("*")
            continue  # print |-|

        draw_print("-")
    draw_print("\n")

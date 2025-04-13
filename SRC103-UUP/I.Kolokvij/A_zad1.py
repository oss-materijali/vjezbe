"""
1. Napisati program koji od korisnika ?ita dva po dva broja,
ukupno 20 brojeva. Svaka dva broja predstavljaju rezultat nekog
natjecanja  mogu biti (1,0), (0,1) ili (0.5, 0.5). Ako uneseni brojevi
nisu ispravni, program ispisuje gre?ku i tra?i ponovan unos. Na
kraju program ispisuje ukupan zbroj prvih i ukupan zbroj drugih
brojeva.

"""

sum_x, sum_y = 0, 0


for i in range(20):
    while True:
        x = int(input("x: "))
        y = int(input("y: "))
        print("\n")

        if x < 0 or y < 0:
            print("Negativni unos!")
            continue

        break

    sum_x = sum_x + x
    sum_y = sum_y + y

print("Rezultat: ", (sum_x, sum_y))

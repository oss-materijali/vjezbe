"""
Napisati program koji od korisnika čita 10 brojeva.
Program nakon toga ispisuje koliko je upisanih brojeva bilo djeljivo
sa prethodno upisanim brojem.
Npr. za unose 2,4,3,2,4,3,2,4,5,2 program ispisuje 3.
"""

div_counter = 0
num = 0

for i in range(10):
    prev = num

    print("Unesi ", i, ". broj: ", sep="", end="")
    num = int(input())

    if i == 0:
        continue
    if num == 0:
        print("modulo 0, skipping input")
        num = prev
        continue
    if num % prev == 0:
        div_counter += 1


print("div_counter: ", div_counter)

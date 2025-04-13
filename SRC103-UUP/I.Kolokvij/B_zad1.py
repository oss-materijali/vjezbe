"""
1. Napisati program koj od korisnika ?ita brojeve.
brojeve dok god je avaki upisani broj djeljiv sa erethoogam dita
upisanim
"""

x = int(input("x: "))
while True:
    prev_x = x
    x = int(input("x: "))

    if x % prev_x == 0:
        continue
    break

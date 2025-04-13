"""
Napisati program koji od korisnika čita brojeve.
Program čita brojeve dok god je svaki upisani broj djeljiv sa prethodno upisanim brojem.
"""

num = 0

while True:
    prev = num
    num = int(input("Unesi broj: "))

    if prev == 0:
        print("C_ERR: prev == 0; skipping division")
        continue

    if num % prev == 0:
        continue
    break

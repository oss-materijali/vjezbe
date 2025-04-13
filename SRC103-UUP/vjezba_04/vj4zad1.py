from math import sqrt

while True:

    a = int(input("a: "))  # ili float(input())
    b = int(input("b: "))  # .

    if a <= 0 or b <= 0:
        print("Duljine kateta moraju biti pozitivne velicine.")
        continue

    break

c = sqrt(a**2 + b**2)

print("Hipotenuza trokuta:", c)

"""
Napisati program koji od korisnika čita stringove i sprema ih u listu. Kada korisnik upiše samo točku,
program završava i ispisuje sve stringove iz liste koji su duži od 5 znakova.
"""

list_a = []

while True:
    temp = input("Unesi string: ")

    if temp == ".":
        break

    list_a.append(temp)

print(list_a)

for i in list_a:
    if len(i) > 5:
        print(i, end=", ")

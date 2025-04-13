"""
Napisati program koji od korisnika čita brojeve. Ako uneseni broj ima manje od 3 djelitelja, program
nastavlja sa čitanjem brojeva. U suprotnom program završava. Program se oslanja na dodatnu funkciju
brdjel() koja prima broj i vraća broj djelitelja primljenog broja. Napisati funkciju brdjel().
"""


def brdjel(number):
    counter = 0
    for i in range(1, number + 1):
        if number % i == 0:
            counter += 1
    return counter


while True:
    number = int(input("Unesi broj: "))
    print("brdjel: ", brdjel(number))
    if brdjel(number) > 3:
        break

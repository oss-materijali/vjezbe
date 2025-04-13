"""
Napisati program koji od korisnika čita brojeve i sprema ih u listu. Kada korisnik upiše 0, program pita
za dodatni broj N i ispisuje zbroj zadnjih N upisanih brojeva. Ako u listi nema dovoljno brojeva, program
ispisuje grešku i završava.
"""

list_a = []
sum_a = 0

while True:
    temp = int(input("Unesi broj: "))

    if temp == 0:
        n = int(input("Unesi N: "))

        if n > len(list_a):
            print("Err: N je veci od velicine liste")
            break

        for i in list_a[-n:]:
            sum_a += i

        print("N: ", sum_a)
        print(list_a)

        break

    list_a.append(temp)

from random import randint

counter = 0
while counter < 10:
    broj = randint(0, 1000)
    if broj > 100 and broj < 500:
        print(broj, '|' , counter)
        counter += 1


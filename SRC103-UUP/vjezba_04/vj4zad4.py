even_counter = 0
odd_counter = 0

for i in range(0, 10):
    while True:
        print("Unesi ", i+1, ". broj: ", sep='')
        temp = int(input())
        
        if temp == 0:
            continue
        break

    if temp % 2 == 0:
        even_counter += 1
    else:
        odd_counter += 1

print("---")
print("Broj parnih brojeva:", even_counter)
print("Broj neparnih brojeva:", odd_counter)

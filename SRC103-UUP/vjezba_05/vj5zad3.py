broj = int(input("Unesite broj: "))
bit_counter = 0

for i in range(32):
    if (broj >> i) & 1:
        bit_counter += 1
        
    
print("Broj bitova na jedan: ", bit_counter)

negative_inputs_counter = 0

while True:
    temp = int(input("Unesi broj: "))

    if temp == 0:
        break

    if temp < 0:
        negative_inputs_counter += 1
        print("Unesite pozitivan broj.")

print("Broj negativnih unosa:", negative_inputs_counter)

broj = int(input("Unesi broj:"))

broj -= 1
for i in range(broj):

    for j in range(broj):
        if j == 0 or j == (broj - 1):
            print("*", end='', sep="")
        elif i == broj/2:
            print("*", end='', sep="")
        else:
            print("-", end='', sep="")
    print("")
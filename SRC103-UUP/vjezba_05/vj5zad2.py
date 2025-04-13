while True:
    a = int(input("a: "))
    b = int(input("b: "))
    
    if a >= 0 and b >= 0:
        if a < b:
            for i in range(a, b):
                print(i)
        else:
            for i in range(b, a):
                print(i)
    else:
        print("Err: Negativan broj!")
        break
    
#Napisati program koji prima tri broja i zatim ih ispisuje poredane po veličini, bez korištenja dodatnih
#varijabli

x = int(input("x: "))
y = int(input("y: "))
z = int(input("z: "))

print("Brojevi: ")
for i in range(0, 3):
    if z > y and z > x:
        print(z)
        z=float('-inf')
    if y > z and y > x:
        print(y)
        y=float('-inf')
    if x > z and x > y:
        print(x)
        x=float('-inf')


broj = int(input("Unesi broj: "))

brojac = 0
zbroj = 0

while broj != 0:
    if broj & 1 :
        brojac += 1
    broj = broj >> 1

for i in range(brojac):
    broj = int(input("Unesi broj(za zbroj): "))
    zbroj += broj

print(zbroj)
        
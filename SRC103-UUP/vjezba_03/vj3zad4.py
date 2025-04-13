# a) 
x = 5 
y = 3 
(x / 2) + (y / 2) # očekuje se 4 
 
# b) 
x = 5 
y = x + 5 
x + y % 2 # očekuje se 1 
 
# c) 
x = 1234 
# očekuje se ispisi: 1, 2, 3 i 4 
x % 10 
x / 10 % 10 
x = x / 10 
x % 100 
(x / 1000) % 10

# a 
x = 5 
y = 3 
print(int( (x / 2) + (y / 2) ))
# python koristi float vrstu za spremanje rezultat dijeljenja
# int() prebaci float() rijesenje "/" operacija u Integer

# b
x = 5 
y = x + 5 
print( (x + y) % 2 )
# 5 + 10 % 2, 10 % 2 ima prednost nad zbrajanjem (modul dijeljenje)
# 5 + 0 = 5, najlaksi nacin za dobijanje 1 je da neparni broj 15 % 2
# zagrade postavljene da dobijemo "15" prije modul operacije

# c) 
x = 1234 
# očekuje se ispisi: 1, 2, 3 i 4 
print(x // 1000 )
print((x // 100) % 10) 
print((x // 10) % 10 )
print(x % 10)
# koristilo se normalno dijeljenje ne cjelobrojno
# varijalba x se mijenja tokom ispisa pa je cijeli kod tesko citat
# napisa san ispocetka sve jer je previse gresaka
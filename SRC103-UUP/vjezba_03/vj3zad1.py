# a
print("a", (2+3) / 4) 
#1.25

#b
print("b", (2+2) / 4) 
#1.0 

#c
print("c", (2+2) / 4.0 )
#1.0

#d
print("d", (2+3) // 4 ) 
#1

#e
print("e", 113 % 2 ) 
#1

#f
print("f", (2+3) % 4 ) 
#1

#g
print("g", (2+3) % 4 == (2+3) / 4 ) 
#False

#h
print("h", (123 % 10) == 3 and (123 / 10) == 12 ) 
#False

#i
print("i", (123 % 100) != 1 or (123 / 10) == 3 ) 
#True

#j
print("j", 5 < 3 or 5 > 3 and 5 == 3 ) 
#False

#k
print("k", (5 < 3 or 5 > 3) and 5 == 3 ) 
#False

#l
print("l", (5 < 3 or 5 > 3) and (5 == 3 or 3 == 5) ) 
#False
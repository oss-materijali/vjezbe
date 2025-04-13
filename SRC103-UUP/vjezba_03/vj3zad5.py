a = int(input("a: "))
b = int(input("b: "))

#a
if a > 0 and b > 0:
    print("a) ", a > 0 and b > 0)
    
#b 
if a%2==0 or b%2==0:
    print("b) ", a%2==0 or b%2==0)
    
#c
if (a%2==0 and b%2==0) and a > b:
    print("c) ", (a%2==0 and b%2==0) and a > b)

#d
if a%2!=0 or b%2!=0:
    print("d) ", a%2!=0 or b%2!=0)
    
#e
if (a%2!=0 or b%2!=0) and (a%2==0 or b%2==0):
    print("e) ", (a%2!=0 or b%2!=0) and (a%2==0 or b%2==0))
    
#f
if a%b==0 or b%a==0:
    print("f) ", a%b==0 or b%a==0)
    
#g
if a%b==0 and b%a==0:
    print("g)", a%b==0 and b%a==0)


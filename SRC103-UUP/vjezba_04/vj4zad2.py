# Proizvoljne vrijednosti
a = 32  # + 8
b = 0

# a
if a & 1 == 1:  # mask: ...1 (8421)
    print("a)", a & 1 == 1)

# b
if b & 8 == 8:  # mask: ...1000
    print("b)", b & 8 == 8)

# c
if (a & 7) == (b & 7):  # mask: ...111
    print("c)", (a & 7) == (b & 7))

# d
if (a & 16) == (b & 16):  # mask: ...1110
    print("d)", (a & 16) == (b & 16))

# e
if (a >> 3) & 1 == 1 and (a >> 5) & 1 == 1:  # mask: ...1
    print("e)", (a >> 3) & 1 == 1 and (a >> 5) & 1 == 1)

# f
if (a >> 3) & 1 == 1 or (a >> 5) & 1 == 1:  # mask: ...1
    print("f)", (a >> 3) & 1 == 1 or (a >> 5) & 1 == 1)

# g
if ((a >> 3) & 1 == 1) ^ ((a >> 5) & 1 == 1):  # mask: ...1
    print("g)", ((a >> 3) & 1 == 1) ^ ((a >> 5) & 1 == 1))

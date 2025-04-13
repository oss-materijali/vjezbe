ip_adresa = int(input("IP adresa (32-bit unsigned int): "))

# X1.X2.X3.X4 ; X = 8-bit (octet),
# 2**8-1 = 255 ; 8-bit limit (mask:1111 1111)

# ip_X1 = (ip_adresa >> (8*3)) & 255
# ip_X2 = (ip_adresa >> (8*2)) & 255
# ip_X3 = (ip_adresa >> (8*1)) & 255
# ip_X4 = (ip_adresa >> (8*0)) & 255

# ili pomocu liste
octet = []
for i in range(3, -1, -1):
    octet.append((ip_adresa >> (8*i)) & 255)

GORNJI_OPSEG_IP_ADRESA = [127, 255, 255, 255]  # 2147483647 = 127.255.255.255
# pretvaranje ip adrese u 32-bit int
gornji_opseg = 0
for i in GORNJI_OPSEG_IP_ADRESA:
    gornji_opseg = (gornji_opseg << 8) | i

print("IP adresa: ", octet)

while True:
    if ip_adresa <= 0 or ip_adresa >= gornji_opseg:
        print("IP adresa je izvan opsega zadatka.")
        break

    a = b = c = False

    # a
    if octet[0] == 196 and octet[1] == 68:
        a = True

    # b
    if octet[-1] < 128 and octet[-2] < 128:
        b = True

    # c
    if octet[0] == octet[-1]:
        c = True

    print("a)", a)
    print("b)", b)
    print("c)", c)

    break

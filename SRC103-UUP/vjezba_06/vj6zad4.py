def uzmi_znamenku(broj, index):
    return (broj // 10**index+1) % 10

# (45678 // )


print(uzmi_znamenku(45678, 4))
print(uzmi_znamenku(12345678, 2))
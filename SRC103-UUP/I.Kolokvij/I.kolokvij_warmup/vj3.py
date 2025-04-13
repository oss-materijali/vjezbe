"""
Napisati program koji provjerava jesu li sve znamenke 5-oro znamenkastog broja jednake.
"""

broj = int(input())

# izbaci 6th+ znamenku broja
# broj = broj % 10**5

if (broj % 10) * 11111 == broj:
    print(True)
else:
    print(False)

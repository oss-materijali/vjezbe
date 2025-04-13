"""
Napisati funkciju koja pretvara 3D koordinatu u 2D koordinatu. Koordinate su predstavljene trojkom ili
parom decimalnih brojeva. Funkcija prima 3D koordinatu kao parametar i vraća 2D koordinatu.
Funkcija pretvara koordinate iz 3D u 2D tako da od 3D koordinate uzme dvije najmanje vrijednosti.
"""


def convert_3d_to_2d(coordinate=(0, 0, 0)):
    x = float(coordinate[0])
    y = float(coordinate[1])
    z = float(coordinate[2])

    if x >= y and x >= z:
        return y, z
    if y >= x and y >= z:
        return x, z
    if z >= x and z >= y:
        return x, y


print(convert_3d_to_2d((3, 6.22, 12.1)))
print(convert_3d_to_2d((6, 5.99, 6.01)))
print(convert_3d_to_2d((12, 6, 3)))

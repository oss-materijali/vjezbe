def sredina_tri_broja(x, y, z):
    if x > y > z or x < y < z:
        return y
    if y > x > z or y < x < z:
        return x
    if x > z > y or x < z < y:
        return z

    
print(sredina_tri_broja(5, 6, 7))
print(sredina_tri_broja(4, 3, 10))
print(sredina_tri_broja(555, 645634, 7345))
print(sredina_tri_broja(4456, 653, 6565610))
print(sredina_tri_broja(565, 665, 765))
print(sredina_tri_broja(4897, 323, 4130))
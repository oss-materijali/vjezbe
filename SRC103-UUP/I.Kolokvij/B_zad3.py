"""
3. Napisati funkciju koja kao parametar prima broj vra?a zbroj
prve i zadnje znamenke broja.
"""


def function(x):
    tmp = x
    lenght_x = 0
    while tmp != 0:
        tmp = tmp // 10
        lenght_x += 1
    lenght_x -= 1  # match index 0

    return x % 10 + (x // 10**lenght_x) % 10


print(function(10003754893758934758931))

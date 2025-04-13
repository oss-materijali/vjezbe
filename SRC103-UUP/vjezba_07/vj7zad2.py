"""
Napisati funkciju koja ispisuje sve proste faktore nekog broja. Napisati pomoćnu funkciju koja
provjerava je li broj prost.
"""

from math import sqrt


def is_prime(number):
    if number < 2:
        return False

    for i in range(2, int(sqrt(number)) + 1):
        if number % i == 0:
            return False

    return True


def prime_factors(number):
    for i in range(1, number + 1):
        if number % i == 0 and is_prime(i):
            print(i, end=", ")
    print()


prime_factors(12)
prime_factors(315)

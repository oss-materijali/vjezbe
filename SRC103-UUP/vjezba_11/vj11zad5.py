"""
Napisati funkciju koja prima rječnik gdje su ključevi imena kandidata, a vrijednost broj glasova koje je
dobio na izborima. Funkcija vraća novi rječnik koji sadrži imena kandidata i postotak dobivenih
glasova.
"""


def function(names):
    total_votes = 0
    for k in names:
        total_votes += names[k]
    for k in names:
        names[k] = str((names[k] / total_votes) * 100)[:4] + "%"
    return names


rijecnik = {
    "ja": 70,
    "mi": 20,
    "vi": 7,
    "oni": 3,
}

print(function(rijecnik))

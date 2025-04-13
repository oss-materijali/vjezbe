"""
Napisati funkciju koja prima listu stringova i vraća novu listu stringova. U novu listu se dodaju samo
stringovi koji su ispravni e-mailovi po formatu 'ime.prezime@unist.hr', gdje su ime i prezime dugi do
10 znakova.
"""


def function(emails):
    ADDRESS = "unist.hr"

    valid_emails = []

    for i in emails:
        i = str(i)

        if "@" in i:
            prefix, suffix = i.split("@")
        else:
            continue

        name, surname = prefix.split(".")

        if len(name) <= 10 and len(surname) <= 10 and suffix == ADDRESS:
            print(i)
            valid_emails.append(i)

    return valid_emails


print(
    function(
        [
            "ime.prezjdksjfksjfksime@unist.hr",
            "ime.prezime@unist.hr",
            "ime.prezime@unisthr",
        ]
    )
)

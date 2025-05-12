#include <stdio.h>
#include <string.h>

/*
1. Napisati funkciju koja za dvije osobe dane sa imenom i prezimenom vraća
ime one osobe koja je prije po alfabetu.
*/
char *manual_sorted_first_name(char name_a[], char surname_a[], char name_b[],
                               char surname_b[]);
char *sorted_first_name(char name_a[], char surname_a[], char name_b[],
                        char surname_b[]);

int main(void) {
  char person_a_name[] = "Jackie";
  char person_a_surname[] = "Welles";
  char person_b_name[] = "Evelyn";
  char person_b_surname[] = "Parker";

  // printf("%s\n", manual_sorted_first_name(person_a_name, person_a_surname,
  //                                         person_b_name, person_b_surname));
  printf("%s\n", sorted_first_name(person_a_name, person_a_surname,
                                   person_b_name, person_b_surname));
  return 0;
}

char *sorted_first_name(char name_a[], char surname_a[], char name_b[],
                        char surname_b[]) {
  int compared_names = strcmp(name_a, name_b);
  int compared_surnames = strcmp(surname_a, surname_b);

  if (compared_surnames < 0)
    return name_a;
  else if (compared_surnames > 0)
    return name_b;
  if (compared_names < 0)
    return name_a;
  else if (compared_names > 0)
    return name_b;

  return name_a; // name_b; // strings are equal
}

char *manual_sorted_first_name(char name_a[], char surname_a[], char name_b[],
                               char surname_b[]) {
  int i = 0;
  while (surname_a[i] != '\0' || surname_b[i] != '\0') {
    if (surname_a[i] < surname_b[i])
      return name_a;
    else if (surname_a[i] > surname_b[i])
      return name_b;

    i++;
  }
  i = 0;
  while (name_a[i] != '\0' || name_b[i] != '\0') {
    if (name_a[i] < name_b[i])
      return name_a;
    else if (name_a[i] > name_b[i])
      return name_b;
    i++;
  }

  return name_a;
  // return name_b;
}

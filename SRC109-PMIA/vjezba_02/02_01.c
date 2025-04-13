#include <stdio.h>

/*
1. Napisati program u kojem korisnik unosi inicijale sve dok ne unese znak '0'.
Program ispisuje inicijale osobe koja je prva u alfabetu gledajući prvo po
prezimenu, pa po imenu, a zatim inicijale osobe koja je zadnja u alfabetu.
Prilikom unosa, prvo se unosi ime, a zatim prezime.
*/

int main(void) {
  
  char name, surname;
  char high_name, high_surname = 'Z' + 1; // lowest so the first one is higher
  char low_name, low_surname = 'A' - 1;   // highest so the first one is lower

  while (1) {
    printf("Unesi inicijale: ");
    scanf(" %c %c", &name, &surname);

    if (surname == '0' || name == '0') {
      break;
    }

    if (surname < high_surname || (surname == high_surname && name < high_name)) {
      // flipped operator beucase of char bs

      high_surname = surname;
      high_name = name;
    }

    if (surname > low_surname || (surname == low_surname && name > low_name)) {
      // flipped operator beucase of char bs

      low_surname = surname;
      low_name = name;
    }
  }

  printf("Prvi inicijali: %c%c\n", high_name, high_surname);
  printf("Zadnji inicijali: %c%c\n", low_name, low_surname);

  return 0;
}

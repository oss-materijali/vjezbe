#include <limits.h>
#include <stdio.h>

/*
2. * Napisati funkciju za pretvaranje vrijednosti varijable tipa short u char
vrijednost. Korisnik unosi n brojeva u funkciji main. Za prebrojanje koristiti
naredbu do..while.

◦ Ako je broj negativan, dodijeliti mu vrijednost znaka ':'.
◦ Ako je broj unutar zatvorenog intervala [0, CHAR_MAX] ne mijenja mu se vrijed-
nost.
◦ Ako je broj van danog zatvorenog intervala [0, CHAR_MAX], dodijeliti mu
jedinstvenu vrijednost iz zatvorenog intervala ['A', 'Z'].

Primjer: Za broj 500, ispisat će znak 'G', a za broj -500 znak ':'.

Napomena: Za konvertiranje u zatvoreni interval ['A', 'Z'] koristite sličnu
logiku kao u petom zadatku vježbe 1. Konstanta [CHAR_MAX] definirana je u
limits.h.
*/

char short_to_char(short num) {

  if (num < 0) {
    return ':';
  }

  if ((num < 0) || (num > CHAR_MAX)) {
    // interval: ['A', 'Z'], +1 includes upper bound
    num = 'A' + num % ('Z' - 'A' + 1);
  }

  return num;
}

int main(void) {

  unsigned int n;
  short input;

  printf("Unesi n: ");
  scanf(" %d", &n);
  printf("Unesi %d broja:\n", n);

  unsigned int i = 0;
  do {
    scanf(" %hd", &input);
    printf("char: %c\n", short_to_char(input));

    i++;
  } while (i < n);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
5. Napisati program koji generira dva pseudoslučajna broja iz zatvorenog
intervala [a, b], gdje vrijednosti varijable a i b unosi korisnik. Program
ispisuje oba broja, te u novom redu vrijednost većeg.

Za generiranje pseudoslučajnog broja koristiti funkciju rand() čiji se prototip
nalazi u stdlib.h, koja generira broj u rasponu od 0 do RAND_MAX.

Za transformaciju generiranog broja x u broj y iz intervala [a, b] koristite
y = a + rand()%(b-a+1)
*/

int main(void) {

  srand(time(NULL)); // seed for randomness depending on unix time
  int a, b = 0;

  printf("Unesi interval:\n");
  printf("Format: a, b\n");
  scanf("%d, %d", &a, &b);

  if (a >= b) {
    printf("Nevaljani interval!\n");
    return 1;
  }

  int x, y;

  x = rand();
  y = a + x % (b - a + 1); // +1 is to include upper bound
  printf("1. Broj: %d\n", y);

  x = rand();
  y = a + x % (b - a + 1);
  printf("2. Broj: %d\n", y);

  return 0;
}

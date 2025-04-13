#include <math.h>
#include <stdio.h>

/*
3. Napisati program koji provjerava je li unesen troznamenkasti broj Armstrongov.
Armstrongovi brojevi su brojevi koji su jednaki zbroju kubova svojih znamenki.
Primjer: Troznamenkasti Armstrongovi brojevi su 153, 370, 371 i 407.
*/

int main(void) {
  int input;

  printf("Unesi troznamenkasti broj:\n");
  scanf("%d", &input);

  if (input < 100 || input > 999) {
    printf("Nije unesen troznamenkasti!!");
    return 1;
  }

  int first, second, third;
  first = input % 10;
  third = input / 100;
  second = (input / 10) % 10;

  if (pow(first, 3) + pow(second, 3) + pow(third, 3) == input) {
    printf("Broj je Armstrongov.");
  } else {
    printf("Broj NIJE Armstrongov");
  }
  printf("\n");

  return 0;
}

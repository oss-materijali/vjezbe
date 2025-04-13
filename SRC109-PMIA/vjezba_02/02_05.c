#include <stdio.h>

/*
5. Napisati funkciju koja u intervalu [a, b] računa ukupan zbroj svakog n-tog
broja. Brojeve a, b, n unosi korisnik.
*/

int ukupan_zbroj(int a, int b, int n) {
  int sum = 0;

  for (int i = a; i <= b; i = i + n) {
    sum = sum + i;
  }

  return sum;
}

int main(void) {
  int a, b, n;

  printf("Unesi interval a i b:\n"
         "Format: a, b\n");
  scanf("%d, %d", &a, &b);
  if (b < a) {
    printf("ERROR: nevalidan interval!\n");
    return 1;
  }
  printf("Unesi n: ");
  scanf("%d", &n);

  printf("Ukupan zbroj: %d\n", ukupan_zbroj(a, b, n));

  return 0;
}

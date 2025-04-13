#include <stdio.h>

/*
4. Napisati fukciju koja koristeći bitovne operatore ispituje je li dani n
potencija broja dva.
Potencije broja dva imaju u binarnom zapisu samo jednu jedinicu.
*/

int fun(int n) {
  int flag = 0;
  int tmp = n;

  if (tmp == 1 || tmp < 0) {
    flag = 2;
  }

  while (tmp > 0) {
    if (tmp & 1) {
      flag++;
    }
    if (flag >= 2) {
      break;
    }

    tmp = tmp >> 1;
  }

  if (flag == 1) {
    printf("%d \tje potencija broja 2\n", n);
    return 1;
  }
  printf("%d \tNIJE potencija broja 2\n", n);

  return 0;
}

int main(void) {

  fun(8);
  fun(1);
  fun(15);
  fun(-16);
  fun(2048);

  return 0;
}

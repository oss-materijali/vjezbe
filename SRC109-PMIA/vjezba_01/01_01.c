#include <stdio.h>

/*
1. Napisati program u kojem se unose dva cijela broja i jedan znak
('+','-','*','/') te se ovisno o znaku izvršava odgovarajuća operacija. Za
brojeve čiji kvocijent nije cijeli broj ispisati rezultat cjelobrojnog
dijeljenja i ostatak, a u slučaju da je djelitelj nula ispisati ”Zabranjeno
je dijeliti s nulom!!!”.

Primjer: Za brojeve 10 i 4, program ispisuje ”2 i ostatak 2”.
*/

int main(void) {
  int x, y, sol;
  int sol_rem;
  char op;
  printf("Unesi broj, zatim znak, zatim broj:\n");

  scanf("%d", &x);
  scanf(" %c", &op);
  scanf("%d", &y);

  switch (op) {
  case '+':
    sol = x + y;
    break;
  case '-':
    sol = x - y;
    break;
  case '*':
    sol = x * y;
    break;
  case '/':
    if (!y) {
      printf("Zabranjeno je dijeliti s nulom!!!\n");
      return 1;
    }
    sol = x / y;
    if (x % y != 0)
      sol_rem = x % y;
    break;
  default:
    printf("Neispravan operator!!\n");
    return 1;
  }

  printf("%d %c %d = %d\n", x, op, y, sol);
  printf("rijesenje: %d", sol);
  if (sol_rem)
    printf(" i ostatak %d", sol_rem);

  printf("\n");
  return 0;
}

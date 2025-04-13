#include <stdio.h>

/*
2. Napisati program u kojem se unosi vrijeme početka i kraja nekog filma (u
satima, minutama i sekundama) i ispisuje trajanje filma u satima, minutama i
sekundama..
*/

int main(void) {
  int start_h, start_min, start_s, end_h, end_min, end_s;
  int start_cmp = 0;
  int end_cmp = 0;

  printf("Unesi vrijeme starta filma:\nformat: 00:00:00\n");
  scanf("%d:%d:%d", &start_h, &start_min, &start_s);
  printf("Kraj filma:\n");
  scanf("%d:%d:%d", &end_h, &end_min, &end_s);
  printf("\n");

  // end and start into seconds
  start_cmp = start_s + start_min * 60 + start_h * 60 * 60;
  end_cmp = end_s + end_min * 60 + end_h * 60 * 60;

  /* printf("pocetak u sekundama: %d\n", start_cmp); */
  /* printf("kraj u sekundama: %d\n", end_cmp); */

  if (end_cmp < start_cmp) {
    printf("Nevazece vrijeme!!\n");
    return 1;
  }

  int sol;
  sol = end_cmp - start_cmp;

  // duration from seconds into hr/min/s
  int sol_h, sol_min, sol_s;

  sol_h = sol / 3600;
  sol = sol - sol_h * 3600;
  sol_min = sol / 60;
  sol = sol - sol_min * 60;
  sol_s = sol;
  // sol = sol - sol_s; // sol is zero after this, doesn't matter

  printf("Trajanje filma:\n\tSati: %d\n\tMinute: %d\n\tSekunde: %d\n", sol_h,
         sol_min, sol_s);

  return 0;
}

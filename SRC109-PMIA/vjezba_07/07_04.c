#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
4. Napisati funkciju koja će iz stringa koji predstavlja url izvući (i vratiti)
url root-a (bez oznake protokola).
Primjer: Za url http://www.hackcanada.com/ice3/2600/2600_15-3_p10.txt
adresa root-a je www.hackcanada.com.
*/

char *my_solution_slice_url(char url[]);
char *better_slice_url(char url[]);

int main(void) {
  char url[] = "http://www.hackcanada.com/ice3/2600/2600_15-3_p10.txt";

  char *root_url = my_solution_slice_url(url);
  if (!root_url) return 1;
  char *better_root_url = my_solution_slice_url(url);
  if (!better_root_url) return 1;

  printf("original: %s\n"
         "root: %s\n"
         "better_root: %s\n",
         url, root_url, better_root_url);

  free(root_url);
  free(better_root_url);
  return 0;
}

char *better_slice_url(char url[]) {
  char *start = strchr(url, '/');
  if (!start) return NULL;
  start += 2;

  int lenght;

  char *end = strchr(start, '/');
  if (!end)
    lenght = strlen(start);
  else
    lenght = end - start;

  char *slice = (char *)malloc(lenght + 1);
  if (!slice) return NULL;

  strncpy(slice, start, lenght);
  slice[lenght] = '\0';

  return slice;
}

char *my_solution_slice_url(char url[]) {
  char *slice = (char *)malloc(strlen(url) + 1);
  if (!slice) return NULL;

  char *slice_ptr = url;

  slice_ptr = (char *)strchr(url, '/');
  if (!slice_ptr) exit(2);

  slice_ptr += 2; // it now points to the start of the slice http://[w]ww

  int i = 0;
  while (slice_ptr[i] != '/' && slice_ptr[i] != '\0') {
    slice[i] = slice_ptr[i];
    i++;
  }
  slice[i] = '\0';

  char *smaller_slice = (char *)realloc(slice, i + 1);
  if (!smaller_slice) { free(slice); return NULL; }

  return smaller_slice;
}

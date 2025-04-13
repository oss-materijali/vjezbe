#include <stdio.h>

int main(void)
{
    int a, b, tmp;
    printf("Unesi dva broja \n");
    scanf("%d %d", &a, &b);

    // tmp = a;
    // a = b;
    // b = tmp;

    b = a + b;
    a = b - a;
    b = b - a;

    printf("a: %d, b: %d", a, b);
}

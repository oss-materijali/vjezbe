#include <stdio.h>

int main(void)
{

    int a, b, c, tmp;
    printf("Unesi tri broja \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b)
    {
        tmp = b;
        b = a;
        a = tmp;

    }

    if(a > c)
    {
        tmp = c;
        c = a;
        a = tmp;

    }

    if(b > c)
    {
        tmp = c;
        c = b;
        b = tmp;

    }

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
}

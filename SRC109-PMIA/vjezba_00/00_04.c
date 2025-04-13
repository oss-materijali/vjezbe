#include <stdio.h>

int main(void)
{

    int a, b, c;
    printf("Unesi dva cijela broja \n");
    scanf("%d %d", &a, &b);

    if(a < b)
    {
        printf("ispis: %d\n", a);
    }
    else
    {
        printf("ispis: %d\n", b);
    }

    return 0;

}

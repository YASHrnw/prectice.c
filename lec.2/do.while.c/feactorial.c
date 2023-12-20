#include <stdio.h>

int main()
{
    int n, i = 1, f = 1;

    printf("enter value n:");
    scanf("%d", &n);

    do
    {
        f *= i;
        i++;

    } while (i <= n);
    printf("\n feactorial %d", f);
    return 0;
}
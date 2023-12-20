#include <stdio.h>

int main()
{
    int i = 1, n;

    printf("\n enter multy table:");
    scanf("%d", &n);

    do
    {
        printf("\n %d *%d=%d", n, i, n * i);
        i++;

    } while (i<=10);

    return 0;
}
#include <stdio.h>

int main()
{

    int n, i = 1;

    printf("\n enter value");
    scanf("%d", &n);

    do
    {
        printf("%d", i);
        i++;
    } while (i <= n);

    return 0;
}
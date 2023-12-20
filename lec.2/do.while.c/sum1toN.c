#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0;

    printf("enter value n:");
    scanf("%d", &n);

    do
    {
        sum += i;
        i++;

    } while (i <= n);
    printf("\n sum is %d", sum);

    return 0;
}

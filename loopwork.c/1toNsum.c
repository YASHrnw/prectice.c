#include <stdio.h>

int main()
{
    int i = 1, n, sum;
    printf("enter value");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("\n sum %d", sum);
    return 0;
}
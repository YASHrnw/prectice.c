#include <stdio.h>

int main()
{
    int i, n, count = 0;
    printf("\n Digits of number :");
    scanf("%d", &n);
    while (n > 0)
    {
        i = n % 10;
        n /= 10;
        count++;
    }
    printf("\n %d", count);

    return 0;
}
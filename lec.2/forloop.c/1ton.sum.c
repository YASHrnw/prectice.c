#include <stdio.h>

int main()
{
    int i = 1, n, sum = 0;

    printf("\n enter num n:");
    scanf("\n %d", &n);

    for (; i <= n; i++)
    {
        sum += i;
    }
    printf("\n sum is %d", sum);
    return 0;
}

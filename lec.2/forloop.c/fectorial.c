#include <stdio.h>

int main()
{

    int i = 1, f = 1, n;

    printf("enter number n:");
    scanf("\n %d", &n);

    for (; i <= n; i++)
    {
        f *= i;
    }
    printf("\n fectorial is %d", f);
    return 0;
}
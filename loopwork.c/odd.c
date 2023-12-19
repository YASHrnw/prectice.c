#include <stdio.h>

int main()
{
    int i = 1, n;
    printf("\n enter no:");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            printf("\n %d", i);
        }
        i++;
    }

    return 0;
}
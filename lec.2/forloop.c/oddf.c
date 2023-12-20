#include <stdio.h>

int main()
{

    int i = 1, n;

    printf("\n enter value n:");
    scanf("\n %d", &n);

    for (; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("\n %d",i);
        }
    }

    return 0;
}
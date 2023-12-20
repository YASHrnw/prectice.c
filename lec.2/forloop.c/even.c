#include <stdio.h>

int main()
{

    int n;

    printf("\n enter value n:");
    scanf("\n %d", &n);

    for (; n >= 1; n--)
    {
        if (n % 2 == 0)
        {
            printf("\n %d", n);
        }
    }

    return 0;
}
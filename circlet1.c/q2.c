#include <stdio.h>

int main()
{

    int i,j,k = 11;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++, k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
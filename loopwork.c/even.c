#include <stdio.h>

int main()
{
    int p;
    printf("enter value");
    scanf("%d", &p);

    while (p >= 1)

    {
        if (p % 2 == 0)
        {
            printf("\n %d", p);
        }
        p--;
    }

    return 0;
}
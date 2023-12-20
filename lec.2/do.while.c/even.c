#include <stdio.h>

int main()
{
    int n;

    printf("enter value n:");
    scanf("%d", &n);

    do
    {
        if (n % 2 == 0)
        {
            printf("\n %d", n);
        }
        n--;

    } while (n>=1);

    return 0;
}
